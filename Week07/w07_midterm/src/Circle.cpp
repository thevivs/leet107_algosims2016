//
//  Circle.cpp
//  w07_midterm
//
//  Created by Vivian Lee on 10/14/16.
//
//

#include "Circle.hpp"

void Circle::draw(){
    
    ofSetLineWidth(8);
    ofSetColor(58, 38, 41, 180);
    ofSetCircleResolution(200);
    ofDrawCircle(ofGetWidth()/3, ofGetHeight()/2, 200);
    
    
}