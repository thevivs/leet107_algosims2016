//
//  VivianBalls.cpp
//  w02_h02_problem_D
//
//  Created by Vivian Lee on 9/14/16.
//
//

#include "VivianBalls.hpp"


VivianBalls::VivianBalls(){
    //float _red, float _green, float _blue
    
//    ofSetColor(ofRandom(0, 255), ofRandom(0,255), ofRandom(0, 255));
    
//    red.r = ofRandom(0, 255);
//    green.g = ofRandom(0, 255);
//    blue.b = ofRandom(0, 255);
//    
    
    position.x = ofGetWidth()/2;
    position.y = ofGetHeight()/2;
    
    velocity.x = ofRandom(0, 5);
    velocity.y = ofRandom(0, 3);
    
}

void VivianBalls::setup(){
    
    ofSetColor(ofRandom(0, 255), ofRandom(0,255), ofRandom(0, 255));
    
}


void VivianBalls::update(){
    
    position.x += velocity.x *5;
    position.y += velocity.y *5;
    
    if(position.x < 0 || position.x > ofGetWidth()){
        velocity.x = velocity.x * -1;
    }
    
    if(position.y < 0 || position.y > ofGetHeight()){
        velocity.y = velocity.y * -1;
    }
    
}


void VivianBalls::draw(){
    
//    ofSetColor(ofRandom(0, 255), ofRandom(0,255), ofRandom(0, 255));
 
    ofDrawCircle(position, 15);
    
    
}