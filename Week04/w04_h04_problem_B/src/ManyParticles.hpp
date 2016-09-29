//
//  ManyParticles.hpp
//  w04_h04_problem_B
//
//  Created by Vivian Lee on 9/28/16.
//
//

#pragma once
#include "ofMain.h"


class ManyParticles{
    
public:
    
    ManyParticles();
    
    void draw();
    void setup();
    void update();
    
    void initialPosition(ofPoint _pos, ofPoint _vel);
    void addRepulsion(ofPoint _pos, float _radius, float _strength);
    void addAttraction(ofPoint _pos, float _radius, float _strength);
    
private:
    
    ofPoint pos, vel, force;
    float dampening;
    
    
};