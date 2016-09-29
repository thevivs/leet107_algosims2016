//
//  Ball.cpp
//  w01_h01_problem_D
//
//  Created by Vivian Lee on 9/7/16.
//
//

#include "Ball.hpp"


void Ball::ballShape(float _x, float _y, float _s){
    x = _x;
    y = _y;
    s = _s;
}

//void Ball::ballPos(float _x, float _y){
//    x = _x;
//    y = _y;
//    
//}



void Ball::draw(float _x, float _y, float _s){
    x = _x;
    y = _y;
    s = _s;
    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    ofDrawCircle(x, y, s);
//    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), s);
}

