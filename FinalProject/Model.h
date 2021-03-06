#ifndef FP_Model_h
#define FP_Model_h

#include "Sprite.h"
#include "Cube.h"
#include "BaseCube.h"
#include "Hallway.h"
#include <vector>
using namespace std;


/**
 * A Model is made up of a bunch of hallway objects that know
 * where and how to draw/move themselves
 *
 * @author  Michael Kapnick
 * @version 1.0
 */

class Model: public Sprite
{
public:
    Model(vector<Hallway*> cubes, BaseCube base, GLfloat* angles);
    Model();
    void handleTick();
    void keyPressed(unsigned char key, int x, int y);
    void mouseClicked(int button, int state, int x, int y);
    
private:
    int rotation;
    int direction;
    bool firstPersonMode;
    vector<Hallway*> hallways;
    BaseCube        base;
    GLfloat deg2rad(GLfloat degrees);
    GLfloat* originalZValues, *originalXValues, *originalYValues;
    void updateLocation();
    bool isClose(GLfloat x1, GLfloat y1, GLfloat z1, GLfloat x2, GLfloat y2, GLfloat z2);
    
    void setUpWorld();
    
};
#endif