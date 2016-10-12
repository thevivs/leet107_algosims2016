//
//  Zombie.hpp
//  w06_h06_problem_A
//
//  Created by Vivian Lee on 10/10/16.
//
//

#pragma once
#include "ofMain.h"

class Zombie{
    
    
public:
    
    Zombie();
    
    void setInit(ofPoint _pos, ofPoint _vel = ofPoint(0,0));
    
    ofPoint getPosition();
    float getRadius();
    
    void addForce(ofPoint _force);
    
    void addAttractionForce (ofPoint _pos, float _rad, float _scale);
    
    void seek(ofPoint &_man, float _maxSpeed, float _maxForce);
    
    void draw(ofImage &_img);
//    void draw();

    void update();
    
    float maxSpeed;
    float maxForce;
    
    ofImage img;
    
private:
    
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    
    float radius;
    float damp;
    
};