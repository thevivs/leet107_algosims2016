//
//  ParticleSystem.hpp
//  w03_h03_problem_B
//
//  Created by Vivian Lee on 9/21/16.
//
//

#pragma once
#include "ofMain.h"

class ParticleSystem{
    
public:

    ParticleSystem();
    
    void setup();
    void update();
    void draw();
    
    void bounding();
    
    ofPoint pos;
    ofPoint vel;
    
    float radius;
    
    
    
    
};