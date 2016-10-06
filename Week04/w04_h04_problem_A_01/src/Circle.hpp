//
//  Circle.hpp
//  w04_h04_problem_A_01
//
//  Created by Vivian Lee on 9/30/16.
//
//

#pragma once
#include "ofMain.h"

class Circle{
    
public:
    void draw(float _size, float _b);
    void setup();
    void update();
    
    float size;
    float brightness;
};