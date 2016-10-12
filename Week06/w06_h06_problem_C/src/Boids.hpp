//
//  Boids.hpp
//  w06_h06_problem_C
//
//  Created by Vivian Lee on 10/11/16.
//
//
#pragma once
#include "ofMain.h"

class Boids{
    
public:
    
    Boids();
    
    void bounding();
    void draw();
    void init();
        
    void update(vector<Boids> &boidParticles);
    
    ofPoint cohesion(vector<Boids> &boidParticles);
    ofPoint separation(vector<Boids> &boidParticles);
    ofPoint alignment(vector<Boids> &boidParticles);
    
    ofPoint pos;
    ofPoint vel;
    int radius;
    
    
};