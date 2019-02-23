#pragma once

#include <windows.h>
#include <cassert>
#include <cmath>
#include <string>
#include <iostream>
#include <cstdlib>
#include "glut.h"

#include "GetGlut.h"
#include "Sleep.h"
#include "DisplayList.h"
#include "Vector3.h"
using namespace System::Windows::Forms;
using namespace std;
int leafType = 0;//for Radius Variation

//float stemLength = 0.5;
//float stemBottomRadius = 0.1;
//float stemTopRadius = 0.05;
float petioleLength = 0.5;
float petioleBottomRadius = 0.025;
float petioleTopRadius = 0.02;
float veinLength = 0.1;
float veinBottomRadius = 0.00625;
float veinTopRadius = 0.00625;
float leafLength=0.1;//leafLengthInput;//0.1;//used for the height of the leaf at the tip ie 90 and 270
float leafRadius=0.05;//leafRadiusInput;//0.05;//used for the width of the leaf at sides ie 0 and 180
float thickness = 0.003;
//forwheat
float stemLength2[10] = {0.01,0.01,0.01,0.01,0.01,0.01,0.01,0.01,0.01,0.01};//1.0;
float stemBottomRadius2[10] = {0.01,0.01,0.01,0.01,0.01,0.01,0.01,0.01,0.01,0.01};
float stemTopRadius2[10] = {0.005,0.005,0.005,0.005,0.005,0.005,0.005,0.005,0.005,0.005};

//fruit information 
//plum
//apple
//pear
//lemon
float fruitstartw = 0; 
float fruitstarts = 0;
float fruitlimitw = 360.0;
float fruitlimits = 360.0;
float fruitintervalw = 1.0;
float fruitintervals = 40.0;
float fruita = 0.1;
float fruitb = 0.1;
float fruitc = 0.5;
float fruitn = 1.0;
float fruitm = 1.0;


//flower information 
//
float flowerstartw = 0; 
float flowerstarts = 0;
float flowerlimitw = 360.0;
float flowerlimits = 360.0;
float flowerintervalw = 1.0;
float flowerintervals = 40.0;
float flowera = 0.1;
float flowerb = 0.1;
float flowerc = 0.5;
float flowern = 1.0;
float flowerm = 1.0;


float g_rotate = 0.0;//used to vary the angle of rotation for branches

//stochastic method BTV
bool windon =false;
Vector3 wdirection(1,0,0);//very interesting behaviour when set to 000 the leaves shrink!!!
//this can be used for growth of the plant hmmm
float windstrength = 50.0;//determines the magnitude

float vibrateIncrement = 0.05;//this is to control the leaf movement
float bendpetioleIncrement = 0.0005;//this is to control the petiole movement
float bendIncrement = 0.05;//this is to control the leaf movement
float twistIncrement = 0.05;//this is to control the leaf movement
float swayIncrement = 0.05;////this is to control the branch movement

int windeffect=0;
float windvibrate=0.0;//this is to control the leaf movement
float windbend=0.0;//this is to control the leaf and petiole movement
float windpetiolebend=0.0;//this is to control the leaf and petiole movement
float windtwist=0.0;//this is to control the leaf movement
float windsway=0.0;//this is to control the branch movement
float windoncounter = 0.0;//this is to count the duration of the wind

//camera movement
static double s_theta = 0.0;
static double s_phi = 0.0;

//Time Variables not used required
int currentFrameNumber = 0;
int targetFPS = 60; //target frames per second in milliseconds
int timePerFrame = 1000/targetFPS; 
int timePerDayPerFrame= 600/(365.25); 
int targetYear = 365.25*6;//*2;
int targetSpring = 91.3125*6;//*2;
int targetSummer = 91.3125*2*6;//*2;
int targetFall = 91.3125*3*6;//*2;
int yearCounter = 0;
int daycounter = 0;
bool season = false;
//a day is refelected as a portion of a 10 minute interval for a year
//thus 1 year = 600 seconds, 600,000 milliseconds 
// 1  year = 365.25 days, 1 day = 600/365.25
// 1 day is 60 frames per second therefore 600,000/(365.25 *60) is a portion of a day per frame
//spring is 0.25 of the year approx. therefore 365.25/4 = 91.3125 days
//wheat stage variables
unsigned int yearno = 0;
float ts = 91.3125*6; //seed development
float tt = 101.3125*6; //tillering stage
float te = 121.3125*6; //stem elongation stage
float tb = 141.3125*6; //booting stage
float th = 161.3125*6; //heading stage
float tf = 181.3125*6; //flowering stage
float tm = 201.3125*6; //seed kernal stage
float tr = 221.3125*6;// ripening stage

//growing variables
bool growon = false;
float stemlengthgrow = 0.02;//0.2% growth per day 0.002
float stemradiusgrow = 0.002;//0.2% growth per day
float petiolelengthgrow = 0.00002;//0.002% growth per day
float petioleradiusgrow = 0.00002;//0.002% growth per day
float veinlengthgrow = 0.00002;//0.0002% growth per day
float veinradiusgrow = 0.00002;//0.0002% growth per day
float leaflengthgrow = 0.00002;//0.0002% growth per day
float leafradiusgrow = 0.00002;//0.0002% growth per day
//for growth rates of flowers
float axisa=0;float axisb=0;float axisc=0;
//for growth rates of fruit
float faxisa=0;float faxisb=0;float faxisc=0;

float s = 0.3;//species specific growth reduction in stem due to wind
float sr = 1.4;//species specific growth increase in stem radius due to wind
float sp = 0.2;//species specific growth reduction in petiole due to wind
float spr = 1.2;//species specific growth increase in petiole radius due to wind
float sv  = 0.1;//species specific growth reduction in vein due to wind
float svr = 1.1;//species specific growth increase in vein radius due to wind
float sl  = 0.1;//species specific growth reduction in leaf length due to wind
float slr = 0.1;//species specific growth reduction in leaf radius due to wind
float slt = 0.1;//species specific growth reduction in leaf thickness due to wind
float leafthicknessgrow = 0.002;//0.0002% growth per day only during wind

#pragma region plant maximum sizes	
//maximum growth variables
float stemmax = 1.0;
float stembottomradiusmax = 0.05;
float stemtopradiusmax = 0.1;
float petiolemax = 0.5;
float petiolebottomradiusmax = 0.025;
float petioletopradiusmax = 0.02;
float veinmax = 0.05;
float veinbottomradiusmax = 0.008;
float veintopradiusmax = 0.005;
float leafmax = 0.9;
float leafradiusmax = 0.09;
float leafthicknessmax = -0.003;
#pragma endregion	

#pragma region plant wind maximum sizes
float wstemmax = stemmax - s;
float wstembottomradiusmax = stembottomradiusmax * sr;
float wstemtopradiusmax =  stemtopradiusmax * sr;
float wpetiolemax =  petiolemax - sp;
float wpetiolebottomradiusmax = petiolebottomradiusmax * spr;
float wpetioletopradiusmax =  petioletopradiusmax * spr;
float wveinmax = veinmax - sv;
float wveinbottomradiusmax = veinbottomradiusmax * svr;
float wveintopradiusmax = veintopradiusmax * svr;
float wleafmax = leafmax - sl;
float wleafradiusmax = leafradiusmax * slr;
float wleafthicknessmax = leafthicknessmax + slt;
#pragma endregion
//misc variables used
unsigned int j=0;
string get_string="";
bool wheat = false;
#pragma region nutrient declarations	
//nutrient Variables
//nutrient order is N,H,K,P,Ca,Mg,S,Cl,B,Fe,Mn,Zn,Cu,Na,Mo
float c[15] = {1.0,0.06,0.0307143,0.067143,0.071429,0.0,0.029800,0.225357,0.002571,0.001786,0.001043,0.000129,0.000057,0.000020,0.000010};//current nutrient concentration
float ctox[15] = {10.0,1.0,0.666,0.111,0.222,0.222,0.111,10000,0.0004,0.0067,0.00106,0.0016,0.0006,10000,1.0};//nutrient toxicity begins
float cmin[15] = {0.1,0.001,0.001,0.001,0.001,0.001,0.001,0.001,0.000001,0.0000001,0.0000001,0.0000001,0.0000001,0.0000001,0.0000001};//nutrient minimum range
float copt[15] = {1.0,0.06,0.0307143,0.067143,0.071429,0.057143,0.029800,0.225357,0.002571,0.001786,0.001043,0.000129,0.000057,0.000020,0.000010};
	//7.5,7.5,7.5,7.5,7.5,7.5,7.5,7.5,7.5,7.5,7.5,7.5,7.5,7.5,7.5};//nutrient optimum limit
float p[15] = {0.2125,1.0,0.4741,0.4084,-0.0604,0.044,0.17813,1.0,3.333,0.4366,1.0,0.044,2.64,1.0,1.0};//nutrient growth rate 
	//1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0};//nutrient change in growth
float nutrienteffect = 0;//normal growth rate effect with all nutrients available.
//variables used to find the one nutrient that is constraining the growth.
float constrained[15] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
int mostconstrainedindex=0;

#pragma endregion

#pragma region plant color declarations
//color variables
int limit = 100;//630;
int leafcounter = 0;//this counter is for determining the age of the leaf
int leafnumber = 0;//this limit is to determine the total number of leaves that will emerge
int const colorlimit = 24 * (1 + 6) + 1;
int ripen = 0;
int flag = 0;
int now = 0;//99;
int colorcounting = 0;
float rcolor[10][100];
float bcolor[10][100];
float gcolor[10][100];
GLfloat rscolor[colorlimit];
GLfloat gscolor[colorlimit];
GLfloat bscolor[colorlimit];
int colorvertex[9][20];
//int pastcolorvertex[9][20];
int nearestneighbor[8][2];	
//int colorvertex2[2][200];
bool brown = false;
//bool mottled = true;
int rndarray[20];
int rndpoint[20];
bool checker[20][8];
#pragma endregion

#pragma region vertices declarations

struct MyVertex
 {
 float x, y, z;        //Vertex
 float nx, ny, nz;     //Normal
 float r, g, b, a;     //Color 
// float padding[6];  //for 32 bit gpu/cpu
 };

GLfloat green[4] ={0,1,0,1};
//vertex array
MyVertex vertex[10][100];
#pragma endregion
void fruit_shape(float a, float b, float c, float n, float m, 
	float intervalw, float intervals, float limitw, float limits, float startw, float starts, int yearcounter, float color, float tm);
MyVertex colour_changer(MyVertex vertex[], int limit, int colourtype, int arrayno);

namespace
{		
	
