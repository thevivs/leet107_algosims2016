//
//  Particles.cpp
//  w09_h09_problem_1_2_0
//
//  Created by Vivian Lee on 11/2/16.
//
//

#include "Particles.hpp"

Particles::Particles(){
    mass = 1.0;
}

void Particles::setInit(ofPoint _pos, ofPoint _vel){
    pos = _pos;
    vel = _vel;
    acc.set(0,0,0);
}


void Particles::addForce(ofVec3f force){
    acc += (force/mass);
}

void Particles::update(){
    
    acc.set(0);
    
    if(pos.x > 1000) pos.x = 0;
    if(pos.y > 1000) pos.y = 0;
    if(pos.z > 1000) pos.z = 0;
    
    if(pos.x < 0) pos.x = 1000;
    if(pos.y < 0) pos.y = 1000;
    if(pos.z < 0) pos.z = 1000;
    
}

ofPoint Particles::getPosition(){
    return pos;
}



void Particles::draw(){
    ofSetColor(255, 0, 0);
    //    ofDrawCircle(pos, 30);
    //    ofVertex(pos);
    glVertex3fv(&pos.x);
    
}




