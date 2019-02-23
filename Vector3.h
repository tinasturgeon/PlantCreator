//
//  Vector3.h
//
//  A module to store a math-style vector of length 3 and simple
//    operations that can be performed on it.
//

#ifndef __VECTOR3_H__
#define __VECTOR3_H__
#include "stdafx.h"

#include <cassert>
#include <iostream>
#include <cmath>

// Matrix class
class Matrix {
	//this class defines a 4x4 matrix
	public:
		float content[4][4];
	Matrix(void);
	~Matrix(void);
};
float determinant(Matrix M1);
Matrix multiplymatrix(Matrix rotator, Matrix translator);
Matrix transposematrix(Matrix rotator);
Matrix inversematrix(Matrix M1);

//
//  Vector3
//
//  A record to store a math-style vector of length 3.  The 3
//    numbers the compose a Vector3 are refered to as its
//    elements and may be accesed using dot notation.  The
//    associated functions are all declared inline for speed
//    reasons.  In theory, this record should be as fast
//    (or faster, when using pass-by-reference) as using double
//    values, but more convenient.
//
//  The norm of a Vector3 is its "length", the distance along
//    it.  There also exist functions to determine the norm of a
//    Vector3 along each axis-aligned plane.  These functions
//    calculate the norm the projection of this Vector3 to the
//    specified plane.  This returns the same result as
//    calculating the norm of a copy of the Vector3 with the
//    element for the excluded axis set to 0.0.
//

class Vector3
{
  public:
//
//  Member Fields
//
//  These are the elements of the Vector3.  They can be queried
//    and changed freely without disrupting the operation of the
//    Vector3 instance.
//
	double x;
	double y;
	double z;

//
//  These are some standard Vector3s that may be useful
//
	static const Vector3 ZERO;
	static const Vector3 UNIT_X_PLUS;
	static const Vector3 UNIT_X_MINUS;
	static const Vector3 UNIT_Y_PLUS;
	static const Vector3 UNIT_Y_MINUS;
	static const Vector3 UNIT_Z_PLUS;
	static const Vector3 UNIT_Z_MINUS;

  public:
//
//  Default Constructor
//
//  Purpose: To create a new Vector3 that is the zero vector.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: A new Vector3 is created with elements
//		 (0.0, 0.0, 0.0).
//

	Vector3 () : x(0.0), y(0.0), z(0.0)
	{}

//
//  Constructor
//
//  Purpose: To create a new Vector3 with the specified
//	     elements.
//  Argument(s):
//	<1> x
//	<2> y
//	<3> z: The elements for the new Vector3
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: A new Vector3 is created with elements
//		 (x, y, z).
//

	Vector3 (double X, double Y, double Z)
				      : x(X), y(Y), z(Z)
	{}

//
//  Copy Constructor
//
//  Purpose: To create a new Vector3 with the same elements as
//	     an existing Vector3.
//  Argument(s):
//	<1> original: The Vector3 to copy
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: A new Vector3 is created with the same elements
//		 as original.
//

	Vector3 (const Vector3& original) : x(original.x),
					    y(original.y),
					    z(original.z)
	{}
//
//  Assignment Operator
//
//  Purpose: To set the elements of this Vector3 to be equal to
//	     the elements of another.
//  Argument(s):
//	<1> original: The Vector3 to copy
//  Precondition(s): N/A
//  Returns: A reference to this Vector3.
//  Side Effect: The elements of this Vector3 are set to the
//		 elements of original.
//

	Vector3& operator= (const Vector3& original)
	{
		if(&original != this)
		{
			x = original.x;
			y = original.y;
			z = original.z;
		}

		return *this;
	}

//
//  Destructor
//
//  Purpose: To safely destroy this Vector3 without memeory
//	     leaks.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: All dynamically allocated memeory is freed.
//

	~Vector3 ()
	{}

//
//  Equality Operator
//
//  Purpose: To determine if this Vector3 is equal to another.
//	     Two Vector3s are equal IFF each of their elements
//	     are equal.
//  Argument(s):
//	<1> other: The Vector3 to compare to
//  Precondition(s): N/A
//  Returns: Whether this Vector3 and other are equal.
//  Side Effect: N/A
//

