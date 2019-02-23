//
//  Vector3.cpp
//
#include "stdafx.h"
#include <iostream>
#include <cstdlib>	// for rand()
#include <cassert>
#include "Vector3.h"

using namespace std;
namespace
{
	//
	//  random (from Functions.h/.cpp)
	//
	//  Purpose: To generate a psudorandom double in the
	//	     specified range.
	//  Argument(s):
	//	<1> min: The inclusive minimum
	//	<2> max: The exclusive maximum
	//  Precondition:
	//	<1> min <= max
	//	<2> The random number generator must have been
	//	    initialized
	//  Returns: A psuedorandom value in the range
	//	     [min, max).
	//  Side Effect: N/A
	//  Note: Calls the rand() function
	//

	double random (double min, double max)
	{
		assert(min <= max);

		double random0to1 = (double)rand() / ((double) (RAND_MAX) + 1.0);
		return min + random0to1 * (max - min);
	}



	const unsigned int MATRIX3X3_COLUMNS = 9;
	const unsigned int MATRIX3X3_ROWS = 9;
	const unsigned int MATRIX3X3_ENTRIES = MATRIX3X3_COLUMNS * MATRIX3X3_ROWS;

	//
	//  Matrix3x3
	//
	//  A minimal class to encapsulate a 3x3 matrix.  This
	//    class is used when rotating a Vector3 around an
	//    arbitrary axis.
	//

	class Matrix3x3
	{
	  public:
		Matrix3x3(double e11, double e12, double e13,
			  double e21, double e22, double e23,
			  double e31, double e32, double e33)
		{
			ma_entries[0] = e11;
			ma_entries[1] = e12;
			ma_entries[2] = e13;
			ma_entries[3] = e21;
			ma_entries[4] = e22;
			ma_entries[5] = e23;
			ma_entries[6] = e31;
			ma_entries[7] = e32;
			ma_entries[8] = e33;
		}

		Matrix3x3(const Matrix3x3& original)
		{
			for(unsigned int i = 0; i < MATRIX3X3_ENTRIES; i++)
				ma_entries[i] = original.ma_entries[i];
		}

		Matrix3x3 operator+ (const Matrix3x3& other) const
		{
			Matrix3x3 result(*this);

			for(unsigned int i = 0; i < MATRIX3X3_ENTRIES; i++)
				result.ma_entries[i] += other.ma_entries[i];

			return result;
		}

		Matrix3x3 operator- (const Matrix3x3& other) const
		{
			Matrix3x3 result(*this);

			for(unsigned int i = 0; i < MATRIX3X3_ENTRIES; i++)
				result.ma_entries[i] -= other.ma_entries[i];

			return result;
		}

		Matrix3x3 operator* (double constant) const
		{
			Matrix3x3 result(*this);

			for(unsigned int i = 0; i < MATRIX3X3_ENTRIES; i++)
				result.ma_entries[i] *= constant;

			return result;
		}

		Vector3 operator* (const Vector3& right) const
		{
			return Vector3(right.x * ma_entries[0] + right.y * ma_entries[1] + right.z * ma_entries[2],
				       right.x * ma_entries[3] + right.y * ma_entries[4] + right.z * ma_entries[5],
				       right.x * ma_entries[6] + right.y * ma_entries[7] + right.z * ma_entries[8]);
		}

		inline double getEntry (unsigned int row, unsigned int column) const
		{
			assert(row < MATRIX3X3_ROWS);
			assert(column < MATRIX3X3_COLUMNS);

			return ma_entries[row * MATRIX3X3_COLUMNS + column];
		}

	  private:
		double ma_entries[MATRIX3X3_ENTRIES];
	};

	const Matrix3x3 INDENTITY_MATRIX(1, 0, 0, 0, 1, 0, 0, 0, 1);

}	// end of anonymous namespace



