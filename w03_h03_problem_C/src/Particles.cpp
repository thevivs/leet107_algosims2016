//
//  Particles.cpp
//  w03_h03_problem_C
//
//  Created by Vivian Lee on 9/22/16.
//
//

#include "Particles.hpp"


//MyParticles::MyParticles(){
//    
//    w = 10;
//    h = 10;
//    
//}

void MyParticles::setup(){
    
    pos = ofPoint(0, 0, 0);
    vel = ofPoint(ofRandom(-2, 2), ofRandom(-2, 2), ofRandom(-2, 2));
    
}

void MyParticles::draw(){
    
    ofRectangle(pos.x, pos.y, pos.z, 10, 10);
    
}

void MyParticles::update(){
    
    pos = pos + vel;
    
}

void MyParticles::bounding(){
    

    
    if(pos.y > 300 || pos.y < -300){
        vel.y = -vel.y;
    }
    
    if(pos.x > 300 || pos.x < -300){
        vel.x = -vel.x;
    }
    
    if(pos.z > 300 || pos.z < -300){
        vel.z = -vel.z;
    }
    
}

