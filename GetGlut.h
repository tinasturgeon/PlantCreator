//
//  GetGlut.h
//
//  A header file in import OpenGL GLU and GLUT on Windows,
//    Mac OSX, or Linux.  The intermediate file is helpful
//    because differant includesd are needed on differant
//    platforms.  Linux here means the Linux lab.
//

#ifndef __GET_GLUT_H__
#define __GET_GLUT_H__

#ifdef linux
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#elif __linux 
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#elif _WIN32
#include "glut.h"	// http://www.xmission.com/~nate/glut.html
#elif __APPLE__
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#endif

#endif