const Vector3 Vector3 :: ZERO(0.0, 0.0, 0.0);
const Vector3 Vector3 :: UNIT_X_PLUS(  1.0,  0.0,  0.0);
const Vector3 Vector3 :: UNIT_X_MINUS(-1.0,  0.0,  0.0);
const Vector3 Vector3 :: UNIT_Y_PLUS(  0.0,  1.0,  0.0);
const Vector3 Vector3 :: UNIT_Y_MINUS( 0.0, -1.0,  0.0);
const Vector3 Vector3 :: UNIT_Z_PLUS(  0.0,  0.0,  1.0);
const Vector3 Vector3 :: UNIT_Z_MINUS( 0.0,  0.0, -1.0);



double Vector3 :: cosAngle (const Vector3& other) const
{
	assert(!isZero());
	assert(!other.isZero());

	double ratio = dotProduct(other) / (getNorm() * other.getNorm());

	//  In theory, ration should always be in the range [-1, 1].
	//    Sadly, in reality there are floating point errors.
	if(ratio < -1.0)
		return -1.0;
	else if(ratio > 1.0)
		return 1.0;
	else
		return ratio;
}



Vector3 Vector3 :: getRotatedAxes (double x_radians, double z_radians) const
{
	double yz_norm = getNormYZ();
	double x_rotation = atan2(z, y) + x_radians;
	Vector3 intermediate(x, cos(x_rotation) * yz_norm, sin(x_rotation) * yz_norm);

	double xy_norm = intermediate.getNormXY();
	double z_rotation = atan2(intermediate.y, intermediate.x) + z_radians;
	return Vector3(cos(z_rotation) * xy_norm, sin(z_rotation) * xy_norm, intermediate.z);

//	Vector3 result(cos(z_rotation) * xy_norm, sin(z_rotation) * xy_norm, intermediate.z);
//	cout << "      vector: " << vector << endl;
//	cout << "intermediate: " << intermediate << endl;
//	cout << "      result: " << result << endl;
//	return result;
}

Vector3 Vector3 :: getRotatedArbitrary (const Vector3& axis, double radians) const
{
	assert(axis.isNormal());

	// www2.cs.uregina.ca/~anima/408/Notes/ObjectModels/Rotation.htm

	double aa = axis.x * axis.x;
	double bb = axis.y * axis.y;
	double cc = axis.z * axis.z;
	double ab = axis.x * axis.y;
	double ac = axis.x * axis.z;
	double bc = axis.y * axis.z;

	Matrix3x3 A_hat(aa, ab, ac, ab, bb, bc, ac, bc, cc);
	Matrix3x3 A_star( 0,      -axis.z,  axis.y,
			  axis.z,  0,      -axis.x,
			 -axis.y,  axis.x,  0);

	Matrix3x3 M = A_hat + (INDENTITY_MATRIX - A_hat) * cos(radians) + A_star * sin(radians);

	return M * (*this);

	// multiply matrix by vector
//	Vector3 result(vector.x * M.getEntry(0, 0) + vector.y * M.getEntry(0, 1) + vector.z * M.getEntry(0, 2),
//		       vector.x * M.getEntry(1, 0) + vector.y * M.getEntry(1, 1) + vector.z * M.getEntry(1, 2),
//		       vector.x * M.getEntry(2, 0) + vector.y * M.getEntry(2, 1) + vector.z * M.getEntry(2, 2));
//	cout << "vector: " << vector << "\tresult: " << result << endl;
//	return result;
}