	DisplayList g_stem_list2[10];
	DisplayList g_petiole_list;	
	DisplayList g_vein_list;		
	DisplayList g_leaf2_list[45];
	void buildStemList (const GLdouble height, const GLdouble radius, DisplayList& r_stem_list)
	{
		//assert(r_stem_list.getState() == DisplayList::EMPTY);

		const double TWO_PI  = 6.283185307179586476925286766559;
		const double HALF_PI = 1.5707963267948966192313216916398;

		const unsigned int SLICES = 24;
		const unsigned int TOP_RINGS = 6;
		const unsigned int VERTEX_COUNT = SLICES * (1 + TOP_RINGS) + 1;
		const unsigned int TRIANGLE_COUNT = SLICES * (2 * TOP_RINGS + 1);

		GLdouble a_vertices[3 * VERTEX_COUNT];
		GLdouble a_normals[3 * VERTEX_COUNT];
		GLuint a_triangles[3 * TRIANGLE_COUNT];
		unsigned int index = 0;

		index = 0;
		for(unsigned int slice = 0; slice < SLICES; slice++)
		{
			double theta = TWO_PI * slice / SLICES;

			a_vertices[index]     =  cos(theta) * radius;
			a_vertices[index + 1] = -sin(theta) * radius;
			a_vertices[index + 2] = 0.0;
			a_normals[index]     =  cos(theta);
			a_normals[index + 1] = -sin(theta);
			a_normals[index + 2] = 0.0;
			index += 3;
		}
		//assert(index == 3 * SLICES);
		//radius -= 0.1;//changes the shape radically
		for(unsigned int ring = 0; ring < TOP_RINGS; ring++)
		{
			double theta = HALF_PI * ring / TOP_RINGS;
			GLdouble xy_normal = cos(theta);
			GLdouble z_normal  = sin(theta);
			GLdouble xy_radius  = xy_normal * radius;
			GLdouble z_position = height + z_normal * radius;

			for(unsigned int slice = 0; slice < SLICES; slice++)
			{
				double theta = TWO_PI * slice / SLICES;

				a_vertices[index]     =  cos(theta) * xy_radius;
				a_vertices[index + 1] = -sin(theta) * xy_radius;
				a_vertices[index + 2] = z_position;
				a_normals[index]     =  cos(theta) * xy_normal;
				a_normals[index + 1] = -sin(theta) * xy_normal;
				a_normals[index + 2] = z_normal;
				index += 3;
			}
		}
		//assert(index == 3 * SLICES * (1 + TOP_RINGS));

		a_vertices[index]     = 0.0;
		a_vertices[index + 1] = 0.0;
		a_vertices[index + 2] = height + radius;
		a_normals[index]     = 0.0;
		a_normals[index + 1] = 0.0;
		a_normals[index + 2] = 1.0;
		index += 3;
		//assert(index == 3 * VERTEX_COUNT);

		index = 0;
		for(GLuint ring = 0; ring < TOP_RINGS; ring++)
		{
			GLuint ring_base_index = ring * SLICES;
			GLuint ring_next_index = (ring + 1) * SLICES;

			for(GLint slice = 0; slice < SLICES - 1; slice++)
			{
				a_triangles[index]     = ring_base_index + slice;
				a_triangles[index + 1] = ring_next_index + slice;
				a_triangles[index + 2] = ring_base_index + slice + 1;
				a_triangles[index + 3] = ring_base_index + slice + 1;
				a_triangles[index + 4] = ring_next_index + slice;
				a_triangles[index + 5] = ring_next_index + slice + 1;
				index += 6;
			}
			a_triangles[index]     = ring_base_index + SLICES - 1;
			a_triangles[index + 1] = ring_next_index + SLICES - 1;
			a_triangles[index + 2] = ring_base_index;
			a_triangles[index + 3] = ring_base_index;
			a_triangles[index + 4] = ring_next_index + SLICES - 1;
			a_triangles[index + 5] = ring_next_index;
			index += 6;
		}
		//assert(index == 6 * SLICES * TOP_RINGS);

		GLuint ring_base_index = TOP_RINGS * SLICES;
		for(GLuint slice = 0; slice < SLICES - 1; slice++)
		{
			a_triangles[index]     = ring_base_index + slice;
			a_triangles[index + 1] = VERTEX_COUNT - 1;
			a_triangles[index + 2] = ring_base_index + slice + 1;
			index += 3;
		}
		a_triangles[index]     = ring_base_index + SLICES - 1;
		a_triangles[index + 1] = VERTEX_COUNT - 1;
		a_triangles[index + 2] = ring_base_index;
		index += 3;
		//assert(index == 3 * TRIANGLE_COUNT);

		r_stem_list.begin();
			glEnableClientState(GL_VERTEX_ARRAY);
			glEnableClientState(GL_NORMAL_ARRAY);

			// void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
			glVertexPointer(3, GL_DOUBLE, 0, a_vertices);
			glNormalPointer(GL_DOUBLE, 0, a_normals);

			// void glDrawElements(GLenum mode, GLsizei count, GLenum type, void *indices);
			glDrawElements(GL_TRIANGLES, TRIANGLE_COUNT * 3, GL_UNSIGNED_INT, a_triangles);

			glDisableClientState(GL_NORMAL_ARRAY);
			glDisableClientState(GL_VERTEX_ARRAY);
		r_stem_list.end();
	}
	void radiusvariation(int leafType, float leafLength, float leafRadius, float thickness){			
	#pragma region radiusvariationdeclarations	
	//constants used
	const float PI = 3.14159265;//a constant to convert degrees to radians for t to angle
	const float to_Rad = PI/180;
	
	//used to generate thickness on leaf
	//float thickness = 0.003;
	
	float t = 0;
	
	
	float zRadiusl=0;//used for the fold of the leaf on the xz plane
	float alpha=0;//used for the fold of the leaf on the xz plane

	float xl=0,yl=0,zl=0;//used for the position of the leaf
	float xlchange=0, ylchange=0, zlchange=0;	//used for the change in radius of the leaf
	float xl10change=0, yl10change=0, zl10change=0;	//used for the change in radius of the leaf

	float changeNormalRadius = 0;//(leafLength - leafRadius) / 10;//used for the gradual change in radius from 0 to 90, 90 to 180 etc assumes 10 degrees rotation
	float changeMapleRadius = (leafLength - leafRadius) / 2;//used for the gradual change in radius from 0 to 90 variation.

	float leafLimit = 360;//limit rotations in degrees default value
	float leafInterval =10.0; //10.0;//number of degrees to move the smaller the more curve default value
	float leafStart = 0.0;//starting degree of rotation default value
	float leafScale = 1.0;

	float topRadius = 0.3;//used for a leaf variation
	float originalRadius = leafRadius;//used for a leaf variation
	float changeAlternateRadius = 0.0;
	
	#pragma endregion
	#pragma region radiusvariationcases
	switch (leafType){
		case 0://chordate(0)might be exception serrated(39)
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 1.0;
			leafScale = 1.0;
			//leafLength = 0.05;
			//leafRadius = 0.025;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;	
			xl=0,yl=0,zl=0;
			break;
		case 1:	//ovate(30)
			leafLimit = 3.14*180/PI;
			leafInterval = 0.00314*180/PI;
			leafScale = 1.0;
			//leafLength = 0.1;
			//leafRadius = 0.001;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;
		case 2: //obtuse(1)not in paper
			leafStart = 0.0;
			leafLimit = 180;
			leafInterval = 1;
			//leafRadius = 0.001;
			//leafLength = 0.1;
			//leafScale =3.0f;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;
		case 3: //linear(49)
			leafStart = 0.0;
			leafLimit = 3.14*180/PI;
			leafInterval = 21;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.001;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl = 0.9;break;


		case 4: //deltoid(4)
			leafStart = 0.0;
			leafLimit = 360.0;//3.15*180/PI;//3.15
			leafInterval = 11.0;//9.051.57*180/PI;//1.57   
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;	
			xl=0,yl=0,zl=0;break;	
		case 5://lanceolate(7)issue check
			leafStart = 0.314*180/PI;//0.314;
			leafLimit = 1.01*180/PI;//1.01;
			leafInterval = 0.0314*180/PI;//0.0314;        
			//leafRadius = 0.01;
			leafScale =	55.0f;
			//leafLength = 0.1;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;
		case 6://cuneate(8)in paper (1)
			leafStart = 0.314*180/PI;//0.314;
			leafLimit = 0.66*180/PI;//0.660;
			leafInterval = 0.0314*180/PI;//0.0314;        
			//leafRadius = 0.1;
			leafScale =15.0f;
			//leafLength =0.1;
			changeNormalRadius = (leafLimit / 10 + leafStart / 10) / (leafInterval * 100);
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;
		case 7://trullate(6)better to be lanceolate is in paper
			leafStart = 0.314*180/PI;//0.314;
			leafLimit = 1.37*180/PI;//1.37;
			leafInterval = 0.0314*180/PI;//0.0314;        
			//leafRadius = 0.01;
			//leafLength = 0.1;
			leafScale =25.0f;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;


		case 8://oblong(54)
			leafStart = 0.314*180/PI;//0.314;
			leafLimit = 1.37*180/PI;//1.37;0.8*180/PI;
			leafInterval = 0.0314*180/PI;//0.0314;        
			//leafRadius = 0.01;
			//leafLength = 0.1;
			leafScale =1.0;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;


		case 9:// cuneate(3)not in paper really trullate anyway
			leafStart = 0.0;
			leafLimit = 0.629*180/PI;//1.257f if you want two triangles		
			leafInterval = 0.628*180/PI;        
			//leafRadius = 0.3;
			leafScale = 1.0;		
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;	
			xl=0,yl=0,zl=0;
			break;
		case 10://orbicular(2)
			leafStart =0.0;
			leafLimit = 360;
			leafInterval = 10.0;
			//leafRadius =1;
			//leafLength = 0.1;
			leafScale = 1.0;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;
		case 11://spade(48)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval = 227;
			leafScale = 25.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;
		case 12://trullate(51)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval =270;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = 0.0;	
			xl=0,yl=0,zl=0;break;
		case 13://round(28)
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 10.0;
			leafScale = 5.0f;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			//changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;		
			xl=0,yl=0,zl=0;break;	

		case 14://reniform(10)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval = 2.0;
			leafScale = 1.0;
			//leafLength = 3.0;//0.1 is sagittate
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;	
			xl=0,yl=0,zl=0;break;
		case 15://hastate lobed(47)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval =8;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = 0.0;	
			xl=0,yl=0,zl=0;break;	
		case 16: //sagittate3(45)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval = 1.0;
			leafScale = 1.0;
			//leafLength = 3.0;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;	
			xl=-25.0,yl=0,zl=0;break;	
		case 17://sagitate(5)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval = 10.0;
			//leafRadius = 0.05;
			//leafLength = 0.1;
			leafScale = 15.0f;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;


		case 18://acicular rectangle(56)
			//change li and x
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 90.0;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;	
			xl=0;//vary to get spears etc.  trullate
			yl=0,zl=1;
			alpha=1;break;
		case 19://acicular triangle(57)
			//change li and x
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 120.0;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;	
			xl=0;//vary to get spears etc.  trullate
			yl=0,zl=1;
			alpha=1;break;

		case 20://diamond etc (44)
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 90.0;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;	
			xl=1;//vary to get spears etc.  trullate
			yl=0,zl=0;break;
		case 21://variations (55) for ovates, trullate etc.
			//change li and x
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 120.0;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;	
			xl=0.15;//vary to get spears etc.  trullate
			yl=0,zl=0;break;

		case 22://rhomboidal(52)			
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval =10;//if changes to 290 then trullate again
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = 0.0;	
			xl=0,yl=0,zl=0;break;
		case 23://elliptic(53)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval =14;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = 0.0;	
			xl=0,yl=0,zl=0;break;

		case 24://scale(29)
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 10.0;
			leafScale = 5.0f;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			//changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;		
			xl=0,yl=0,zl=0;break;	
		case 25://falcate(58)
			leafStart = 0.314*180/PI;//0.314;
			leafLimit = 1.37*180/PI;//1.37;0.8*180/PI;
			leafInterval = 0.0314*180/PI;//0.0314;        
			//leafRadius = 0.01;
			//leafLength = 0.1;
			leafScale =10.0;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;

		case 26://bileaf(11)
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 10.0;
			leafScale = 10.0f;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;
			break;

		case 27://reniform(22)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval = 10.0;
			//leafRadius = 0.05;
			//leafLength = 0.1;
			leafScale = 15.0f;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;

		case 28://hastate(46)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval =6;
			leafScale = 3.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;	
			xl=0,yl=0,zl=0;break;
		case 29://trileaf(12)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval = 10.0;
			//leafRadius = 0.05;
			//leafLength = 10.0;
			leafScale = 1.0f;
			changeNormalRadius = (leafLength - leafRadius) / 10;
			xl=0,yl=0,zl=0;break;
		case 30://tri palmate(31)
			leafStart = 0.0;
			leafLimit = 180.0;
			leafInterval = 1.0;
			leafScale = 1.0;
			leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/2))/leafInterval;
			xl=0,yl=0,zl=0;break;	
		case 31://palmate 5 leaf(32)		
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 1.0;
			leafScale = 1.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;	
			xl=0,yl=0,zl=0;break;
		case 32://palmate 5 different angle (33)	
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 1.0;
			leafScale = 1.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;		
			xl=0,yl=0,zl=0;break;
		case 33://6 star(36)		
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 1.0;
			leafScale = 1.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;		
			xl=0,yl=0,zl=0;break;
		case 34://palmate 7 (34)		
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 1.0;
			leafScale = 1.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/5))/leafInterval;		
			xl=0,yl=0,zl=0;break;
		case 35: //palmate(18)
			leafStart = 0.0;
			leafLimit = 360;
			leafInterval = 10.0;
			//leafRadius = 0.05;
			//leafLength = 0.1;
			changeMapleRadius = (leafLength - leafRadius) / 2;
			leafScale = 10.0f;
			xl=0,yl=0,zl=0;break;
		case 36://4 leaf cunneate	(35)	
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 1.0;
			leafScale = 1.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;		
			xl=0,yl=0,zl=0;break;
		case 37:	//pointy spade	(40)
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 10.0;
			leafScale = 1.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = leafLength/(leafRadius*leafInterval);
			xl=0,yl=0,zl=0;break;
		case 38: //cunneate	  
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 10.0;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/10;			
			xl=0,yl=0,zl=0;break;
		case 39: //Oblanceolate (19)   
			leafStart = 0.314*180/PI;//0.314;
			leafLimit = 0.66*180/PI;//0.660;
			leafInterval =0.0314*180/PI;// 0.0314;        
			//leafRadius = 0.2;
			leafScale = 1.0;	
			changeNormalRadius = (leafLength - leafRadius)/10;
			changeAlternateRadius = 0.0;
			xl=0,yl=0,zl=0;break;  	
		case 40://orbicular	(37)
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 15.0;
			leafScale = 10.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;		
			xl=0,yl=0,zl=0;break;	
		case 41: //flabellate(41)
			leafStart = 0.0;
			leafLimit = 180.0;
			leafInterval = 1.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			changeNormalRadius = 0;
			changeAlternateRadius = 0;
			leafScale = 1.0;
			xl=0,yl=0,zl=0;break;
		case 42://rhomboidal(5)	
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 10;
			leafScale = 1.0;
			//leafLength = 2;
			//leafRadius = 0.1;
			originalRadius = 0.1;
			changeNormalRadius = (leafLength - leafRadius)/leafInterval;
			changeAlternateRadius = 0.0;		
			xl=0,yl=0,zl=0;break;
		case 43://serrate(38)	
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 1.0;
			leafScale = 1.0;
			//leafLength = 0.5;
			//leafRadius = 0.05;
			originalRadius = leafRadius;
			changeNormalRadius = (leafLength- leafRadius)/10;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;		
			xl=0,yl=0,zl=0;break;
		case 44://sintulated	(39)	
			leafStart = 0.0;
			leafLimit = 360.0;
			leafInterval = 10.0;//1.0 becomes coarsely serrated, 5.0 close to maple leaf
			//4.0 dentate,2.0 saw-toothed
			leafScale = 1.0;
			//leafLength = 0.1;
			//leafRadius = 0.05;
			originalRadius = leafRadius;
			changeNormalRadius = (leafLength- leafRadius)/10;
			changeAlternateRadius = (leafLength - (leafRadius/3))/leafInterval;		
			xl=0,yl=0,zl=0;break;
	
		
	}
	#pragma endregion	
	glScalef(leafScale,leafScale,leafScale);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3f(xl,yl,zl);	
	int leafcounter=0;
	
	for (t = leafStart; t<=leafLimit; t+=leafInterval){	
			//calculations for the second point of triangle to generate the leaf
			xlchange = (leafRadius * (float)cos(t*PI/180)
				//compensate for xz changes when giving a fold to the leaf in xz plane ie from flat to v shaped
							  *(float)(cos(alpha*PI/180))  );
			ylchange = (leafRadius * (float)sin(t*PI/180)  );
			//gives the fold to the leaf to provide for the v shape in xz plane from flat
			//variation in alpha goes from flat to folded completely between 0 and 90
			zlchange = (zRadiusl * (float)sin(alpha*PI/180));			
			#pragma region vectorgenerationcases
				switch (leafType){
					case 0: case 1: case 2: case 3: 
						if ((0<=t) && (t <= leafLimit/2)){
							leafRadius = leafRadius + changeNormalRadius;}
						else{
							leafRadius = leafRadius - changeNormalRadius;}
						break;
					case 4:case 5:case 6:case 7:
						if ((leafStart<=t) && (t <= (leafLimit + leafStart)/2)){
							leafRadius = leafRadius + changeNormalRadius;}
						else{
							leafRadius = leafRadius - changeNormalRadius;}
						break;
					case 8:
						if ((leafStart<=t) && (t <= (leafLimit + leafStart)/2)){
							leafRadius = leafRadius + sin(t/10);}
						else{
							leafRadius = 0;}
						break;
					case 9:case 10:case 11:case 12:case 13:
						//do nothing
						break;
					case 14:case 15:case 16:case 17:
						if ((t > leafStart) && (t <= leafLimit / 8)){
										leafRadius = leafRadius - changeNormalRadius;}
						else if (((t >= leafLimit / 8) && (t < leafLimit / 8 * 3)) ||
							((t >= leafLimit / 8 * 5) && (t <= leafLimit / 8 * 7))){
							leafRadius = leafRadius;}
						else if ((t >= leafLimit / 8 * 3) && (t < leafLimit / 8 * 4)){
							leafRadius = leafRadius - 0.002f;}
						else if ((t >= leafLimit / 8 * 4) && (t < leafLimit / 8 * 5)){                     
							leafRadius = leafRadius + 0.002f;}
						else if ((t >= leafLimit / 8 * 7) && (t < leafLimit / 8 * 8)){
							leafRadius = leafRadius + changeNormalRadius;}
						
					break;
					case 18:case 19:
						if (t>=0 ||t<=90) {leafRadius = leafRadius - changeNormalRadius;}
						else if (t>=90|| t<=180) {leafRadius = leafRadius + changeNormalRadius;}
						else {leafRadius = 0;}
						break;
					case 20:case 21:
						if (t>=0 ||t<=90) {leafRadius = leafRadius;}
						else if (t>=90|| t<=180) {leafRadius = leafLength;}
						else {leafRadius = 0;}
						break;
					case 22:case 23:
						if ((t>=0 && t<90)||(t>=260 && t<270)){
								leafRadius = leafRadius + changeNormalRadius;}
						else if ((t>=180 && t<260)||(t>=280 && t<361)){
							leafRadius = originalRadius;}//vary this
						else {
								leafRadius = leafRadius - changeNormalRadius;}
						break;
					case 24:
						if ((0<=t) && (t<=leafLimit/4)){
							leafRadius = leafRadius + changeNormalRadius;}				
						else if ((t>=leafLimit/4) && (t<=leafLimit/4*2))
							{leafRadius = leafRadius - changeNormalRadius;}
						else{	leafRadius = 0;}
						break;
					case 25:
						if ((0<=t) && (t<=(leafLimit + leafStart)/4)){
							leafRadius = leafRadius + changeNormalRadius;}				
						else if ((t>=(leafLimit + leafStart)/4) && (t<=(leafLimit + leafStart)/4*2))
							{leafRadius = leafRadius - changeNormalRadius;}
						else{	leafRadius = 0;}
						break;
					case 26:
						if ((t>=0 && t<leafLimit/4)|| (t>=leafLimit/4*2 && t<leafLimit/4*3)){ 					
							leafRadius = leafRadius + changeNormalRadius;}				
						else {
							leafRadius = leafRadius - changeNormalRadius;}
						break;
					case 27:
						if (((t >= 0) && (t < leafLimit / 4))){
                            leafRadius = leafRadius + changeNormalRadius;}
                        else if ((t >= leafLimit / 4) && (t < leafLimit / 4 * 3)){
                            leafRadius = leafRadius;}
                        else{
                            leafRadius = leafRadius - changeNormalRadius;}
					break;
					case 28://hastate
						if ((t >= 0) && (t < leafLimit / 4)){
                            leafRadius = leafRadius + changeNormalRadius;}
                        else if (((t >= leafLimit / 2) && (t < 225))||((t >= 270) && (t < 315))){
							leafRadius = leafRadius + 0.01;}//range from 0.0001 to 0.01                       
						else if ((t > 225) && (t < 270)){
                            leafRadius = leafRadius - 0.01;}
						else if ((t >= 315) && (t < 360)){                     
							leafRadius = leafRadius - 0.01;}
                        else{
                            leafRadius = leafRadius - changeNormalRadius;}
					break;		
					case 29: //trileaf (12)
						if ((t>=0 && t<leafLimit/6)|| 
							(t>=leafLimit/6*2 && t<leafLimit/6*3)||
							(t>=leafLimit/6*4 && t<leafLimit/6*5)){ 							
							leafRadius = leafRadius + changeNormalRadius;}				
						else {
							leafRadius = leafRadius - changeNormalRadius;}
						break;
					case 30://palmate 3 leaf(31)
						if (0 <= t && t<45.0){
							leafRadius = leafRadius + changeNormalRadius;}
						else if ((45.0<= t&& t <60.0)||(90.0<= t && t < 120.0)){
							leafRadius = leafRadius - changeAlternateRadius;}
						else if ((60.0<= t&& t < 90.0)||(120.0<=t && t <135.0)){
							leafRadius = leafRadius + changeAlternateRadius;}
						else {
							leafRadius = leafRadius - changeNormalRadius;}
						break;
					case 31://palmate 5 leaf(32)
						if (0.0 <= t && t<36.0){leafRadius = leafRadius + changeAlternateRadius;}
						else if (36.0<= t && t <72.0){leafRadius = leafRadius - changeAlternateRadius;}
						else if(72.0<= t&& t <108.0){leafRadius = leafRadius + changeAlternateRadius;}	
						else if (108.0<= t&& t <144.0){leafRadius = leafRadius - changeAlternateRadius;}				
						else if (144.0<= t && t < 180.0){leafRadius = leafRadius + changeAlternateRadius;}
						else if (180.0<= t && t < 216.0){leafRadius = leafRadius - changeAlternateRadius;}
						else if (216.0<= t && t < 252.0){leafRadius = leafRadius + changeAlternateRadius;}
						else if (252.0<= t && t < 288.0){leafRadius = leafRadius - changeAlternateRadius;}
						else if (288.0<= t && t < 324.0){leafRadius = leafRadius + changeAlternateRadius;}				
						else{leafRadius =leafRadius - changeAlternateRadius;}//donothing							
						break;			
					case 32://palmate 5 another on(33)
						if (0.0 <= t && t<36.0){leafRadius = leafRadius + changeAlternateRadius;}
						else if (36.0<= t && t <72.0){leafRadius = leafRadius - changeAlternateRadius;}
						else if(72.0<= t&& t <108.0){leafRadius = leafRadius + changeAlternateRadius;}	
						else if (108.0<= t&& t <144.0){leafRadius = leafRadius - changeAlternateRadius;}				
						else if (144.0<= t && t < 180.0){leafRadius = leafRadius + changeAlternateRadius;}
						else if (180.0<= t && t < 216.0){leafRadius = leafRadius - changeAlternateRadius;}
						else if (216.0<= t && t < 252.0){leafRadius = leafRadius + changeNormalRadius;}
						else if (252.0<= t && t < 288.0){leafRadius = leafRadius - changeNormalRadius;}
						else if (288.0<= t && t < 324.0){leafRadius = leafRadius + changeNormalRadius;}
						else{leafRadius =leafRadius - changeNormalRadius;}
						break;
					case 33://star 6 (36)
						if (0.0 <= t && t<30.0){leafRadius = leafRadius + changeNormalRadius;}
						else if (30.0<= t && t <60.0){leafRadius = leafRadius - changeNormalRadius;}
						else if(60.0<= t&& t <90.0){leafRadius = leafRadius+ changeNormalRadius;}	
						else if (90.0<= t&& t <120.0){leafRadius = leafRadius - changeNormalRadius;}				
						else if (120.0<= t && t < 150.0){leafRadius = leafRadius + changeNormalRadius;}
						else if (150.0<= t && t < 180.0){leafRadius = leafRadius - changeNormalRadius;}
						else if (180.0<= t && t < 210.0){leafRadius = leafRadius + changeNormalRadius;}
						else if (210.0<= t && t < 240.0){leafRadius = leafRadius - changeNormalRadius;}
						else if (240.0<= t && t < 270.0){leafRadius = leafRadius + changeNormalRadius;}
						else if (270.0<= t && t < 300.0){leafRadius = leafRadius - changeNormalRadius;}
						else if (300.0<= t && t < 330.0){leafRadius = leafRadius + changeNormalRadius;}
						else{leafRadius =leafRadius - changeNormalRadius;}
						break;
					case 34://palmate 7(34)
						if (0.0 <= t && t<25.7){leafRadius = leafRadius + changeAlternateRadius;}
						else if (25.7<= t && t <51.4){leafRadius = leafRadius - changeAlternateRadius;}
						else if(51.4<= t&& t <77.1){leafRadius = leafRadius + changeAlternateRadius;}	
						else if (77.1<= t&& t <102.86){leafRadius = leafRadius - changeAlternateRadius;}				
						else if (102.86<= t && t < 128.57){leafRadius = leafRadius + changeAlternateRadius;}
						else if (128.57<= t && t < 154.29){leafRadius = leafRadius - changeAlternateRadius;}
						else if (154.29<= t && t < 180.0){leafRadius = leafRadius + changeAlternateRadius;}
						else if (180.0<= t && t < 205.71){leafRadius = leafRadius - changeAlternateRadius;}
						else if (205.71<= t && t < 231.43){leafRadius = leafRadius + changeNormalRadius;}
						else if (231.43<= t && t < 257.14){leafRadius = leafRadius - changeNormalRadius;}
						else if (257.14<= t && t < 282.86){leafRadius = leafRadius + changeNormalRadius;}
						else if (282.86<= t && t < 308.57){leafRadius = leafRadius - changeNormalRadius;}
						else if (308.57<= t && t < 334.29){leafRadius = leafRadius + changeNormalRadius;}
						else{leafRadius =leafRadius - changeNormalRadius;}
					break;
					case 35://almost maple palmate(18)
						if ((t>=0 && t<leafLimit/16)|| 
							(t>=leafLimit/16*2 && t<leafLimit/16*3)||
							(t>=leafLimit/16*4 && t<leafLimit/16*5)||
							(t>=leafLimit/16*6 && t<leafLimit/16*7)||
							(t>=leafLimit/16*8 && t<leafLimit/16*9)||
							(t>=leafLimit/16*10 && t<leafLimit/16*11)){ 					
							leafRadius = leafRadius + changeMapleRadius;}				
						else {
							leafRadius = leafRadius - changeMapleRadius;}
						break;
					case 36://4 leaf cunneate(35)
						if (0.0 <= t && t<30.0){leafRadius = leafRadius - changeAlternateRadius;}
						else if (30.0<= t && t <60.0){leafRadius = leafRadius;}
						else if(60.0<= t&& t <90.0){leafRadius = leafRadius+changeAlternateRadius;}	
						else if (90.0<= t&& t <120.0){leafRadius = leafRadius - changeAlternateRadius;}				
						else if (120.0<= t && t < 150.0){leafRadius = leafRadius;}
						else if (150.0<= t && t < 180.0){leafRadius = leafRadius + changeAlternateRadius;}
						else if (180.0<= t && t < 210.0){leafRadius = leafRadius - changeAlternateRadius;}
						else if (210.0<= t && t < 240.0){leafRadius = leafRadius;}
						else if (240.0<= t && t < 270.0){leafRadius = leafRadius + changeAlternateRadius;}
						else if (270.0<= t && t < 300.0){leafRadius = leafRadius - changeAlternateRadius;}
						else if (300.0<= t && t < 330.0){leafRadius = leafRadius;}
						else{leafRadius =leafRadius + changeAlternateRadius;}
						break;
					case 37://pointy spade(40)
						if (t>=70 && t<110){
							leafRadius = leafLength +(leafLength + leafRadius* tan(t));}
						else {
							leafRadius = 0;	}
						break;
					case 38://cunneate(42)
						if (t>=70 && t<110){
							leafRadius = leafLength;}
						else {
							leafRadius = 0;	}
						break;
					case 39:// oblaneolate(19)
						topRadius = 0.3;//(float)(Math.Sin(MathHelper.ToRadians(leafLimit)))/2;
						if ((t >= leafStart) && (t < ((leafLimit + leafStart) / 2))){
							leafRadius = leafRadius - topRadius * (float)cos(t*to_Rad);}
						else{leafRadius = leafRadius + topRadius * (float)sin(t*to_Rad);}
						break;				
					case 40://orbicular(37)
						leafRadius = leafRadius + (changeNormalRadius * sin(t));
						break;
					case 41://flabellate(41)
						if (t>=15 && t<165){leafRadius = leafLength;}
						else {leafRadius = 0;	}
						break;	
					case 42: //rhomboidal(50)
						if ((t>=40 && t<90)||(t>=220 && t<270)){
							leafRadius = leafRadius + changeNormalRadius;}
						else if ((t>=0 && t<40)||(t>=130 && t<230)||(t>=315 && t<=360)){
							leafRadius = leafLength+ originalRadius;}
						else {leafRadius = leafRadius - changeNormalRadius;}
						break;

					case 43://ovate serrated (38)
						if (0.0 <= t && t<180.0){leafRadius = changeNormalRadius ;}
						else if (180.0<= t && t <270.0){leafRadius = leafRadius - (10*originalRadius)+ sin(t);}				
						else{leafRadius =leafRadius + (10* originalRadius)+ sin(t);}
						break;
					case 44://serrated(39)
							if (t>0 && t<leafLimit/2){
								leafRadius = leafRadius + (10*originalRadius)+ sin(t);	}
							else {
								leafRadius = leafRadius - (10*originalRadius)+ sin(t);}
						break;
				}
				#pragma endregion 
	//calculations for the second point of triangle to generate the leaf
			xl10change = (leafRadius * (float)cos((t+leafInterval)*PI/180)
				//compensate for xz changes when giving a fold to the leaf in xz plane ie from flat to v shaped
							  *(float)(cos(alpha*PI/180)) );
			yl10change = (leafRadius * (float)sin((t+leafInterval)*PI/180)  );
			//gives the fold to the leaf to provide for the v shape in xz plane from flat
			//variation in alpha goes from flat to folded completely between 0 and 90
			zl10change = (zRadiusl * (float)sin(alpha*PI/180));					
			
			#pragma region prismvectorgeneration
			//defined the prism
			//given prism with top ABC, Bottom DEF
			// A = 0,0,0 B= x + xchange,y-ychange,z+zchange
			//C=x + x10change (next change), y-y10change, z+z10change
			//D= 0,0,thickness D= x+xchange,y-ychange, z+zchange+thickness 
			//E= x+x10xhange, y-y10change, z+z10change+thickness
			//face one top counterclockwise
			//will get normal facing out
			//ABC
			//A
			glNormal3f(0,0,1);
			glVertex3f(0,0,0);
			//B
			glNormal3f(0,0,1);			
			glVertex3f(xl + xlchange
                      ,(yl - ylchange)
                      ,(zl + zlchange)
                      );
			//C
			glNormal3f(0,0,1);
			glVertex3f(xl + xl10change
                      ,(yl - yl10change)
                      ,(zl + zl10change)
                      );
			glNormal3f(0,0,-1);
			glVertex3f(xl + xlchange
                      ,(yl - ylchange)
                      ,(zl + zlchange-thickness)
                      );	
			glNormal3f(0,0,-1);
			glVertex3f(xl + xl10change
                      ,(yl - yl10change)
                      ,(zl + zl10change-thickness)
                      );		
			glNormal3f(0,0,-1);
			glVertex3f(0,0,-thickness);				
			#pragma endregion
		}//endfor	
	glEnd();	
	}


	const string AXIOM = "FP";
	const string PETIOLEAXIOM = "FP";
	const string VEINAXIOM = "V";
	const unsigned int MAX_ITERATIONS = 10;
	
	const double DEFAULT_DISTANCE = 10.0;

	string g_plant;//g_plant[MAX_ITERATIONS];
	string g_petiole_plant;
	string g_vein_plant;

	unsigned int g_iterations = 0;
	unsigned int g_petiole_iterations = 1;
	unsigned int g_vein_iterations = 1;
	double g_distance = DEFAULT_DISTANCE;

	double g_rotate_x = 35.0;
	double g_rotate_y = 50.0;
	double g_rotate_z = 65.0;

	string ga_production_rules[128];
	string ga_production_petiole_rules[128];
	string ga_production_vein_rules[128];
}



