//
//  MyCircle.cpp
//  w01_h01_problem_C
//
//  Created by Vivian Lee on 9/8/16.
//
//

#include "MyCircle.hpp"



void MyCircle::draw(float _circleSize){
    
    circleSize = _circleSize;
    ofDrawCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, circleSize);
    

    
}

void MyCircle::update(){
    

    
}

//void MyCircle::powUpdatePct(float _pct, float _shaper){
//    
//    float powPct = powf(_pct, _shaper);
////    pos = ofGetWidth() * powPct + ofGetHeight() * (1.0 - powPct);
//}