//
//  Ball.hpp
//  w01_h01_problem_D
//
//  Created by Vivian Lee on 9/7/16.
//
//


#pragma once
#include "ofMain.h"


class Ball{
public:
    
    void update();
    void ballShape(float _x, float _y, float _s);
    void ballPos(float _x, float _y);
    
    void setup();
    void draw(float _x, float _y, float _s);
    

    

    float x;
    float y;
    float s;
  
    
private:
    
    ofPoint pos;
};