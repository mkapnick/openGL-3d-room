//
//  MainHallway.cpp
//  FinalProject
//
//  Created by Michael Kapnick on 4/16/14.
//  Copyright (c) 2014 Michael Kapnick. All rights reserved.
//

#include<stdio.h>
#include "Cube.h"


Cube::Cube(GLfloat xPosition, GLfloat yPosition, GLfloat zPosition)
{
    offsetX     = xPosition;
    offsetY     = yPosition;
    offsetZ     = zPosition;
    axis        = 1;
    angle[0] = 0;
    angle[1] = 0;
    angle[2] = 0;
}
Cube::Cube()
{
}
void Cube::handleTick()
{
    GLfloat   color[] = {1.0, 1.0, 1.0};
    GLint radius = 4;

    glTranslated(offsetX, offsetY, offsetZ);
    
    // Create a cube
    glMaterialfv(GL_BACK, GL_AMBIENT,  color);
    glMaterialfv(GL_BACK, GL_DIFFUSE,  color);
    glMaterialfv(GL_BACK, GL_SPECULAR, color);
    glMaterialf(GL_BACK, GL_SHININESS, 80);
    
    glutSolidCube(10.0);
    glTranslated(0, -radius, 0);
    
    glutWireTeapot(2);
    glutWireTeapot(1);
    
    glTranslated(-offsetX, -offsetY + radius, -offsetZ); //translate back to the center
}

void Cube::mouseClicked(int button, int state, int x, int y)
{
    //nothing
}

void Cube::setOffsetX(GLfloat x)
{
    offsetX = x;
}

void Cube::setOffsetY(GLfloat y)
{
    offsetY = y;
}

void Cube::setOffsetZ(GLfloat z, bool isPositive)
{
    if(isPositive)
        offsetZ += z;
    else
        offsetZ -= z;

}

GLfloat Cube::getOffsetX()
{
    return offsetX;
}
GLfloat Cube::getOffsetY()
{
    return offsetY;
}
GLfloat Cube::getOffsetZ()
{
    return offsetZ;
}

GLfloat* Cube::getAngleArray()
{
    return angle;
}

void Cube::setAngleArray(GLfloat * ang)
{
    angle[0] = ang[0];
    angle[1] = ang[1];
    angle[2] = ang[2];
}

void Cube::keyPressed(unsigned char key, int x, int y)
{
    //nothing
}
