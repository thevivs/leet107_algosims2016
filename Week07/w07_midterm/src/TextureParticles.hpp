//
//  TextureParticles.hpp
//  w07_midterm
//
//  Created by Vivian Lee on 10/14/16.
//
//

#pragma once
#include "ofMain.h"

class TextureParticles{
    
public:
    
    TextureParticles();
    
    void setup();
    void update();
    void draw();
    
    void bounding();
    
    ofPoint pos;
    ofPoint vel;
    
    float radius;
    
};