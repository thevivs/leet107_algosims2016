//
//  Particles.cpp
//  w09_h09_Problem_Num1
//
//  Created by Vivian Lee on 11/2/16.
//
//

#include "Particles.hpp"

void Particles::setup(ofVec2f rVel){
    vel = rVel;
    age = 0;
    lifespan = ofRandom(50, 150);
    
    pos = ofGetWindowSize();
}

void Particles::update(){
    
    float noise = ofNoise(pos.x * 0.005, pos.y * 0.005, ofGetElapsedTimef()*0.2) * 25.0;
    
    float agePct = 2.0 - ((float)age / (float)lifespan);
    
    pos += ofVec2f(cos(noise), sin(noise));
    pos += vel;
    vel *= 0.97;
    
    age++;
}

void Particles::draw(){
    
    float agePct = 1.0 - ((float)age / (float)lifespan);
    ofSetColor(255, 10);
    
    ofSetCircleResolution(100);
    radius = 1.0 * agePct;
    ofDrawCircle(pos, radius);
    
}

void Particles::bounding(){
    
    if(pos.x < 0 + radius){
        pos.x = ofGetWidth();
    }
    
    if(pos.x > ofGetWidth()+radius){
        pos.x = 0;
    }
    
    if(pos.y < 0 +radius ){
        pos.y = ofGetHeight();
    }
    
    if(pos.y > ofGetHeight() + radius){
        pos.y = 0;
    }
    
}
