void calculateProductionRules ()
{
	//P is equivalent to petiole structure limited to the base branching i.e. stem
	//A is a leaf limited to petiole structure
	//B is a bud that grows into a leaf/stem limited to the base branching i.e. stem
	//V is a leaf and veins that depend on season
	//U is a fruit limited to the petiole structure
	//L is a flower limited to the petiol structure
	//R is for rotations of wind, sun
	//{ is for each year's growth
	for(unsigned char i = 0; i < 128; i++)
		ga_production_rules[i] = (char)i;	
	//ga_production_rules['A'] = "FBA&FB";
	ga_production_rules['P'] = "{FBB[-/RFBP][+/RFBP]\\RFBP}";//really nice
	//ga_production_rules['P'] = "FBB[-/RFABP][+/RFABP]\\RFABP";//gives leaves at every tip
	//ga_production_rules['P'] = "FBRB[-/RFPBP][+/RFPBP]\\RFPBP";//interesting
	//ga_production_rules['B'] = "FNB";
	//ga_production_rules['B'] = "FPNB";//optional on/off gives more leaves
	//ga_production_rules['B'] = "+FFPB";//optional on/off interesting
	//ga_production_rules['B'] = "+FBPFPB";//optional on/off vine like
	//ga_production_rules['N'] = "N";
	#pragma region LSystem Stem Productions
    //Lsystem stem productions
    //production[0, 0] = "F";            
    // production['F'] = "F";
    // ga_production_rules['F'] = "FA[/F](+22.7)A[\\F](+22.7)A";
    // take away the // if you want to test or copy a certain lsystem the formulae have been altered for 3D from 2D tests
    // as yaw only rotates around the y axis it does not reflect the 2D unless pitch (^&) or roll(/\) is utilized.
    //in this case + became \\ and - became /
    //   production[0, 0] = "F";
    //   ga_production_rules['F'] = "AFA";
    //production[0, 0] = "F";
	//ga_production_rules['F'] = "F[+FPA][-FPA]";
    //my own
    //production[0, 0] = "F";
    //ga_production_rules['F'] = "F[/F](+22.7)[\\F](+22.7)F";
    //test ONE pg 25(c) algorithmic beauty 22.5 iteration 4 AXIOM F
     // production[0, 0] = "F";
     // ga_production_rules['F'] ="FF-[/F\\F\\FA]\\[\\F/F/FA]";
    //test TWO pg 25(a) algorithmic beauty angle 25.7 iteration 5 AXIOM F
    //  production[0, 0] = "F";
   //  ga_production_rules['F'] ="F[\\F]F[/F]F";
    //test THREE pg 25(b) algorithmic beauty angle 20 iteration 5 AXIOM F
    //  production[0, 0] = "F";
    //  ga_production_rules['F'] ="FA[\\FA]FA[/FA][FA]";
    //my own fun axiom F
    //  production[0, 0] = "F";
    // ga_production_rules['F'] ="FA[\\FA]FA[/FA][^FA][&FA]FA";
    //some more fun axiom F
     // production[0, 0] = "F";
    //  ga_production_rules['F'] ="F/F\\F\\FF/F/F\\F";
    //some more fun axiom F
    //  production[0, 0] = "F";
    //  ga_production_rules['F'] ="f[/F]f[\\F]f";
    //some more..axiom F
     // production[0, 0] = "F";
     // ga_production_rules['F'] ="F[/(20)Ff][\\(45)F][\\(67)F]F";
    //test FOUR pg 25(d) algorithmic beauty angle 20 iteration 7 AXIOM X
    //  production[0, 0] = "X";
    //  ga_production_rules['F'] = "F[\\X]F[/X]\\X";
   //  production[1,0] = "F";
    //  production[1,1] = "FF";
    //test FIVE pg 25(e) algorithmic beauty angle 25.7 iteration 7 AXIOM X
    //  production[0, 0] = "X";
    //  ga_production_rules['F'] = "F[\\X][/X]FX";
    //  production[1,0] = "F";
    //  ga_production_rules[1,1] = "FF";
    //test SIX pg 25(f) algorithmic beauty angle 25.7 iteration 5 AXIOM X
    //  production[0, 0] = "X";
    //  ga_production_rules['F'] = "F/[[X]\\X]\\F[\\FX]/X";
    //  production[1,0] = "F";
    //  ga_production_rules[1,1] = "FF";
    //kosh curves test SEVEN pg 9(a) algorithmic beauty angle 90 iteration 2 AXIOM F/F/F/F
    //  production[0, 0] = "F";
    //  ga_production_rules['F'] = "F\\FF/FF/F/F\\F\\FF/F/F\\F\\FF\\FF/F";
    //kosh curves test EIGHT pg 9(b) algorithmic beauty angle 90 iteration 4 AXIOM /F
    //  production[0, 0] = "F";
    //  ga_production_rules['F'] = "F\\F/F/F\\F";
    //kosh curves test NINE pg 9(c) algorithmic beauty angle 90 iteration 5 AXIOM F\\F\\F\\F
    //  production[0, 0] = "F";
    //  ga_production_rules['F'] = "F\\f/FF\\F\\FF\\Ff\\FF/f\\FF/F/FF/Ff/FFF";
    //  production[2,0] = "f";
    //  production[2,1] = "ffffff";
    //kosh curves test TEN pg 10(a) algorithmic beauty angle 90 iteration 4 AXIOM F/F/F/F
    //  ga_production_rules[0, 0] = "F";
    //  production['F'] = "FF/F/F/F/F/F\\F";
    //kosh curves test ELEVEN pg 10(b) algorithmic beauty angle 90 iteration 4 AXIOM F/F/F/F
    //  production[0, 0] = "F";
    //  ga_production_rules['F'] = "FF/F/F/F/FF";
    //kosh curves test TWELVE pg 10(c) algorithmic beauty angle 90 iteration 3 AXIOM F/F/F/F
    //  production[0, 0] = "F";
    //  ga_production_rules['F'] = "FF/F\\F/F/FF";
    //kosh curves test THIRTEEN pg 10(d) algorithmic beauty angle 90 iteration 4 AXIOM F/F/F/F
    //  production[0, 0] = "F";
    //  ga_production_rules['F'] = "FF/F//F/F";
    //kosh curves test FOURTEEN pg 10(e) algorithmic beauty angle 90 iteration 5 AXIOM F/F/F/F
    //  production[0, 0] = "F";
    //  ga_production_rules['F'] = "F/FF//F/F";
    //kosh curves test FIFTEEN pg 10(f) algorithmic beauty angle 90 iteration 4 AXIOM F/F/F/F
    // production[0, 0] = "F";
    // ga_production_rules['F'] = "F/F\\F/F/F";
    /// 
    #pragma endregion
	#pragma region Lsystem Petiole Productions
	for(unsigned char i = 0; i < 128; i++)
		ga_production_petiole_rules[i] = (char)i;
	 ga_production_petiole_rules['P']="[+RFLUSV][-RFLUSV][^RFLUSV][&RFLUSV]";
	 
	#pragma endregion
	 #pragma region Lsystem Vein Productions
	for(unsigned char i = 0; i < 128; i++)
		ga_production_vein_rules[i] = (char)i;
	 ga_production_vein_rules['V']="RA[-F+F]F[+F-F]F[-F+F]";
	#pragma endregion
}


