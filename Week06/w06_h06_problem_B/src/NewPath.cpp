//
//  NewPath.cpp
//  w06_h06_problem_B
//
//  Created by Vivian Lee on 10/11/16.
//
//

#include "NewPath.hpp"


NewPath::NewPath(){
    
    radius = 100;
    start = ofPoint(50, ofGetHeight()/3);
    end = ofPoint(ofGetWidth()-50, ofGetHeight()/6);
    
}

void NewPath::display(){
    
    
    ofSetColor(255);
    ofSetLineWidth(radius);
    ofDrawLine(start.x, start.y, end.x, end.y);
    
    
    ofSetLineWidth(1);
    ofSetColor(0);
    ofDrawLine(start.x, start.y, end.x, end.y);
    
}