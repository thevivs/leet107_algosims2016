//
//  Square.hpp
//  w02_h02_problem_A
//
//  Created by Vivian Lee on 9/12/16.
//
//


#pragma once
#include "ofMain.h"

class Square{
    
public:
    
    Square();
    
    void draw();
    void setup();
    void update();
    
    ofPoint position;
    ofPoint velocity;
    
    
};