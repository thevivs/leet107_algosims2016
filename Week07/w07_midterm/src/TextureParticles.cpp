//
//  TextureParticles.cpp
//  w07_midterm
//
//  Created by Vivian Lee on 10/14/16.
//
//

#include "TextureParticles.hpp"

TextureParticles::TextureParticles(){
    
    radius = 0.75;
    
}

void TextureParticles::setup(){
    
    pos = ofPoint(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
    vel = ofPoint(ofRandom(-0.50, 0.50),ofRandom(-0.50, 0.50));
    
}

void TextureParticles::draw(){
    
    ofSetLineWidth(0);
    ofDrawCircle(pos.x, pos.y, radius);
    
}

void TextureParticles::update(){
    
    pos = pos + vel;
    
}

void TextureParticles::bounding(){
    
    if(pos.x < 0 || pos.x > ofGetWidth()){
        vel = -vel;
    }
    
    if(pos.y < 0 || pos.y > ofGetWidth()){
        vel = -vel;
    }
    
}