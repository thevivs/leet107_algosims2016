//
//  Orbit.cpp
//  w04_h04_problem_A
//
//  Created by Vivian Lee on 9/27/16.
//
//

#include "Orbit.hpp"


void Orbit::set(float _dist, float _intAngle){
    
    radius = _dist;
    angle = _intAngle;
    
    circleParameters.setName("changeCircle");
    circleParameters.add(size.set("size", 10, 0, 100));
    circleParameters.add(angle.set("angle", 0.1, -1.0, 1.0));
    circleParameters.add(color.set("color",ofColor(127),ofColor(0,0),ofColor(255)));

    
}

void Orbit::update(ofPoint _center){
    
    
    
    x = _center.x  + radius * cos(angle);
    y = _center.y + radius * sin(angle);
    
    
}

//trying to figure out how I can manipulate speed
//too _step out of update and now i have two circles.. why?

void Orbit::speedTravel(){
    float _step;
    angle += _step;
    
    //    angle = speed + _step;
}

void Orbit::draw(){
    
    ofSetColor(color);

    ofDrawSphere(x, y, size);

    
}