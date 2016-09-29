//
//  ManyParticles.cpp
//  w04_h04_problem_B
//
//  Created by Vivian Lee on 9/28/16.
//
//

#include "ManyParticles.hpp"


ManyParticles::ManyParticles(){
    
    
    initialPosition(ofPoint(ofGetWidth()*0.5, ofGetHeight()*0.5), ofPoint(ofRandom(-1,1), ofRandom(-1, 1)));
    dampening = 0.02;
    
}

void ManyParticles::initialPosition(ofPoint _pos, ofPoint _vel){
    
    pos.set(_pos.x, _pos.y);
    vel.set(_vel.x, _vel.y);
    
}

void ManyParticles::update(){
    
    vel = vel + force;
    pos = pos + vel;
    
}

void ManyParticles::addAttraction(ofPoint _pos, float _radius, float _strength){
    
//    ofPoint posOfForce;
//    posOfForce.set(_pos.x, _pos.y);
//    ofPoint diff = pos - posOfForce;
//    
//    if(diff.length() < _radius){
//        diff *= ofMap(diff.length(), 0, _radius, 1.0, 0.0);
//        force -= diff * _strength;
//    }
    
    ofPoint attractPt(ofGetMouseX(), ofGetMouseY());
    force = attractPt - pos;
    
    vel *= dampening;
    vel += force *0.5;
}

void ManyParticles::addRepulsion(ofPoint _pos, float _radius, float _strength){
    
//    ofPoint posOfForce;
//    posOfForce.set(_pos.x, _pos.y);
//    ofPoint diff = pos - posOfForce;
//    
//    if(diff.length() < _radius){
//        diff *= ofMap(diff.length(), 0, _radius, 1.0, 0.0);
//        force -= diff * _strength;
//    }
    
    
    ofPoint attractPt(ofGetMouseX(), ofGetMouseY());
    force = attractPt + pos;
    
    vel *= dampening;
    vel += force *0.5;
    
}

void ManyParticles::draw(){
    ofDrawSphere(pos, 5);
}
