//
//  ParticleSystem.cpp
//  w03_h03_problem_B
//
//  Created by Vivian Lee on 9/21/16.
//
//

#include "ParticleSystem.hpp"


ParticleSystem::ParticleSystem(){
    

    
    radius = ofRandom(1, 5);
    //was there a reason that we defined radius size separately?

}

void ParticleSystem::setup(){
    
    pos = ofPoint(0, 0, 0);
    vel = ofPoint(ofRandom(-2, 2), ofRandom(-2, 2), ofRandom(-2, 2));
    
}

void ParticleSystem::draw(){
    

    ofDrawCircle(pos.x, pos.y, pos.z, radius);
    
}

void ParticleSystem::update(){
    
    pos = pos + vel;
    
    
}

void ParticleSystem::bounding(){
    
    
    if(pos.y > 400 || pos.y < -400){
        vel.y = -vel.y;
    }
    
    if(pos.x >400 || pos.x < -400){
        vel.x = -vel.x;
    }
    
    if(pos.z > 400 || pos.z < -400){
        vel.z = -vel.z;
    }
    
    
}