//
//  VivianParticles.cpp
//  w03_h03_problem_A
//
//  Created by Vivian Lee on 9/21/16.
//
//

#include "VivianParticles.hpp"


void VivianParticles::setup(){
    
    
    pos.x = ofRandom(ofGetWidth());
    pos.y = ofRandom(-1, 10);
    
    radius = ofRandom(0, 10);
    
    vel.x = ofRandom(-5, 5);
    vel.y = ofRandom(0, 4);
    
    color = ofColor(ofRandom(255),ofRandom(255),ofRandom(255), ofRandom(255));
    
    someNumber = ofRandom(1, 400);
    
}

void VivianParticles::explode(){
    
    pos = pos + vel;
    
    
}

void VivianParticles::draw(){
    
    ofSetColor(color);
    ofDrawCircle(pos.x, pos.y, radius);
    
}

void VivianParticles::restart(){
    
    pos.x = ofRandom(ofGetWidth());
    pos.y = 20;
    
}
