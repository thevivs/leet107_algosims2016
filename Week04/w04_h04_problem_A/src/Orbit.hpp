//
//  Orbit.hpp
//  w04_h04_problem_A
//
//  Created by Vivian Lee on 9/27/16.
//
//

#pragma once
#include "ofMain.h"



class Orbit{
    
public:
    

    void draw();
    void set(float _dist, float _intAngle);
    void update(ofPoint _center);
    void speedTravel();
    
    ofParameterGroup circleParameters;
    ofParameter <float> size;
    ofParameter <float> angle;
    ofParameter <ofColor> color;
//    ofParameter <ofColor> green (("green"),125, 0, 255);
//    ofParameter <ofColor> blue (("blue"), 125, 0, 255);
//    
    float radius;
//    float angle;
    
    float x, y;
    
};

