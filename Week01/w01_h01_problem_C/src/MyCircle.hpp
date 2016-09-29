//
//  MyCircle.hpp
//  w01_h01_problem_C
//
//  Created by Vivian Lee on 9/8/16.
//
//

#pragma once
#include "ofMain.h"


class MyCircle{
    
    
public:
    
    void draw(float _circleSize);
    void update();
    
    void powUpdatePct(float _pct, float _shaper);
    
    
    
private:
//    ofPoint pos;
    float circleSize;
};


//make a circle
//set the powUpdatePCt
//and the mycircle powupdatepct
//create float pct in header
//plug in powupdate into mycircle draw

// if ball size is < ofGetWidth()
//the ball size + size * powpct