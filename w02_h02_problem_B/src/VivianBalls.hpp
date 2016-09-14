//
//  VivianBalls.hpp
//  w02_h02_problem_D
//
//  Created by Vivian Lee on 9/14/16.
//

#pragma once
#include "ofMain.h"


class VivianBalls{
    
    //make classes of balls
    //when calling the balls as objs
    //give them random rgb values so they vary
    
    
public:
    
    VivianBalls();
    //float _red, float _green, float _blue
    
    void draw();
    void setup();
    void update();
    
    ofPoint position;
    ofPoint velocity;
    
//    ofColor red;
//    ofColor green;
//    ofColor blue;

    
};