	bool operator== (const Vector3& other) const
	{
		if(x != other.x) return false;
		if(y != other.y) return false;
		if(z != other.z) return false;
		return true;
	}

//
//  Inequality Operator
//
//  Purpose: To determine if this Vector3 and another are
//	     unequal.  Two Vector3s are equal IFF each of their
//	     elements are equal.
//  Argument(s):
//	<1> other: The Vector3 to compare to
//  Precondition(s): N/A
//  Returns: Whether this Vector3 and other are unequal.
//  Side Effect: N/A
//

	inline bool operator!= (const Vector3& other) const
	{
		if(x != other.x) return true;
		if(y != other.y) return true;
		if(z != other.z) return true;
		return false;
	}

//
//  Addition Operator
//
//  Purpose: To create a new Vector3 equal to the sum of this
//	     Vector3 and another.
//  Argument(s):
//	<1> right: The other Vector3
//  Precondition(s): N/A
//  Returns: A Vector3 with elements
//	     (x + right.x, y + right.y, z + right.z).
//  Side Effect: N/A
//

	inline Vector3 operator+ (const Vector3& right) const
	{
		return Vector3(x + right.x,
			       y + right.y,
			       z + right.z);
	}

//
//  Subtraction Operator
//
//  Purpose: To create a new Vector3 equal to the differance of
//	     this Vector3 and another.
//  Argument(s):
//	<1> right: The Vector3 to subtract from this Vector3
//  Precondition(s): N/A
//  Returns: A Vector3 with elements
//	     (x - other.x, y - other.y, z - other.z).
//  Side Effect: N/A
//

	Vector3 operator- (const Vector3& right) const
	{
		return Vector3(x - right.x,
			       y - right.y,
			       z - right.z);
	}

//
//  Multiplication Operator
//
//  Purpose: To create a new Vector3 equal to the product of
//	     this Vector3 and a scalar.
//  Argument(s):
//	<1> factor: The scalar to multiply this Vector3 by
//  Precondition(s): N/A
//  Returns: A Vector3 with elements
//	     (x * factor, y * factor, z * factor).
//  Side Effect: N/A
//

	Vector3 operator* (double factor) const
	{
		return Vector3(x * factor,
			       y * factor,
			       z * factor);
	}

//
//  Division Operator
//
//  Purpose: To create a new Vector3 equal to this Vector3
//	     divided by a scalar.
//  Argument(s):
//	<1> divisor: The scalar to divide this Vector3 by
//  Precondition(s):
//	<1> divisor != 0.0
//  Returns: A Vector3 with elements
//	     (x / divisor, y / divisor, z / divisor).
//  Side Effect: N/A
//

	Vector3 operator/ (double divisor) const
	{
		assert(divisor != 0.0);

		return Vector3(x / divisor,
			       y / divisor,
			       z / divisor);
	}

//
//  Addition Assignment Operator
//
//  Purpose: To set this Vector3 to the sum of itself and
//	     another Vector3.
//  Argument(s):
//	<1> right: The other Vector3
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: The elements of this Vector3 are set to
//		 (x + right.x, y + right.y, z + right.z).
//

	Vector3& operator+= (const Vector3& right)
	{
		x += right.x;
		y += right.y;
		z += right.z;

		return *this;
	}

//
//  Subtraction Assignment Operator
//
//  Purpose: To set this Vector3 to the differance of itself and
//	     another Vector3.
//  Argument(s):
//	<1> right: The Vector3 to subtract from this Vector3
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: The elements of this Vector3 are set to
//		 (x - right.x, y - right.y, z - right.z).
//

	Vector3& operator-= (const Vector3& right)
	{
		x -= right.x;
		y -= right.y;
		z -= right.z;

		return *this;
	}

//
//  Multiplication Assignment Operator
//
//  Purpose: To set this Vector3 to the product of itself and a
//	     scalar.
//  Argument(s):
//	<1> factor: The scalar to multiply this Vector3 by
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: The elements of this Vector3 are set to
//		 (x * factor, y * factor, z * factor).
//

