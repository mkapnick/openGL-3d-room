#ifndef FP_JmuFrontHallway_h
#define FP_JmuFrontHallway_h

#include "Cube.h"
#include <vector>
#include "Hallway.h"
using namespace std;


/**
 * A Cube is a cube-shaped Sprite that rotates
 *
 * @author  Prof. David Bernstein, James Madison University
 * @version 1.0
 */
class JmuFrontHallway: public Hallway
{
public:
    
    JmuFrontHallway(vector<Cube> cubes);
    JmuFrontHallway();
    
    void handleTick();
    void update(GLfloat z, bool positive);
    
private:
    void setUpVisibleFaces();
};
#endif