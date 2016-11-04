//
//  Particle.hpp
//  classNoise
//
//  Created by Vivian Lee on 10/27/16.
//
//

#pragma once
#include "ofMain.h"

class Particle{
    
    
public:
    
//    Particle();
    void setup( ofVec2f rvel);
    void draw();
    void update();
    
    ofVec2f pos;
    ofVec2f vel;
    
    int age, lifespan;
    
    
};