	Vector3& operator*= (double factor)
	{
		x *= factor;
		y *= factor;
		z *= factor;

		return *this;
	}

//
//  Division Assignment Operator
//
//  Purpose: To set this Vector3 to equal to the quotient of
//	     itself divided by a scalar.
//  Argument(s):
//	<1> divisor: The scalar to divide this Vector3 by
//  Precondition(s):
//	<1> divisor != 0.0
//  Returns: N/A
//  Side Effect: The elements of this Vector3 are set to
//		 (x / divisor, y / divisor, z / divisor).
//

	Vector3& operator/= (double divisor)
	{
		assert(divisor != 0.0);

		x /= divisor;
		y /= divisor;
		z /= divisor;

		return *this;
	}

//
//  isZero
//
//  Purpose: To determine if this Vector3 is the zero vector.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: Whether this Vector3 is equal to (0.0, 0.0, 0.0).
//  Side Effect: N/A
//

	bool isZero () const
	{
		if(x != 0.0) return false;
		if(y != 0.0) return false;
		if(z != 0.0) return false;
		return true;
	}

//
//  isNormal
//  isUnit
//
//  Purpose: To determine if this Vector3 is a unit vector.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: Whether this Vector3 has a norm of 1.0.
//  Side Effect: N/A
//

	bool isNormal () const
	{
		double norm_minus_1 = getNorm() - 1.0;

		if(norm_minus_1 > 1e-10)
			return false;
		if(norm_minus_1 < -1e-10)
			return false;
		return true;
	}
	bool isUnit () const
	{
		double norm_minus_1 = getNorm() - 1.0;

		if(norm_minus_1 > 1e-10)
			return false;
		if(norm_minus_1 < -1e-10)
			return false;
		return true;
	}

//
//  getNorm
//
//  Purpose: To determine the norm of this Vector3.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: The norm of this Vector3.
//  Side Effect: N/A
//

	double getNorm () const
	{
		return sqrt(x * x + y * y + z * z);
	}

//
//  getNormSquared
//
//  Purpose: To determine the square of the norm of this
//	     Vector3.  This is significantly faster than
//	     calculating the norm itself.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: The square of the norm of this Vector3.
//  Side Effect: N/A
//

	double getNormSquared () const
	{
		return x * x + y * y + z * z;
	}

//
//  getNormXY
//  getNormXZ
//  getNormYZ
//
//  Purpose: To determine the norm of this Vector3 projected to
//	     the indicated plane.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: The norm of this Vector3 projected to the xy/xz/yz
//	     plane.
//  Side Effect: N/A
//

	double getNormXY () const
	{
		return sqrt(x * x + y * y);
	}
	double getNormXZ () const
	{
		return sqrt(x * x + z * z);
	}
	double getNormYZ () const
	{
		return sqrt(y * y + z * z);
	}

//
//  getNormXY
//  getNormXZ
//  getNormYZ
//
//  Purpose: To determine the square of the norm of this Vector3
//	     projected to the indicated plane.  This is
//	     significantly faster than caculating the projected
//	     norm itself.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: The square of the norm of this Vector3 projected to
//	     the xy/xz/yz plane.
//  Side Effect: N/A
//

	double getNormXYSquared () const
	{
		return x * x + y * y;
	}
	double getNormXZSquared () const
	{
		return x * x + z * z;
	}
	double getNormYZSquared () const
	{
		return y * y + z * z;
	}

//
//  getNormalized
//
//  Purpose: To create a normalized copy of this Vector3.
//  Argument(s): N/A
//  Precondition(s):
//	<1> !isZero()
//  Returns: A Vector3 with the same direction as this Vector3
//	     and a norm of 1.0.
//  Side Effect: N/A
//

