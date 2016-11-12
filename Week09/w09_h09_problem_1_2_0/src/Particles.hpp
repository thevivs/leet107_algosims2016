//
//  Particles.hpp
//  w09_h09_problem_1_2_0
//
//  Created by Vivian Lee on 11/2/16.
//
//

#pragma once
#include "ofMain.h"

//for the particles i want to get a better understanding of how the attraction and repulsion forces are working from the class example

class Particles{
    
public:
    Particles();
    void setInit(ofPoint _pos, ofPoint _vel = ofPoint(0,0));
    void addForce(ofVec3f force);
    void update();
    void draw();
    
    float mass;
    
    ofPoint getPosition();

    ofVec3f pos;
    ofVec3f vel;
    ofVec3f acc;
    

};



