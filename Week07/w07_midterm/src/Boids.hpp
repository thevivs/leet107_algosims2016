//
//  Boids.hpp
//  w07_midterm
//
//  Created by Vivian Lee on 10/14/16.
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
    
    void update(vector<Boids> &boidsParticles);
    
    ofPoint cohesion(vector<Boids> &boidsParticles);
    ofPoint separation(vector<Boids> &boidsParticles);
    ofPoint alignment(vector<Boids> &boidsParticles);
    
    ofPoint pos;
    ofPoint vel;
    int radius;


};