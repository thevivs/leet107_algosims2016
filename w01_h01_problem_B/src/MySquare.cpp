//
//  MySquare.cpp
//  w01_h01_problem_A
//
//  Created by Vivian Lee on 9/7/16.
//
//

#include "MySquare.hpp"



void MySquare::draw(){

    
    ofSetColor(255, 255, 255, 200);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofRect(ofGetWidth() * 0.5, ofGetHeight() * 0.5, 50, 50);


}

void MySquare::drawAgain(){
    
    
    ofSetColor(255, 255, 255, 200);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofRect(ofGetMouseX(), ofGetMouseY(), 50, 50);
    
    
}

void MySquare::drawRight(){
    ofSetColor(255, 255, 255, 200);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofRect(ofGetMouseX() * 0.5, ofGetMouseY() * 0.5, 50, 50);
}


//void MySquare::mousePressed(){
//    
//    
//    ofSetColor(255, 255, 255, 200);
//    ofRect(ofGetMouseX(), ofGetMouseY(), 50, 50);
//    ofSetRectMode(OF_RECTMODE_CENTER);
//}