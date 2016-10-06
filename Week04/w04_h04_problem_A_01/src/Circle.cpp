//
//  Circle.cpp
//  w04_h04_problem_A_01
//
//  Created by Vivian Lee on 9/30/16.
//
//

#include "Circle.hpp"
//--------------------------------------------------------------
void Circle::setup(){
    
}

//--------------------------------------------------------------
void Circle::update(){
    
}

//--------------------------------------------------------------
void Circle::draw(float _size, float _b){
    
    size = _size;
    brightness = _b;
    ofSetColor(brightness);
    ofDrawCircle(300,300,size);
}
