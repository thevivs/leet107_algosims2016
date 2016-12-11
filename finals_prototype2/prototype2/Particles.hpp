
#pragma once
#include "ofMain.h"

class Particles {
    
public:
    
    void setup (ofVec2f rVel);
    void update(float _noiseNum, float _noiseX, float _noiseY, float _cosNoise, float _sinNoise);
    void draw();
    void bounding();
    
    
    ofVec2f pos;
    ofVec2f vel;
    
    float radius;
    
    float noiseNum, noiseX, noiseY, cosNoise, sinNoise;
    
};