Vector3 Vector3 :: getRandomUnitVector ()
{
	//
	//  The following WDL script is included because it was
	//    used to derive the algorithm for this function.
	//

/*
From Spheretest.wdl (with variable names added)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// This function creates a hollow sphere of "equally" spaced balls
ACTION Spheremaker
{
	z_spacing = 360/around_z;

	z_current = z_spacing;
	while(z_current < 180)
	{
		xy_radius = sin(z_current)*radius;
		z_radius = cos(z_current)*radius;

		around_count = int(sin(z_current)*360/z_spacing);

		around_current = 0;
		while(around_current < around_count)
		{
			glow_pos.x = sin(around_current/around_count*360)*xy_radius;
			glow_pos.y = cos(around_current/around_count*360)*xy_radius;
			glow_pos.z = z_radius;
			ent_create(ball_mdl,glow_pos,Spherepoint);

			around_current++;
		}

		z_current += z_spacing;
	}
}
*/

	//
	//  Generate a random unit vector.
	//
	//  1. pick a random direction on the xy plane
	//  2. pick a random angle towards to z-axis, weighted
	//     so that the values on the xy plane are the most
	//     likely.
	//

	double xy_angle = random(0.0, 6.283185307179586476925286766559);	// 2 * pi
	double vertical_angle = asin(random(-1.0, 1.0));

	double radius_xy = cos(vertical_angle);

	double x = radius_xy * cos(xy_angle);
	double y = radius_xy * sin(xy_angle);
	double z = sin(vertical_angle);

	return Vector3(x, y, z);
}



Vector3 Vector3 :: getClosestPointOnLine (const Vector3& l1, const Vector3& l2, const Vector3& p, bool bounded)
{
	assert(l1 != l2);

	//
	//         + p
	//       /
	//     /
	//   +-----+-------+
	//  l1     s       l2
	//     +
	//     O
	//
	//  O: The origin (0, 0, 0)
	//  l1, l2: The two ends of the line segment
	//  p: The not-on-line-point
	//  s: The point on the line segment closest to p
	//

	Vector3 line_direction = l2 - l1;
	Vector3 p_direction = p - l1;
	Vector3 s_minus_l1 = p_direction.projection(line_direction);

	if(bounded)
	{
		if(s_minus_l1.dotProduct(line_direction) <= 0)
			return l1;
		else if(s_minus_l1.getNormSquared() > line_direction.getNormSquared())
			return l2;
	}

	return s_minus_l1 + l1;
}



ostream& operator<< (ostream& r_os, const Vector3& vector)
{
	r_os << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
	return r_os;
}

//new functions added for leaf manipulations
Vector3 multiplypoint(float rotator[16], Vector3 point){
	//this matrix takes a vector muptiplied to a 4x4 matrix
	//essentially the multiplication is the sum of the row of one matrix multiplied to the column of the second matrix
	//for example:
	// -   -       -   -  	  -                -
	//|E, G| X | A B |  = | A*E+C*G |
	//         | C D |    | B*E+D*G |
	//-    -       -   -     -                 -
	//used to count each loop
	int i;
	float w=0;
	//used to store the vector resulting from the multiplication
	Vector3 results;
	results.x = 0;
	results.y = 0;
	results.z = 0;	
	double r[4] = {0.0, 0.0, 0.0, 0.0};
	double p[4];
	p[0] = point.x;
	p[1] = point.y;
	p[2] = point.z;
	p[3] = 1.0;

	//loop is used for the columns/rows of the matrix
	//assumed that modelview matrix is 0123 for column 1
	//4,5,6,7 for column 2, 8,9,10,11 for column 3
	//12,13,14,15 col4
	for (i = 0; i<=3;i++){		
			//the calculation of the sum of cell multiplication
			//it allows for the movement through the current column and row			
				r[0] += rotator[i] * p[i];	
				r[1] += rotator[i+4] * p[i];	
				r[2] += rotator[i+8] * p[i];	
				r[3] += rotator[i+12] * p[i];	//used for w
				
			}
	//normalization
	results.x = r[0]/r[3];
	results.y = r[1]/r[3];
	results.z = r[2]/r[3];

	return results;
}

