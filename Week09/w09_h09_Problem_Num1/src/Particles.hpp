//
//  Particles.hpp
//  w09_h09_Problem_Num1
//
//  Created by Vivian Lee on 11/2/16.
//
//

#pragma once
#include "ofMain.h"

class Particles{
public:
    void setup(ofVec2f rVel);
    void update();
    void draw();
    
    void bounding();
    
    ofVec2f pos;
    ofVec2f vel;
    int age, lifespan;
    
    float radius;
    
};