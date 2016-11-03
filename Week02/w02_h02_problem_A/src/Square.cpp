//
//  Square.cpp
//  w02_h02_problem_A
//
//  Created by Vivian Lee on 9/12/16.
//
//

#include "Square.hpp"

void Square::setup(){
    
    position.x = ofGetWidth()/2;
    position.y = ofGetHeight()/2;
    
    velocity.x = ofRandom(0, 1);
    velocity.y = ofRandom(0,1);
    
    
}


void Square::draw(){
    
    ofSetColor(0, 0, 0, 10);
    ofDrawRectangle(position.x, position.y, 50, 50);
    
}


void Square::update(){
    
    position.x += velocity.x *5;
    position.y += velocity.y *5;
    
    if(position.x < 0 || position.x > ofGetWidth()){
        velocity.x = velocity.x * -1;
    
    }
    
    
    if(position.y < 0 || position.y > ofGetHeight()){
        velocity.y = velocity.y * -1;
    }
    
    
    
    
}