string growPlant (string axiom, unsigned int iterations, string production_rules[128])
{
	string result;

	if(iterations == 0)
		return axiom;

	for(unsigned int i = 0; i < iterations; i++)
	{
		if(i > 0)
			axiom = result;
			
		result = "";		
		for(unsigned int j = 0; j < axiom.length(); j++)
			result +=  production_rules[axiom[j]];
					
	}

	return result;
}

void drawVein (const string& pattern, GLfloat cameramatrix[16])
{
	//assert(g_leaf2_list[leafType].getState() == DisplayList::READY);
	//assert(g_vein_list.getState() == DisplayList::READY);
	GLfloat leaf_ambient[] = { 0.2, 0.3, 0.1, 0.9 };
	GLfloat leaf_diffuse[] = { 0.3, 0.6, 0.2, 0.9 };
	GLfloat leaf_specular[] = { 0.2, 0.5, 0.3, 0.9 };

	GLfloat vein_ambient[] = { 0.2, 0.3, 0.1, 1.0 };
	GLfloat vein_diffuse[] = { 0.4, 0.8, 0.3, 1.0 };
	GLfloat vein_specular[] = { 0.2, 0.5, 0.3, 1.0 };

	GLfloat fruit_ambient[] = { 0.2, 0.3, 0.1, 1.0 };
	GLfloat fruit_diffuse[] = { 0.4, 0.6, 0.2, 1.0 };
	GLfloat fruit_specular[] = { 0.8, 1.0, 0.4, 1.0 };

	
	//add motion transformation here for the leaf  and the veins
				glRotated((rand() % 9000) / 100.0 - 45.0,1.0,0,0);
				glRotated((rand() % 9000) / 100.0 - 45.0,0,1.0,0);
				glRotated((rand() % 9000) / 100.0 - 45.0,0,0,1.0);
	
	
	for(unsigned int i = 0; i < pattern.length(); i++)
		switch(pattern[i])
		{
		case 'F':	
			if (yearCounter>targetSpring && yearCounter<targetFall){
			glMaterialfv(GL_FRONT, GL_AMBIENT, vein_ambient);
			glMaterialfv(GL_FRONT, GL_DIFFUSE, vein_diffuse);
			glMaterialfv(GL_FRONT, GL_SPECULAR, vein_specular);	
			glMaterialf(GL_FRONT, GL_SHININESS, 20.0);
			g_vein_list.draw();
			//gluCylinder(mycylinder,veinBottomRadius,veinTopRadius,veinLength,24,24);			
			glTranslated(0.0, 0.0, veinLength);
			//gluDisk(mydisk,0.0,veinTopRadius,24,12);
			}
			break;		
		case 'A':	
			if (yearCounter>targetSpring && yearCounter<targetFall){
			glPushMatrix();
				if (yearCounter>targetSummer){
					GLfloat leaf_ambient[] = { 1.0, 0.6, 0.0, 0.9 };
					GLfloat leaf_diffuse[] = { 1.0, 0.6, 0.0, 0.9 };
					GLfloat leaf_specular[] = { 1.0, 0.6, 0.0, 0.9 };
					}
				glMaterialfv(GL_FRONT, GL_AMBIENT, leaf_ambient);
				glMaterialfv(GL_FRONT, GL_DIFFUSE, leaf_diffuse);
				glMaterialfv(GL_FRONT, GL_SPECULAR, leaf_specular);				
				glMaterialf(GL_FRONT, GL_SHININESS, 50.0);			
				glRotated(90,  0.0, 1.0,0.0);
				g_leaf2_list[leafType].draw();			
			glPopMatrix();
			}
			break;		
		case 'R':	
			//	wind influence	

			#pragma region changing effect to leaves randomly
			
					windeffect = rand() % 4;
					if (windon){
						glRotated(windstrength,wdirection.x,wdirection.y,wdirection.z);
						switch (windeffect){
							case 0://vibrate 								
								glRotated(windvibrate,0,0,1);
								break;
							case 1://twist								
								glRotated(windtwist,0,0,1);
								break;
							case 2://bend								
								glRotated(windbend,0,1,0);
								break;
							case 3://bend and twist								
								glRotated(windtwist,0,0,1);								
								glRotated(windbend,0,1,0);
							break;
							}
					}
			#pragma endregion
			break;	
		case '-':			
			glRotated(g_rotate_x, 1.0, 0.0, 0.0);
			break;
		case '+':
			glRotated(-g_rotate_x, 1.0, 0.0, 0.0);
			break;
		case '&':
			glRotated(g_rotate_y, 0.0, 1.0, 0.0);
			break;
		case '^':
			glRotated(-g_rotate_y, 0.0, 1.0, 0.0);
			break;
		case '/':
			glRotated(g_rotate_z, 0.0, 0.0, 1.0);
			break;
		case '\\':
			glRotated(-g_rotate_z, 0.0, 0.0, 1.0);
			break;
		/*case '(':
			unsigned int j = i+1;
			string get_string = "";
			do{
				get_string += pattern[j];
				j++;
				while(pattern[j]!==')')}
			g_rotate = (GLfloat)(get_angle);
			break;*/
		case '[':
			glPushMatrix();
			break;
		case ']':
			glPopMatrix();
			break;
		}
}

