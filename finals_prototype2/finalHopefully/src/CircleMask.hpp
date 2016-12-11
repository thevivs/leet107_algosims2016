#pragma once
#include "ofMain.h"

class CircleMask{
    
public:
    
    CircleMask();
    void draw();
    void setup();
    void update();
    
    
    float radius;
    
    ofSoundPlayer sound;
    
    float * fftSmooth;
    int bands;
    
    ofFbo maskFbo;
    
};