	Vector3 getNormalized () const
	{
		assert(!isZero());

		double norm = getNorm();
		return Vector3(x / norm, y / norm, z / norm);
	}

//
//  getCopyWithNorm
//
//  Purpose: To create a Vector3 with the same direction as this
//	     Vector3 and the specified norm.
//  Argument(s):
//	<1> norm: The new norm
//  Precondition(s):
//	<1> !isZero()
//	<2> norm >= 0
//  Returns: A Vector3 with the same direction as this Vector3
//	     and a norm of norm.
//  Side Effect: N/A
//

	Vector3 getCopyWithNorm (double norm) const
	{
		assert(!isZero());
		assert(norm >= 0);

		double norm_ratio = norm / getNorm();
		return Vector3(x * norm_ratio,
			       y * norm_ratio,
			       z * norm_ratio);
	}

//
//  set
//
//  Purpose: To change this Vector3 to have the specified
//	     elements.
//  Argument(s):
//	<1> X
//	<2> Y
//	<3> Z: The new elements for this Vector3
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: This Vector3 is set to (X, Y, Z).
//

	void set (double X, double Y, double Z)
	{
		x = X;
		y = Y;
		z = Z;
	}

//
//  setZero
//
//  Purpose: To change this Vector3 to be the zero vector.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: This Vector3 is set to (0.0, 0.0, 0.0).
//

	void setZero ()
	{
		x = 0.0;
		y = 0.0;
		z = 0.0;
	}

//
//  normalize
//
//  Purpose: To change this Vector3 have a norm of 1.0.
//  Argument(s): N/A
//  Precondition(s):
//	<1> !isZero()
//  Returns: N/A
//  Side Effect: This Vector3 is set to have a norm of 1.0.  The
//		 direction of this Vector3 is unchanged.
//

	void normalize ()
	{
		assert(!isZero());

		double norm = getNorm();
		assert(norm != 0);

		x /= norm;
		y /= norm;
		z /= norm;
	}

//
//  setNorm
//
//  Purpose: To change the norm of this Vector3.
//  Argument(s):
//	<1> norm: The new norm
//  Precondition(s):
//	<1> !isZero()
//	<2> norm >= 0
//  Returns: N/A
//  Side Effect: This Vector3 is set to have a norm of norm.
//		 The direction of this Vector3 is unchanged.
//

	void setNorm (double norm)
	{
		assert(!isZero());
		assert(norm >= 0);

		assert(getNorm() != 0);
		double norm_ratio = norm / getNorm();

		x *= norm_ratio;
		y *= norm_ratio;
		z *= norm_ratio;
	}

//
//  dotProduct
//
//  Purpose: To determine the dot/scaler/inner product of this
//	     Vector3 and another Vector3.
//  Argument(s):
//	<1> other: The other Vector3
//  Precondition(s): N/A
//  Returns: *this (dot) other.
//  Side Effect: N/A
//

	double dotProduct (const Vector3& other) const
	{
		return x * other.x + y * other.y + z * other.z;
	}

//
//  crossProduct
//
//  Purpose: To determine the cross/vector product of this
//	     Vector3 and another Vector3.
//  Argument(s):
//	<1> other: The other Vector3
//  Precondition(s): N/A
//  Returns: *this (cross) other.
//  Side Effect: N/A
//

	Vector3 crossProduct (const Vector3& other) const
	{
		return Vector3(y * other.z - z * other.y,
			       z * other.x - x * other.z,
			       x * other.y - y * other.x);
	}

//
//  distance
//
//  Purpose: To determine the distance between this Vector3 and 
//	    another Vector3.
//  Argument(s):
//	<1> other: The other Vector3
//  Precondition(s): N/A
//  Returns: The distance between this Vector3 and other.
//  Side Effect: N/A
//

	double distance (const Vector3& other) const
	{
		double diff_x = x - other.x;
		double diff_y = y - other.y;
		double diff_z = z - other.z;

		return sqrt(diff_x * diff_x +
		            diff_y * diff_y +
		            diff_z * diff_z);
	}

//
//  distanceSquared
//
//  Purpose: To determine the square of the distance between
//	     this Vector3 and another Vector3.
//  Argument(s):
//	<1> other: The other Vector3
//  Precondition(s): N/A
//  Returns: The square of the distance between this Vector3
//	     and other.
//  Side Effect: N/A
//