void drawPetiole (const string& pattern, GLfloat cameramatrix[16])
{	
	//assert(g_petiole_list.getState() == DisplayList::READY);

	GLfloat petiole_ambient[] = { 0.2, 0.3, 0.1, 0.9 };
	GLfloat petiole_diffuse[] = { 0.4, 0.6, 0.2, 0.9 };
	GLfloat petiole_specular[] = { 0.8, 1.0, 0.4, 0.9 };

	GLfloat leaf_ambient[] = { 0.2, 0.3, 0.1, 0.9 };
	GLfloat leaf_diffuse[] = { 0.3, 0.6, 0.2, 0.9 };
	GLfloat leaf_specular[] = { 0.5, 1.0, 0.4, 0.9 };
	
	GLfloat fruit_ambient[] = { 0.2, 0.3, 0.1, 1.0 };
	GLfloat fruit_diffuse[] = { 0.4, 0.6, 0.2, 1.0 };
	GLfloat fruit_specular[] = { 0.8, 1.0, 0.4, 1.0 };
	
	unsigned int raycounter=0;
	
	
	for(unsigned int i = 0; i < pattern.length(); i++)
		switch(pattern[i])
		{
		case 'F':	
			if (yearCounter>targetSpring && yearCounter<targetFall){
			glMaterialfv(GL_FRONT, GL_AMBIENT, petiole_ambient);
			glMaterialfv(GL_FRONT, GL_DIFFUSE, petiole_diffuse);
			glMaterialfv(GL_FRONT, GL_SPECULAR, petiole_specular);	
			glMaterialf(GL_FRONT, GL_SHININESS, 2.0);			
			//gluCylinder(mycylinder,petioleBottomRadius,petioleTopRadius,petioleLength,24,24);			
			g_petiole_list.draw();
			glTranslated(0.0, 0.0, petioleLength);
			//gluDisk(mydisk,0.0,petioleTopRadius,24,12);
			}
			break;		
		case 'A':	
			if (yearCounter>targetSpring && yearCounter<targetFall){
			glPushMatrix();
				if (yearCounter>targetSummer){
					GLfloat leaf_ambient[] = { 1.0, 0.6, 0.0, 0.9 };
					GLfloat leaf_diffuse[] = { 1.0, 0.6, 0.0, 0.9 };
					GLfloat leaf_specular[] = { 1.0, 0.6, 0.0, 0.9 };
					}
				glMaterialfv(GL_FRONT, GL_AMBIENT, leaf_ambient);
				glMaterialfv(GL_FRONT, GL_DIFFUSE, leaf_diffuse);
				glMaterialfv(GL_FRONT, GL_SPECULAR, leaf_specular);				
				glMaterialf(GL_FRONT, GL_SHININESS, 50.0);			
				glRotated(90,  0.0, 1.0,0.0);

				g_leaf2_list[leafType].draw();			
			glPopMatrix();
			}
			break;		
		case 'V':			
			if (yearCounter>targetSpring && yearCounter<targetFall){
			glPushMatrix();				
				glRotated(90, 0.0, 1.0, 0.0);
				drawVein(g_vein_plant, cameramatrix);				
			glPopMatrix();	
			}
			break;	
		case 'R':	
			//	wind influence	
			
			if (windon){		
				glRotated(windpetiolebend*windstrength,wdirection.x,wdirection.y,wdirection.z);			
				}

			break;	
		case 'L':		
			if (yearCounter<targetSpring){
			glMaterialf(GL_FRONT, GL_SHININESS, 500.0);				

			//add motion transformation here for the flower
			glRotated((rand() % 9000) / 100.0 - 45.0,1.0,0,0);
			glRotated((rand() % 9000) / 100.0 - 45.0,0,1.0,0);
			glRotated((rand() % 9000) / 100.0 - 45.0,0,0,1.0);			
			//g_flower_list.draw();		
			}
			break;
		case 'U':					
			glMaterialf(GL_FRONT, GL_SHININESS, 500.0);				

			//add motion transformation here for the fruit
			glRotated((rand() % 9000) / 100.0 - 45.0,1.0,0,0);
			glRotated((rand() % 9000) / 100.0 - 45.0,0,1.0,0);
			glRotated((rand() % 9000) / 100.0 - 45.0,0,0,1.0);			
			//g_fruit_list.draw();			
			break;
		case 'S':					
			glMaterialf(GL_FRONT, GL_SHININESS, 500.0);				

			//add motion transformation here for the seed
			glRotated((rand() % 9000) / 100.0 - 45.0,1.0,0,0);
			glRotated((rand() % 9000) / 100.0 - 45.0,0,1.0,0);
			glRotated((rand() % 9000) / 100.0 - 45.0,0,0,1.0);			
			//g_seed_list.draw();			
			break;
		case '-':			
			glRotated(g_rotate_x, 1.0, 0.0, 0.0);
			break;
		case '+':
			glRotated(-g_rotate_x, 1.0, 0.0, 0.0);
			break;
		case '&':
			glRotated(g_rotate_y, 0.0, 1.0, 0.0);
			break;
		case '^':
			glRotated(-g_rotate_y, 0.0, 1.0, 0.0);
			break;
		case '/':
			glRotated(g_rotate_z, 0.0, 0.0, 1.0);
			break;
		case '\\':
			glRotated(-g_rotate_z, 0.0, 0.0, 1.0);
			break;
		/*case '(':
			unsigned int j = i+1;
			string get_string = "";
			do{
				get_string += pattern[j];
				j++;
				while(pattern[j]!==')')}
			g_rotate = (GLfloat)(get_angle);
			break;*/
		case '[':
			glPushMatrix();
			break;
		case ']':
			glPopMatrix();
			break;
		}
}


