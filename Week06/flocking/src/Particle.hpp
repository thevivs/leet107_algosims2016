#pragma once

#include "ofMain.h"


class Particle{


public:
    
    
    Particle();
    
    void draw();
    void init();
    
    void bounding();
    
    void update(vector<Particle> & particles);
    
    ofPoint cohesion(vector<Particle> & particles);
    ofPoint separation(vector<Particle> & particles);
    ofPoint alignment(vector<Particle> & particles);
    
    
    ofPoint pos;
    ofPoint vel;
    int radius;
    
    
};