Vector3 multiplypoint(Matrix rotator, Vector3 point){
	//this matrix takes two 4x4 matrices and multiplies them
	//essentially the multiplication is the sum of the row of one matrix multiplied to the column of the second matrix
	//for example:
	// -   -       -   -  	  -                -
	//| A B |   X  |E |  = | A*E+B*G |
	//| C D |      |G |    | C*E+D*G |
	//-    -       -   -     -                 -
	//used to count each loop
	int i;
	float w=0;
	//used to store the vector resulting from the multiplication
	Vector3 results(0,0,0);
	
	double r[4] = {0.0, 0.0, 0.0, 0.0};
	double p[4];
	p[0] = point.x;
	p[1] = point.y;
	p[2] = point.z;
	p[3] = 1.0f;

	//loop is used for the columns/rows of the matrix
	for (i = 0; i<=3;i++){		
			//the calculation of the sum of cell multiplication
			//it allows for the movement through the current column and row			
				r[0] += rotator.content[0][i] * p[i];	
				r[1] += rotator.content[1][i] * p[i];	
				r[2] += rotator.content[2][i] * p[i];	
				r[3] += rotator.content[3][i] * p[i];	//used for w
				
			}
	//normalization
	results.x = r[0]/r[3];
	results.y = r[1]/r[3];
	results.z = r[2]/r[3];

	return results;
}

Matrix::Matrix(void){	
}
Matrix::~Matrix(void){
}
float determinant(Matrix M1){
	//reference: http://www.cg.info.hiroshima-cu.ac.jp/~miyazaki/knowledge/teche23.html	
	float value;
	value =
		/* three by three matrix works
			M1.content[0][0]* M1.content[1][1]* M1.content[2][2]+ M1.content[0][1]* M1.content[1][2]* M1.content[2][0]+
			M1.content[0][2]* M1.content[1][0]* M1.content[2][1]- M1.content[0][0]* M1.content[1][2]* M1.content[2][1]-
			M1.content[0][2]* M1.content[1][0]* M1.content[2][1]- M1.content[0][2]* M1.content[1][1]* M1.content[2][0];*/
		//four by four
			M1.content[0][0]*M1.content[1][1]*M1.content[2][2]*M1.content[3][3] + M1.content[0][0]*M1.content[1][2]*M1.content[2][3]*M1.content[3][1] +
			M1.content[0][0]*M1.content[1][3]*M1.content[2][1]*M1.content[3][2] + M1.content[0][1]*M1.content[1][0]*M1.content[2][3]*M1.content[3][2]+
			M1.content[0][1]*M1.content[1][2]*M1.content[2][0]*M1.content[3][3] + M1.content[0][1]*M1.content[1][3]*M1.content[2][2]*M1.content[3][1] +
			M1.content[0][2]*M1.content[1][0]*M1.content[2][1]*M1.content[3][3] + M1.content[0][2]*M1.content[1][1]*M1.content[2][3]*M1.content[3][0]+
			M1.content[0][2]*M1.content[1][3]*M1.content[2][0]*M1.content[3][1] + M1.content[0][3]*M1.content[1][0]*M1.content[2][2]*M1.content[3][1] +
			M1.content[0][3]*M1.content[1][1]*M1.content[2][0]*M1.content[3][2] + M1.content[0][3]*M1.content[1][2]*M1.content[2][1]*M1.content[3][1]-
			M1.content[0][0]*M1.content[1][1]*M1.content[2][3]*M1.content[3][2] - M1.content[0][0]*M1.content[1][2]*M1.content[2][1]*M1.content[3][3] -
			M1.content[0][0]*M1.content[1][3]*M1.content[2][2]*M1.content[3][1] - M1.content[0][1]*M1.content[1][0]*M1.content[2][2]*M1.content[3][3]-
			M1.content[0][1]*M1.content[1][2]*M1.content[2][3]*M1.content[3][0] - M1.content[0][1]*M1.content[1][3]*M1.content[2][0]*M1.content[3][2] -
			M1.content[0][2]*M1.content[1][0]*M1.content[2][3]*M1.content[3][1] - M1.content[0][2]*M1.content[1][1]*M1.content[2][0]*M1.content[3][3]-
			M1.content[0][2]*M1.content[1][3]*M1.content[2][1]*M1.content[3][0] - M1.content[0][3]*M1.content[1][0]*M1.content[2][1]*M1.content[3][2] -
			M1.content[0][3]*M1.content[1][1]*M1.content[2][2]*M1.content[3][0] - M1.content[0][3]*M1.content[1][2]*M1.content[2][0]*M1.content[3][1];
			
	   return value;
}