void drawPlant (const string& pattern, int yearno, GLfloat cameramatrix[16])
{
	//assert(g_stem_list[yearno].getState() == DisplayList::READY);

	GLfloat stem_ambient[] = { 0.3, 0.2, 0.1, 1.0 };
	GLfloat stem_diffuse[] = { 0.3, 0.15, 0.05, 1.0 };
	GLfloat stem_specular[] = { 0.3, 0.2, 0.1, 1.0 };

	GLfloat leaf_ambient[] = { 0.2, 0.3, 0.1, 0.9 };
	GLfloat leaf_diffuse[] = { 0.3, 0.6, 0.2, 0.9 };
	GLfloat leaf_specular[] = { 0.5, 1.0, 0.4, 0.9 };
	int yearcount = 0;
	float stem = stemLength2[0];
	
	for(unsigned int i = 0; i < pattern.length(); i++)
		switch(pattern[i])
		{			
		case 'F':
			glMaterialfv(GL_FRONT, GL_AMBIENT, stem_ambient);
			glMaterialfv(GL_FRONT, GL_DIFFUSE, stem_diffuse);
			glMaterialfv(GL_FRONT, GL_SPECULAR, stem_specular);
			glMaterialf(GL_FRONT, GL_SHININESS, 2.0);
			//gluCylinder(mycylinder,stemBottomRadius,stemTopRadius,stemLength,24,2);
			g_stem_list2[yearcount].draw();
			glTranslated(0.0, 0.0, stem);
			//constant wind effects on the plant rotation
			glRotated(g_rotate, 1.0, 0.0, 0.0);
			//gluDisk(mydisk,0.0,stemTopRadius,24,12);
			break;		
		case 'A':
			if (yearCounter>targetSpring && yearCounter<targetFall){
			glPushMatrix();
				if (yearCounter>targetSummer){
					GLfloat leaf_ambient[] = { 1.0, 0.6, 0.0, 0.9 };
					GLfloat leaf_diffuse[] = { 1.0, 0.6, 0.0, 0.9 };
					GLfloat leaf_specular[] = { 1.0, 0.6, 0.0, 0.9 };
					}
				glMaterialfv(GL_FRONT, GL_AMBIENT, leaf_ambient);
				glMaterialfv(GL_FRONT, GL_DIFFUSE, leaf_diffuse);
				glMaterialfv(GL_FRONT, GL_SPECULAR, leaf_specular);				
				glMaterialf(GL_FRONT, GL_SHININESS, 50.0);			
				glRotated(90,  0.0, 1.0,0.0);
				g_leaf2_list[leafType].draw();			
			glPopMatrix();
			}
			break;		
		case 'P':
			if (yearCounter>targetSpring && yearCounter<targetFall){
			glPushMatrix();					
				drawPetiole(g_petiole_plant, cameramatrix);				
			glPopMatrix();
			}
			break;
		case 'R':				
			//	wind influence
			if (windon){	
				//add if windstrength > 120 snap off
				glRotated(windsway,wdirection.x,wdirection.y,wdirection.z);
			}
			break;
		case '-':	
			if (g_rotate !=0){g_rotate_x = g_rotate;}
			glRotated(g_rotate_x, 1.0, 0.0, 0.0);
			break;
		case '+':
			if (g_rotate !=0){g_rotate_x = g_rotate;}
			glRotated(-g_rotate_x, 1.0, 0.0, 0.0);
			break;
		case '&':
			if (g_rotate !=0){g_rotate_y = g_rotate;}
			glRotated(g_rotate_y, 0.0, 1.0, 0.0);
			break;
		case '^':
			if (g_rotate !=0){g_rotate_y = g_rotate;}
			glRotated(-g_rotate_y, 0.0, 1.0, 0.0);
			break;
		case '/':
			if (g_rotate !=0){g_rotate_z = g_rotate;}
			glRotated(g_rotate_z, 0.0, 0.0, 1.0);
			break;
		case '\\':
			if (g_rotate !=0){g_rotate_z = g_rotate;}
			glRotated(-g_rotate_z, 0.0, 0.0, 1.0);
			break;
		case '(':
			 j = i+1;
			get_string = "";
			do{
				get_string += pattern[j];
				j++;
			} while(pattern[j]!=')');
			/*get_prev_string = pattern[i-1];
			if (get_prev_string = "F"){
				stemLength = atof(get_string.c_str());}
			else {*/
				g_rotate = atof(get_string.c_str());//}
			break;
		case '{':
				yearcount ++;
				if (yearcount>yearno){yearcount=yearno;}
				stem = stemLength2[yearcount];
			break;
		case '}':
				yearcount --;
				if (yearcount<0){yearcount=0;}
				stem = stemLength2[yearcount];
			break;
		case '[':
			glPushMatrix();
			break;
		case ']':
			glPopMatrix();
			break;
		}
}

