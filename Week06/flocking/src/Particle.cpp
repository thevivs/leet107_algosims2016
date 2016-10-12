//
//  Particle.cpp
//  flocking
//
//  Created by Vivian Lee on 10/6/16.
//
//

#include "Particle.hpp"


Particle::Particle(){
    
    radius =1;
}

void Particle::init(){
    
    pos = ofPoint(ofRandom(-ofGetWidth()/2, ofGetWidth()/2), ofRandom(-ofGetWidth()/2, ofGetWidth()/2));
    
    vel = ofPoint(ofRandom(-1, 1), ofRandom(-1, 1));
}

void Particle::bounding(){
    
    if(pos.x > ofGetWidth()/2 || pos.x < -ofGetWidth()/2){
        vel = -vel;
    }
    
    if(pos.y > ofGetHeight()/2 || pos.y < -ofGetHeight()/2){
        vel = -vel;
    }
}

void Particle::draw(){
    
    ofDrawCircle(pos.x, pos.y, radius);
    
}

ofPoint Particle::cohesion(vector<Particle> &particles){
    
    ofPoint centerMass;
    for(int i=0; i < particles.size(); i++){
        
        //"this" is referring to itself
        if(&particles[i] == this){
            continue;
        }
        
        centerMass += particles[i].pos;
        
    }
    
    centerMass = centerMass/ (particles.size()-1);
    
    ofPoint cohesionVel;
    cohesionVel= (centerMass - pos)/100;
    
    return cohesionVel;
    
}

ofPoint Particle::separation(vector<Particle> &particles){
    
    ofPoint displace;
    
    for(int i=0; i<particles.size(); i++){
        if(&particles[i] == this){
            continue;
        }
        
        float dist = pow((particles[i].pos.x - pos.x), 2) + pow((particles[i].pos.y - pos.y), 2);
        
        dist = sqrt(dist);
        
        if(dist < 10.0){
            
            displace = displace - (particles[i].pos - pos);
        }
        
    }
    
    ofPoint separationVel;
    separationVel = displace;
    
    
    return separationVel;
    
}

ofPoint Particle::alignment(vector<Particle> &particles){
    
    ofPoint averageVel;
    for(int i=0; i<particles.size(); i++){
        if(&particles[i] == this){
            continue;
        }
        
        averageVel += particles[i].vel;
    }
    
    averageVel = averageVel/(particles.size()-1);
    
    ofPoint alignmentVel;
    alignmentVel = (averageVel - vel)/8;
    
    return alignmentVel;
    
}

void Particle::update(vector<Particle> &particles){
    
    ofPoint v1 = cohesion(particles);
    ofPoint v2 = separation(particles);
    ofPoint v3 = alignment(particles);
    
    vel += v1 + v2 + v3;
    pos = pos+ vel;
    
}


