	double distanceSquared (const Vector3& other) const
	{
		double diff_x = x - other.x;
		double diff_y = y - other.y;
		double diff_z = z - other.z;

		return diff_x * diff_x +
		       diff_y * diff_y +
		       diff_z * diff_z;
	}

//
//  projection
//
//  Purpose: To determione the projection of this Vector3 onto
//	     another Vector3.
//  Argument(s):
//	<1> project_onto: The Vector3 to be projected onto 
//  Precondition(s):
//	<1> !project_onto.isZero()
//  Returns: The projection of this Vector3 onto project_onto.
//	     This is the component of this Vector3 with the same
//	     (or opposite) direction as project_onto.
//  Side Effect: N/A
//

	Vector3 projection (const Vector3& project_onto) const
	{
		assert(!project_onto.isZero());

		double norm = dotProduct(project_onto) /
			      project_onto.getNormSquared();

		return project_onto * norm;
	}

//
//  cosAngle
//
//  Purpose: To determine the cosine of the angle between this
//	     Vector3 and another Vector3.
//  Argument(s):
//	<1> other: The other Vector3
//  Precondition(s):
//	<1> !isZero()
//	<2> !other.isZero()
//  Returns: The cosine of the angle between this Vector3 and
//	     other.
//  Side Effect: N/A
//

	double cosAngle (const Vector3& other) const;

//
//  getRotatedAxes
//
//  Purpose: To create a copy of this Vector3 rotated around the
//	     x- and z-axes by the specified angles.
//  Argument(s):
//	<1> radians_x
//	<2> radians_z: The angles to rotate in radians
//  Precondition(s): N/A
//  Returns: A copy of this Vector3 rotated radians radians_x
//	     around the x-axis and then radians_z around the
//	     z-axis.
//  Side Effect: N/A
//

	Vector3 getRotatedAxes (double radians_x,
				double radians_z) const;

//
//  getRotatedArbitrary
//
//  Purpose: To create a copy of this Vector3 rotated around the
//	     specified axis by the specified angle.
//  Argument(s):
//	<1> axis: The axis to rotate around
//	<2> radians: The angle to rotate in radians
//  Precondition(s):
//	<1> axis.isNormal()
//  Returns: A copy of this Vector3 rotated radians radians
//	     around axis axis.
//  Side Effect: N/A
//

	Vector3 getRotatedArbitrary (const Vector3& axis,
				     double radians) const;

//
//  getRandomUnitVector
//
//  Purpose: To generate a Vector3 of norm 1 and with a uniform
//	     random direction.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: A uniform random unit vector.
//  Side Effect: N/A
//

	static Vector3 getRandomUnitVector ();

//
//  getClosestPointOnLine
//
//  Purpose: To determine the point on a specified line segment
//	     closest to the specified point.
//  Argument(s):
//	<1> l1
//	<2> l2: The two ends of the line segment
//	<3> p: The point
//	<4> bounded: Whether the solution must line between the
//		     ends of the line segment
//  Precondition(s):
//	<1> l1 != l2
//  Returns: The point on the line from l1 to l2 that is closest
//	     to point p.  If bounded == true, the point returned
//	     will lie between or on points l1 and l2.
//	     Otherwise, the point returned may lie anywhere
//	     along the line l1 and l2 define.
//  Side Effect: N/A
//

	static Vector3 getClosestPointOnLine (const Vector3& l1,
					      const Vector3& l2,
					      const Vector3& p,
					      bool bounded);
};
//required for point to matrix multiplication 

Vector3 multiplypoint(float rotator[16], Vector3 point);
Vector3 multiplypoint(Matrix rotator,  Vector3 point);

//
//  Stream Insertion Operator
//
//  Purpose: To print the specified Vector3 to the specified
//	     output stream.
//  Argument(s):
//	<1> r_os: The output stream
//	<2> vector: The Vector3
//  Precondition(s): N/A
//  Returns: A reference to r_os.
//  Side Effect: vector is printed to r_os.
//

std::ostream& operator<< (std::ostream& r_os,
			  const Vector3& vector);

#endif