Matrix inversematrix(Matrix M1){
 //reference:  http://www.cg.info.hiroshima-cu.ac.jp/~miyazaki/knowledge/teche23.html
	float determinator = determinant(M1);
	/*three by three matrix works
	inverse.content[0][0] = (M1.content[1][1]*M1.content[2][2] + M1.content[2][1]*M1.content[1][2])*(1/determinator);
	inverse.content[0][1] = (M1.content[2][0]*M1.content[1][2] - M1.content[1][0]*M1.content[2][2])*(1/determinator);
	inverse.content[0][2] = (M1.content[1][0]*M1.content[2][1] - M1.content[1][0]*M1.content[1][1])*(1/determinator);
	inverse.content[1][0] = (M1.content[2][1]*M1.content[0][2] - M1.content[2][0]*M1.content[0][2])*(1/determinator);
	inverse.content[1][1] = (M1.content[0][0]*M1.content[2][2] - M1.content[2][0]*M1.content[0][1])*(1/determinator);
	inverse.content[1][2] = (M1.content[2][0]*M1.content[0][1] - M1.content[0][0]*M1.content[2][1])*(1/determinator);
	inverse.content[2][0] = (M1.content[0][1]*M1.content[1][2] - M1.content[1][1]*M1.content[0][2])*(1/determinator);
	inverse.content[2][1] = (M1.content[1][0]*M1.content[0][2] - M1.content[0][0]*M1.content[1][2])*(1/determinator);
	inverse.content[2][2] = (M1.content[0][0]*M1.content[1][1] - M1.content[1][0]*M1.content[0][1])*(1/determinator);*/

	Matrix inverse;
	//four by four new
	inverse.content[0][0] = (M1.content[1][1]*M1.content[2][2]*M1.content[3][3] + M1.content[1][2]*M1.content[2][3]*M1.content[3][1]+ M1.content[1][3]*M1.content[2][1]*M1.content[3][2]
							  -M1.content[1][1]*M1.content[2][3]*M1.content[3][2] - M1.content[1][2]*M1.content[2][1]*M1.content[3][3]- M1.content[1][3]*M1.content[1][2]*M1.content[3][1])
							  *(1/determinator);
	inverse.content[0][1] = (M1.content[0][1]*M1.content[2][3]*M1.content[3][2] + M1.content[0][2]*M1.content[2][1]*M1.content[3][3]+ M1.content[0][3]*M1.content[2][2]*M1.content[3][1]
							  -M1.content[0][1]*M1.content[2][2]*M1.content[3][3] - M1.content[0][2]*M1.content[2][3]*M1.content[3][1]- M1.content[0][3]*M1.content[2][1]*M1.content[3][2])
							  *(1/determinator);
   inverse.content[0][2] = (M1.content[0][1]*M1.content[1][2]*M1.content[3][3] + M1.content[0][2]*M1.content[1][3]*M1.content[3][1]+ M1.content[0][3]*M1.content[1][1]*M1.content[3][2]
							  -M1.content[0][1]*M1.content[1][3]*M1.content[3][2] - M1.content[0][2]*M1.content[1][1]*M1.content[3][3]- M1.content[0][3]*M1.content[1][2]*M1.content[3][1])
							  *(1/determinator);
   inverse.content[0][3] = (M1.content[0][1]*M1.content[1][3]*M1.content[2][2] + M1.content[0][2]*M1.content[1][1]*M1.content[2][3]+ M1.content[0][3]*M1.content[1][2]*M1.content[2][1]
							  -M1.content[0][1]*M1.content[1][2]*M1.content[2][3] - M1.content[0][2]*M1.content[1][3]*M1.content[2][1]- M1.content[0][3]*M1.content[1][1]*M1.content[2][2])
							  *(1/determinator);
   inverse.content[1][0] = (M1.content[1][0]*M1.content[2][3]*M1.content[3][2] + M1.content[1][2]*M1.content[2][0]*M1.content[3][3]+ M1.content[1][3]*M1.content[2][2]*M1.content[3][0]
							  -M1.content[1][0]*M1.content[2][2]*M1.content[3][3] - M1.content[1][2]*M1.content[2][3]*M1.content[3][0]- M1.content[1][3]*M1.content[2][0]*M1.content[3][2])
							  *(1/determinator);
   inverse.content[1][1] = (M1.content[0][0]*M1.content[2][2]*M1.content[3][3] + M1.content[0][2]*M1.content[2][3]*M1.content[3][0]+ M1.content[0][3]*M1.content[2][0]*M1.content[3][2]
							  -M1.content[0][0]*M1.content[2][3]*M1.content[3][2] - M1.content[0][2]*M1.content[2][1]*M1.content[3][3]- M1.content[0][3]*M1.content[2][2]*M1.content[3][1])
							  *(1/determinator);
   inverse.content[1][2] = (M1.content[0][0]*M1.content[1][2]*M1.content[3][2] + M1.content[0][2]*M1.content[1][0]*M1.content[3][3]+ M1.content[0][3]*M1.content[1][2]*M1.content[3][0]
							  -M1.content[0][0]*M1.content[1][2]*M1.content[3][3] - M1.content[0][2]*M1.content[1][3]*M1.content[3][0]- M1.content[0][3]*M1.content[1][0]*M1.content[3][2])
							  *(1/determinator);
   inverse.content[1][3] = (M1.content[0][0]*M1.content[1][2]*M1.content[2][3] + M1.content[0][2]*M1.content[1][3]*M1.content[2][0]+ M1.content[0][3]*M1.content[1][0]*M1.content[2][2]
							  -M1.content[0][0]*M1.content[1][3]*M1.content[2][2] - M1.content[0][2]*M1.content[1][0]*M1.content[2][3]- M1.content[0][3]*M1.content[1][2]*M1.content[2][1])
							  *(1/determinator);
   inverse.content[2][0] = (M1.content[1][0]*M1.content[2][1]*M1.content[3][3] + M1.content[1][1]*M1.content[2][3]*M1.content[3][0]+ M1.content[1][3]*M1.content[2][1]*M1.content[3][1]
							  -M1.content[1][0]*M1.content[2][3]*M1.content[3][1] - M1.content[1][1]*M1.content[2][0]*M1.content[3][3]- M1.content[1][3]*M1.content[2][1]*M1.content[3][0])
							  *(1/determinator);
   inverse.content[2][1] = (M1.content[0][0]*M1.content[2][3]*M1.content[3][1] + M1.content[0][1]*M1.content[2][0]*M1.content[3][3]+ M1.content[0][3]*M1.content[2][1]*M1.content[3][0]
							  -M1.content[0][0]*M1.content[2][1]*M1.content[3][3] - M1.content[0][1]*M1.content[2][3]*M1.content[3][0]- M1.content[0][3]*M1.content[2][1]*M1.content[3][1])
							  *(1/determinator);
   inverse.content[2][2] = (M1.content[0][0]*M1.content[1][1]*M1.content[3][3] + M1.content[0][1]*M1.content[1][3]*M1.content[3][0]+ M1.content[0][3]*M1.content[1][0]*M1.content[3][1]
							  -M1.content[0][0]*M1.content[1][3]*M1.content[3][1] - M1.content[0][1]*M1.content[1][0]*M1.content[3][3]- M1.content[0][3]*M1.content[1][1]*M1.content[3][0])
							  *(1/determinator);
   inverse.content[2][3] = (M1.content[0][0]*M1.content[1][3]*M1.content[2][1] + M1.content[0][1]*M1.content[1][0]*M1.content[2][3]+ M1.content[0][3]*M1.content[1][1]*M1.content[2][0]
							  -M1.content[0][0]*M1.content[1][1]*M1.content[2][3] - M1.content[0][2]*M1.content[1][0]*M1.content[3][3]- M1.content[0][3]*M1.content[1][0]*M1.content[2][1])
							  *(1/determinator);
   inverse.content[3][0] = (M1.content[1][0]*M1.content[2][2]*M1.content[3][1] + M1.content[1][1]*M1.content[2][0]*M1.content[3][2]+ M1.content[1][3]*M1.content[2][1]*M1.content[3][0]
							  -M1.content[1][0]*M1.content[2][1]*M1.content[3][2] - M1.content[1][1]*M1.content[2][2]*M1.content[3][0]- M1.content[1][2]*M1.content[2][0]*M1.content[3][1])
							  *(1/determinator);
   inverse.content[3][1] = (M1.content[0][0]*M1.content[2][1]*M1.content[3][2] + M1.content[0][1]*M1.content[2][2]*M1.content[3][0]+ M1.content[0][2]*M1.content[2][0]*M1.content[3][1]
							  -M1.content[0][0]*M1.content[2][2]*M1.content[3][1] - M1.content[0][1]*M1.content[2][0]*M1.content[3][2]- M1.content[0][2]*M1.content[2][1]*M1.content[3][0])
							  *(1/determinator);
   inverse.content[3][2] = (M1.content[0][0]*M1.content[1][2]*M1.content[3][1] + M1.content[0][1]*M1.content[1][0]*M1.content[3][2]+ M1.content[0][3]*M1.content[1][1]*M1.content[3][0]
							  -M1.content[0][0]*M1.content[1][1]*M1.content[3][2] - M1.content[0][1]*M1.content[1][2]*M1.content[3][0]- M1.content[0][2]*M1.content[1][0]*M1.content[3][1])
							  *(1/determinator);
   inverse.content[3][3] = (M1.content[0][0]*M1.content[1][1]*M1.content[2][2] + M1.content[0][1]*M1.content[1][2]*M1.content[2][0]+ M1.content[0][3]*M1.content[1][0]*M1.content[2][1]
							  -M1.content[0][0]*M1.content[1][2]*M1.content[2][1] - M1.content[0][1]*M1.content[1][0]*M1.content[2][2]- M1.content[0][2]*M1.content[1][1]*M1.content[2][0])
							  *(1/determinator);
						 
   
   return inverse;
}