namespace OpenGLForm 
{
	public ref class COpenGL: public System::Windows::Forms::NativeWindow
	{
	public:
		COpenGL(System::Windows::Forms::Form ^ parentForm, GLsizei iWidth, GLsizei iHeight)
		{
			CreateParams^ cp = gcnew CreateParams;

			// Set the position on the form
			cp->X = 0;
			cp->Y = 300;
			cp->Height = iHeight;
			cp->Width = iWidth;

			// Specify the form as the parent.
			cp->Parent = parentForm->Handle;

			// Create as a child of the specified parent and make OpenGL compliant (no clipping)
			cp->Style = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN;

			// Create the actual window
			this->CreateHandle(cp);

			m_hDC = GetDC((HWND)this->Handle.ToPointer());

			if(m_hDC)
			{
				MySetPixelFormat(m_hDC);
				ReSizeGLScene(iWidth, iHeight);
				InitGL();		
			
			}			
			
		}


		System::Void GiveGeneration(){
			if(g_iterations < MAX_ITERATIONS)
			g_iterations++;
			//change the taper of the stem
			stemBottomRadius2[g_iterations] = stemTopRadius2[g_iterations];
			stemTopRadius2[g_iterations] -= stemTopRadius2[g_iterations]/100;
			g_plant = growPlant(AXIOM, g_iterations,ga_production_rules);

			Render();
		}
		System::Void TakeGeneration(){
				if(g_iterations > 0)
				g_iterations--;
				g_plant = growPlant(AXIOM, g_iterations, ga_production_rules);
				Render();
		}
		System::Void RotateLeft(){
				s_theta += 0.015;
		}
		System::Void RotateRight(){
				s_theta -= 0.015;
		}
		System::Void RotateUp(){
				s_phi += 0.05;
		}
		System::Void RotateDown(){
				s_phi -= 0.05;
		}
		System::Void RotateForward(){
				g_distance *= 0.9;
		}
		System::Void RotateBack(){
				g_distance *= 1.1;
		}

		System::Void ChangePlant(int leafTypeInput,float leafLengthInput, float leafRadiusInput
			,float petioleLengthInput, float petioleRadiusInput,string petiolestring
			,float stemLengthInput, float stemRadiusInput, string stemString
			,float veinLengthInput, float veinRadiusInput, string veinString
			,double nitrogenInput, double hydrogenInput, double potassiumInput, double phosphorousInput
			,double calciumInput, double magnesiumInput, double sulfurInput
			,double chlorineInput, double boronInput, double ironInput, double manganeseInput
			,double zincInput, double copperInput, double sodiumInput, double molybdenumInput
			,bool wheat){
				wheat = wheat;
				leafType = leafTypeInput;	
				stemLength2[yearno] = stemLengthInput;
				stemBottomRadius2[yearno] = stemRadiusInput;
				ChangeStem(stemString);
				petioleLength=petioleLengthInput;
				petioleBottomRadius = petioleRadiusInput;
				ChangePetiole(petiolestring);
				veinLength=veinLengthInput;
				veinBottomRadius = veinRadiusInput;
				ChangeVein(veinString);
				leafLength = leafLengthInput;
				leafRadius = leafRadiusInput;					
				buildStemList(petioleLength, petioleBottomRadius, g_petiole_list);
				buildStemList(veinLength, veinBottomRadius, g_vein_list);
				
					
					for (int b= 0;b<10;b++){
						buildStemList(stemLength2[b], stemBottomRadius2[b], g_stem_list2[b]);
						}
					//growing(growon,season);
					//buildStemList(stemLength2[yearno], stemBottomRadius2[yearno], g_stem_list2[yearno]);
					#pragma region build leaf shapes again
					for (int i= 0;i<50;i++){	
						g_leaf2_list[i].begin();
							glPushMatrix();
								radiusvariation(i, leafLength, leafRadius, thickness);
							glPopMatrix();
						g_leaf2_list[i].end();
					}
					g_plant = growPlant(AXIOM, g_iterations, ga_production_rules);
					g_petiole_plant = growPlant(PETIOLEAXIOM, g_petiole_iterations, ga_production_petiole_rules);
					g_vein_plant = growPlant(VEINAXIOM, g_vein_iterations, ga_production_vein_rules);
					#pragma endregion
				
				
		}
		System::Void ChangeVein(string veinInput){
			ga_production_vein_rules['V']= veinInput;		
			g_vein_plant = growPlant(VEINAXIOM, g_vein_iterations, ga_production_vein_rules);
		}
		System::Void ChangePetiole(string petioleInput){
			 ga_production_petiole_rules['P']= petioleInput;
			 g_petiole_plant = growPlant(PETIOLEAXIOM, g_petiole_iterations, ga_production_petiole_rules);
		}
		System::Void ChangeStem(string stemInput){
			ga_production_rules['P'] =  stemInput;		
			g_plant = growPlant(AXIOM, g_iterations, ga_production_rules);
		}
		System::Void wind(bool windonInput,float windStrengthInput, float winddirectionxInput, float winddirectionyInput,float winddirectionzInput){
			windon = windonInput;	
			windstrength = windStrengthInput;
			wdirection.x = winddirectionxInput;
			wdirection.y = winddirectionyInput;
			wdirection.z = winddirectionzInput;
			Render();
		}
		System::Void seasoner(bool seasonon, float yeartime){
			season = seasonon;	
			yearCounter = yeartime;			
			Render();
		}
		System::Void growing(bool growon, bool seasonon){
			growon = growon;	
			season = seasonon;
			yearCounter = 0;
			Render();
		}

		System::Void Render(System::Void)
		{				
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glLoadIdentity();
			gluLookAt(cos(s_theta) * g_distance, sin(s_theta) * g_distance, (1 + sin(s_phi) * 0.5) * g_distance,
					  0.0, 0.0, 0.0,
					  0.0, 0.0, 1.0);
			GLfloat cameramatrix[16]; 
			glGetFloatv (GL_MODELVIEW_MATRIX, cameramatrix);

			//this is for random positions for leaves/veins
			srand(69216392);
			if(wheat){
			#pragma region wheat
				//this is to setup for leaf colour
				for(int g=0;g<10;g++){for (int d=0;d<limit;d++){rcolor[g][d]=0.0;gcolor[g][d]=1.0;bcolor[g][d]=0.0;}}
				for (int d=0;d<colorlimit;d++){rscolor[d]=0.0;gscolor[d]=1.0;bscolor[d]=0.0;}
				//for(int j =0;j<9;j++){for (int i=0;i<20;i++){pastcolorvertex[j][i]=-1;}}
				nearestneighbor[0][0]=-1;nearestneighbor[0][1]=-1;
				nearestneighbor[1][0]=-1;nearestneighbor[1][1]=0;
				nearestneighbor[2][0]=-1;nearestneighbor[2][1]=1;
				nearestneighbor[3][0]=1;nearestneighbor[3][1]=-1;
				nearestneighbor[4][0]=1;nearestneighbor[4][1]=0;
				nearestneighbor[5][0]=1;nearestneighbor[5][1]=1;
				nearestneighbor[6][0]=0;nearestneighbor[6][1]=-1;
				nearestneighbor[7][0]=0;nearestneighbor[7][1]=1;
				
				for (int i=0;i<20;i++){
					rndarray[i]=rand()%8;
					rndpoint[i]=rand()%99;}
				for (int j=0;j<8;j++){
					for (int i=0;i<20;i++){ checker[j][i]=false;}}

				#pragma region nutrient effect
				//c[i] is the current nutrient concentration available
				//ctox[i]is the current nutrient toxicity level
				//cmin[i] is the current nutrient minimum level required
				//copt[i] is the current nutrient optimal level required 
				//p[i] is productivity due to nutrient
				for(int i=0;i<16;i++)
				{
					if(c[i]<cmin[i]){
						constrained[i] = (cmin[i] - c[i]) / (ctox[i] - cmin[i]);
					}
					else if(ctox[i]<c[i]){
						float a = (cmin[i] - 0) /  (ctox[i] - cmin[i]);
						float b =  (c[i] - ctox[i]) / (ctox[i] - cmin[i]);
						constrained[i] = min(a, b);
					}
					else {
						constrained[i]=-1;
					}
				}
				float biggest = -100.0;
				mostconstrainedindex=-1;
				for(int i=0; i<16; i++) {
					if(constrained[i]>biggest){
						biggest=constrained[i];
						mostconstrainedindex=i;
					}
				}
				
				if(mostconstrainedindex<0){mostconstrainedindex=99;}
					
				if (mostconstrainedindex!=99){
					if (c[mostconstrainedindex] > ctox[mostconstrainedindex]) {nutrienteffect=p[mostconstrainedindex]*ctox[mostconstrainedindex];}//plant will slowly die 
					else if (c[mostconstrainedindex]<cmin[mostconstrainedindex]) {nutrienteffect=p[mostconstrainedindex];}//plant will slowly die by a certain rate
					else if (c[mostconstrainedindex] >= copt[mostconstrainedindex]) {nutrienteffect=p[mostconstrainedindex]*(copt[mostconstrainedindex]-cmin[mostconstrainedindex]);}//plant will grow
					else {nutrienteffect = 0;}//growth rate is assumed maximum for the plant//p[mostconstrainedindex]*(c[mostconstrainedindex]-cmin[mostconstrainedindex]);}//plant will grow 
				}	
				#pragma endregion
			
				#pragma region plant growth with wind nutrient effects

				if (growon && yearCounter < ts ){//seed development

				}
				else if (growon && yearCounter > ts && yearCounter<tt){//tillering stage
					//the max sizes for the plant are influenced by the nutrient limitations permanently
					petiolemax -= 0.001*nutrienteffect;
					petiolebottomradiusmax -= 0.0001*nutrienteffect;
					petioletopradiusmax -= 0.0001*nutrienteffect;
					veinmax -= 0.0001*nutrienteffect;
					veinbottomradiusmax -= 0.00001*nutrienteffect;
					veintopradiusmax -= 0.00001*nutrienteffect;
					leafmax -= nutrienteffect;//limit the leaf length to the constrained nutrient
					leafradiusmax = stembottomradiusmax;//limit the leaf radius to the size of the constrained stem
					if (petioleLength>petiolemax){petioleLength = petioleLength;}
					else{	
						if (windon && windstrength > 4){petioleLength *= ((1+(petiolelengthgrow*sp))-nutrienteffect);} 
						else {petioleLength *= (1+petiolelengthgrow)-nutrienteffect;}}
					if (petioleBottomRadius>petiolebottomradiusmax){petioleBottomRadius = petioleBottomRadius;}
					else{	
						if (windon && windstrength > 4){petioleBottomRadius *= (1+(petioleradiusgrow*(1+spr)))-nutrienteffect;} 
						else {petioleBottomRadius *= (1+petioleradiusgrow)-nutrienteffect;}}
					if (petioleTopRadius>petioletopradiusmax){petioleTopRadius = petioleTopRadius;}
					else{	
						if (windon && windstrength > 4){petioleTopRadius *= (1+(petioleradiusgrow*(1+spr)))-nutrienteffect;} 
						else {petioleTopRadius *= (1+petioleradiusgrow)-nutrienteffect;}}
					if (veinLength>veinmax){veinLength = veinLength;}
					else{
						if (windon && windstrength > 4){veinLength *= ((1+(veinlengthgrow*sv))-nutrienteffect);} 
						else {veinLength *= veinlengthgrow-nutrienteffect;}}
					if (veinBottomRadius>veinbottomradiusmax){veinBottomRadius = veinBottomRadius;}
					else{	
						if (windon && windstrength > 4){veinBottomRadius *= (1+(veinradiusgrow*(1+svr)))-nutrienteffect;} 
						else {veinBottomRadius *= (1+veinradiusgrow)-nutrienteffect;}}
					if (veinTopRadius>veintopradiusmax){veinTopRadius = veinTopRadius;}
					else{if (windon && windstrength > 4){veinTopRadius *= (1+(veinradiusgrow*(1+svr)))-nutrienteffect;} 
						 else {veinTopRadius *= (1+veinradiusgrow)-nutrienteffect;}}
					if (leafLength>leafmax){leafLength = leafLength;}
					else{	
						if (windon && windstrength > 4){leafLength *= (1+(leaflengthgrow*sl));}//-nutrienteffect;} 
						else {leafLength *= (1+leaflengthgrow)-(nutrienteffect/1000);}} //*nutrienteffect
					if (leafRadius>leafradiusmax){leafRadius = leafRadius;}
					else{if (windon && windstrength > 4){leafRadius *= (1+(leafradiusgrow*slr))*nutrienteffect;} 
					else {leafRadius *= (1+leafradiusgrow)-(nutrienteffect/10000);}}
					//if (thickness<leafthicknessmax){thickness = thickness;}
					//else{	thickness *= (1+leafthicknessgrow);}
				}
				else if (growon && yearCounter > tt && yearCounter< te){ //stem elongation stage
					stemmax -= nutrienteffect/(te-tt);
					stembottomradiusmax -= 0.1*(nutrienteffect/(te-tt));
					stemtopradiusmax -= 0.1*(nutrienteffect/(te-tt));
					if (stemLength2[yearno]>stemmax){stemLength2[yearno]=stemLength2[yearno];}
					else{
						if (windon && windstrength > 4){stemLength2[yearno] *= (1+(stemlengthgrow*s*nutrienteffect));}
						else {stemLength2[yearno] *= (1+stemlengthgrow);}}
					if (stemBottomRadius2[yearno]>stembottomradiusmax){stemBottomRadius2[yearno] = stemBottomRadius2[yearno];}	
					else{	
						if (windon && windstrength > 4){stemBottomRadius2[yearno] *= (1+(stemradiusgrow*(1+sr)*nutrienteffect));}
						else {stemBottomRadius2[yearno] *= (1+stemradiusgrow);}}
					if (stemTopRadius2[yearno]>stemtopradiusmax){	stemTopRadius2[yearno] = stemTopRadius2[yearno];}
					else{	
						if (windon && windstrength > 4){stemTopRadius2[yearno] *= (1+(stemradiusgrow*(1+sr)*nutrienteffect));}
						else {stemTopRadius2[yearno] *= (1+stemradiusgrow*nutrienteffect);}}
					//cout <<"this is the length "<< stemLength[yearno];
					//cout<<"this is the current year "<<yearno;
				}
				else if (growon && yearCounter > te && yearCounter< tb){ //booting stage

				}
				else if (growon && yearCounter > tb && yearCounter< th){ //heading stage
					//fruita -= 0.001*nutrienteffect; fruitb -= 0.001*nutrienteffect; fruitc -= 0.001*nutrienteffect;
					flowera -= 0.0001*nutrienteffect/(th-tb); flowerb -= 0.0001*nutrienteffect/(th-tb); flowerc -= 0.0001*nutrienteffect/(th-tb);
				}
				else if (growon && yearCounter > th && yearCounter< tf){ //flowering stage

				}
				else if (growon && yearCounter > tf && yearCounter< tm){//seed kernal stage

				}
				else {// ripening stage
				}
				if (windon){windoncounter +=timePerDayPerFrame;}
				else {windoncounter-=timePerDayPerFrame;}
				if (windoncounter>targetYear){g_rotate+=0.01;}
			#pragma endregion

				#pragma region build plant structure
					buildStemList(stemLength2[yearno], stemBottomRadius2[yearno], g_stem_list2[yearno]);
					buildStemList(petioleLength, petioleBottomRadius, g_petiole_list);
					buildStemList(veinLength, veinBottomRadius, g_vein_list);
					//buildLeafList(leafmax, leafradiusmax, g_leaf_list);
					//buildLeafList(leafLength, leafRadius, g_leaf_list);
				#pragma endregion

				drawPlant(g_plant,yearno,cameramatrix);
			#pragma endregion
			}
			else{
	    
				if(windon){
					windsway += swayIncrement*(windstrength/10);
					if(windsway > 30 || windsway < 0) { swayIncrement = -swayIncrement;}
					windpetiolebend += bendpetioleIncrement*windstrength*2;
					if(windpetiolebend > 5 || windpetiolebend < 0) { bendpetioleIncrement = -bendpetioleIncrement;}
					windvibrate += vibrateIncrement*windstrength*30;
					if(windvibrate >10 || windvibrate < 0) {vibrateIncrement = -vibrateIncrement;}
					windbend += bendIncrement*windstrength*20;
					if(windbend > 60 || windbend < 0) { bendIncrement = -bendIncrement;}
					windtwist += twistIncrement*windstrength*20;
					if(windtwist > 30 || windtwist < 0) { twistIncrement = -twistIncrement;}	
					}
				if (season){
					yearCounter += timePerDayPerFrame;
					if (yearCounter > targetYear){
						if(yearno>10){yearno;} else {yearno++;}
						yearCounter = 0;
						if(g_iterations < MAX_ITERATIONS)g_iterations++;
						//change the taper of the stem
						stemLength2[yearno] = 1.0;stemBottomRadius2[yearno] = 0.1;stemTopRadius2[yearno] = 0.05;
						//stemLength = 0.1;
						leafLength=0.01/yearno;leafRadius=0.005/yearno;thickness = -0.003;
						//leafLength = 0.001;				
						//leafRadius = 0.0001;
						petioleBottomRadius = petioleTopRadius;
						petioleLength = 0.001;
						//stemBottomRadius = stemTopRadius;
						//stemTopRadius -= stemTopRadius/100;
						if (wheat){
							for(int g=0;g<10;g++){for (int d=0;d<limit;d++){rcolor[g][d]=0.0;gcolor[g][d]=1.0;bcolor[g][d]=0.0;}}
							for (int d=0;d<colorlimit;d++){rscolor[d]=0.0;gscolor[d]=1.0;bscolor[d]=0.0;}
							//for(int j =0;j<9;j++){for (int i=0;i<20;i++){pastcolorvertex[j][i]=-1;}}
							for (int i=0;i<20;i++){	rndarray[i]=rand()%8; rndpoint[i]=rand()%99;}
							for (int j=0;j<8;j++){for (int i=0;i<20;i++){ checker[j][i]=false;}}
							now=0;		
							ripen=0;
							daycounter = 0;
							//mottled = true;
							leafcounter = 0;
							}
						g_plant = growPlant(AXIOM, g_iterations,ga_production_rules);
						}	
					}
				
			
		if (growon && (yearCounter>targetSpring && yearCounter<targetFall)){
			if (stemLength2[yearno]>stemmax){stemLength2[yearno]=stemLength2[yearno];}
			else{
				if (windon && windstrength > 4){stemLength2[yearno] *= (1+(stemlengthgrow*s));}
				else {stemLength2[yearno] *= (1+stemlengthgrow);}}
			if (stemBottomRadius2[yearno]>stembottomradiusmax){stemBottomRadius2[yearno] = stemBottomRadius2[yearno];}	
			else{	
				if (windon && windstrength > 4){stemBottomRadius2[yearno] *= (1+(stemradiusgrow*(1+sr)));}
				else {stemBottomRadius2[yearno] *= (1+stemradiusgrow);}}
			if (stemTopRadius2[yearno]>stemtopradiusmax){	stemTopRadius2[yearno] = stemTopRadius2[yearno];}
			else{	
				if (windon && windstrength > 4){stemTopRadius2[yearno] *= (1+(stemradiusgrow*(1+sr)));}
				else {stemTopRadius2[yearno] *= (1+stemradiusgrow);}}
			if (petioleLength>petiolemax){petioleLength = petioleLength;}
			else{	
				if (windon && windstrength > 4){petioleLength *= ((1+(petiolelengthgrow*sp)));}
				else {petioleLength *= (1+petiolelengthgrow);}}
			if (petioleBottomRadius>petiolebottomradiusmax){petioleBottomRadius = petioleBottomRadius;}
			else{	
				if (windon && windstrength > 4){petioleBottomRadius *= (1+(petioleradiusgrow*(1+spr)));}
				else {petioleBottomRadius *= (1+petioleradiusgrow);}}
			if (petioleTopRadius>petioletopradiusmax){petioleTopRadius = petioleTopRadius;}
			else{	
				if (windon && windstrength > 4){petioleTopRadius *= (1+(petioleradiusgrow*(1+spr)));}
				else {petioleTopRadius *= (1+petioleradiusgrow);}}
			if (veinLength>veinmax){veinLength = veinLength;}
			else{
				if (windon && windstrength > 4){veinLength *= ((1+(veinlengthgrow*sv)));}
				else {veinLength *= veinlengthgrow;}}
			if (veinBottomRadius>veinbottomradiusmax){veinBottomRadius = veinBottomRadius;}
			else{	
				if (windon && windstrength > 4){veinBottomRadius *= (1+(veinradiusgrow*(1+svr)));}
				else {veinBottomRadius *= (1+veinradiusgrow);}}
			if (veinTopRadius>veintopradiusmax){veinTopRadius = veinTopRadius;}
			else{if (windon && windstrength > 4){veinTopRadius *= (1+(veinradiusgrow*(1+svr)));}
				 else {veinTopRadius *= (1+veinradiusgrow);}}
			if (leafLength>leafmax){leafLength = leafLength;}
			else{	leafLength *= (1+leaflengthgrow);}
			if (leafRadius>leafradiusmax){leafRadius = leafRadius;}
			else{	leafRadius *= (1+leafradiusgrow);}
			if (thickness<leafthicknessmax){thickness = thickness;}
			else{	thickness *= (1+leafthicknessgrow);}
			if (windon){windoncounter +=timePerDayPerFrame;}
			else {windoncounter-=timePerDayPerFrame;}
			if (windoncounter>targetYear){g_rotate+=0.01;}
			}

			}
	    
			buildStemList(stemLength2[yearno], stemBottomRadius2[yearno], g_stem_list2[yearno]);
			buildStemList(petioleLength, petioleBottomRadius, g_petiole_list);
			buildStemList(veinLength, veinBottomRadius, g_vein_list);
		
			drawPlant(g_plant,yearno,cameramatrix);
			
			glFlush();
			//sleep(0.01);
				
			}
		
		System::Void SwapOpenGLBuffers(System::Void)
		{
			SwapBuffers(m_hDC) ;
		}

	private:
		HDC m_hDC;
		HGLRC m_hglrc;	
		bool windon;

	protected:
		~COpenGL(System::Void)
		{
			this->DestroyHandle();
		}

		GLint MySetPixelFormat(HDC hdc)
		{
			static	PIXELFORMATDESCRIPTOR pfd=				// pfd Tells Windows How We Want Things To Be
				{
					sizeof(PIXELFORMATDESCRIPTOR),				// Size Of This Pixel Format Descriptor
					1,											// Version Number
					PFD_DRAW_TO_WINDOW |						// Format Must Support Window
					PFD_SUPPORT_OPENGL |						// Format Must Support OpenGL
					PFD_DOUBLEBUFFER,							// Must Support Double Buffering
					PFD_TYPE_RGBA,								// Request An RGBA Format
					16,										// Select Our Color Depth
					0, 0, 0, 0, 0, 0,							// Color Bits Ignored
					0,											// No Alpha Buffer
					0,											// Shift Bit Ignored
					0,											// No Accumulation Buffer
					0, 0, 0, 0,									// Accumulation Bits Ignored
					16,											// 16Bit Z-Buffer (Depth Buffer)  
					0,											// No Stencil Buffer
					0,											// No Auxiliary Buffer
					PFD_MAIN_PLANE,								// Main Drawing Layer
					0,											// Reserved
					0, 0, 0										// Layer Masks Ignored
				};
			
			GLint  iPixelFormat; 
		 
			// get the device context's best, available pixel format match 
			if((iPixelFormat = ChoosePixelFormat(hdc, &pfd)) == 0)
			{
				MessageBox::Show("ChoosePixelFormat Failed");
				return 0;
			}
			 
			// make that match the device context's current pixel format 
			if(SetPixelFormat(hdc, iPixelFormat, &pfd) == FALSE)
			{
				MessageBox::Show("SetPixelFormat Failed");
				return 0;
			}

			if((m_hglrc = wglCreateContext(m_hDC)) == NULL)
			{
				MessageBox::Show("wglCreateContext Failed");
				return 0;
			}

			if((wglMakeCurrent(m_hDC, m_hglrc)) == NULL)
			{
				MessageBox::Show("wglMakeCurrent Failed");
				return 0;
			}
			return 1;
		}

		bool InitGL(GLvoid)										// All setup for opengl goes here
		{

			glShadeModel(GL_SMOOTH);							// Enable smooth shading
			glClearColor(1.0f, 1.0f, 1.0f, 0.5f);				// Black background
			glClearDepth(1.0f);									// Depth buffer setup
			glEnable(GL_DEPTH_TEST);							// Enables depth testing
			glDepthFunc(GL_LEQUAL);								// The type of depth testing to do
			glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// Really nice perspective calculations
		

			GLfloat light_position[] = { 50.0, 100.0, 100.0, 1.0 };
			GLfloat lm_ambient[] = { 0.25, 0.25, 0.25, 1.0 };
			glEnable(GL_CULL_FACE);
			glFrontFace(GL_CCW);
			glCullFace(GL_BACK);
			
			glEnable(GL_LIGHTING);
			glEnable(GL_LIGHT0);

			glLightfv(GL_LIGHT0, GL_POSITION, light_position);
			glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lm_ambient);			
			for (int b= 0;b<10;b++){
				buildStemList(stemLength2[b], stemBottomRadius2[b], g_stem_list2[b]);
			}
			buildStemList(petioleLength, petioleBottomRadius, g_petiole_list);
		buildStemList(veinLength, veinBottomRadius, g_vein_list);	
		#pragma region build leaf shapes
			for (int i= 0;i<45;i++){	
				g_leaf2_list[i].begin();
					glPushMatrix();
						radiusvariation(i, leafLength, leafRadius, thickness);
					glPopMatrix();
				g_leaf2_list[i].end();
			}
		#pragma endregion
		calculateProductionRules();		
		g_plant = growPlant(AXIOM, g_iterations, ga_production_rules);
		g_petiole_plant = growPlant(PETIOLEAXIOM, g_petiole_iterations, ga_production_petiole_rules);
		g_vein_plant = growPlant(VEINAXIOM, g_vein_iterations, ga_production_vein_rules);
			return TRUE;										// Initialisation went ok
		}

		GLvoid ReSizeGLScene(GLsizei width, GLsizei height)		// Resize and initialise the gl window
		{
			if (height==0)										// Prevent A Divide By Zero By
			{
				height=1;										// Making Height Equal One
			}

			glViewport(0,0,width,height);						// Reset The Current Viewport

			glMatrixMode(GL_PROJECTION);						// Select The Projection Matrix
			glLoadIdentity();									// Reset The Projection Matrix

			// Calculate The Aspect Ratio Of The Window
			//gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);
			gluPerspective(60, (GLdouble)width / (GLdouble)height, 1.0, 1000.0);
			glMatrixMode(GL_MODELVIEW);							// Select The Modelview Matrix
			glLoadIdentity();									// Reset The Modelview Matrix
		}
	};
}