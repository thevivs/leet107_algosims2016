//
//  VivianParticles.hpp
//  w03_h03_problem_A
//
//  Created by Vivian Lee on 9/21/16.
//
//

#pragma once
#include "ofMain.h"

class VivianParticles{
 
public:
    
    void draw();
    void setup();
    void explode();
    
    void restart();
    
    ofPoint pos;
    ofPoint vel;
    ofColor color;
    
    float radius;
    int someNumber;
    
    
    
};