Matrix transposematrix(Matrix rotator){
	int i,j;
	Matrix result;
	for(i = 0; i < 4; i++) {
		for( j = 0; j < 4; j++){			
				result.content[j][i] =  rotator.content[i][j];
		}
	}
	return result;
}
Matrix multiplymatrix(Matrix rotator, Matrix translator){
	//this matrix takes two 4x4 matrices and multiplies them
	//essentially the multiplication is the sum of the row of one matrix multiplied to the column of the second matrix
	//for example:
	// -   -       -   -  	  -                -
	//| A B |   X  |E F |  = | A*E+B*G  A*F+B*H |
	//| C D |      |G H |    | C*E+D*G  C*F+D*H |
	//-    -       -   -     -                 -
	//used to count each loop
	int i,j,k;

	//used to store the matrix resulting from the multiplication
	Matrix results;
	for (i=0;i<=3;i++){
		for (j=0;j<=3;j++){
			results.content[i][j]=0;
		}
	}

	//loop is used for the rows of the matrix
	for (i = 0; i<=3;i++){
		//loop is for the columns of the matrix
		for (j = 0; j<=3;j++){
			//loop is for the calculation of the sum of cell multiplication
			//it allows for the movement through the current column and row
			for (k=0;k<=3;k++){
				results.content[i][j] += rotator.content[i][k] * translator.content[k][j];				
			}
		}
	}	
	return results;
}