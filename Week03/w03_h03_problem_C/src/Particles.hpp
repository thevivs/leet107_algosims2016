//
//  Particles.hpp
//  w03_h03_problem_C
//
//  Created by Vivian Lee on 9/22/16.
//
//

#pragma once
#include "ofMain.h"

class MyParticles{
    
public:
    
//    MyParticles();
    
    void draw();
    void setup();
    void update();
    
    void bounding();
    
    ofPoint pos;
    ofPoint vel;
    
    float w;
    float h;
    
    float radius;
    
};


//draw a particle system
//bound the particles in a circle
//make the particles rotate somehow within the circle