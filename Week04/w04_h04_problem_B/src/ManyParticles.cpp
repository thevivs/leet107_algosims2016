//
//  ManyParticles.cpp
//  w04_h04_problem_B
//
//  Created by Vivian Lee on 9/28/16.
//
//

#include "ManyParticles.hpp"


ManyParticles::ManyParticles(ofPoint _pos, ofPoint _vel){
    
    pos.set(_pos.x, _pos.y);
    vel.set(_vel.x, _vel.y);
    
//    initialPosition(ofPoint(ofGetWidth()*ofRandom(0.5), ofGetHeight()*ofRandom(0.5)), ofPoint(ofRandom(-10,10), ofRandom(-10, 10)));
    dampening = 0.02;
    
}

void ManyParticles::initialPosition(ofPoint _pos, ofPoint _vel){
    
    pos.set(_pos.x, _pos.y);
    vel.set(_vel.x, _vel.y);
    
}

void ManyParticles::update(){
    
//    cout<<force<<endl;
//    vel = vel + force;
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
    
    float dist = force.length();
        force.normalize();
    
    
    vel *= dampening;

    
    if( dist < 150 ){
    vel += force * 0.05;
    }

    
//    ofPoint attractPt(ofGetMouseX(), ofGetMouseY());
//    frc = attractPt-pos;
//    
//    //let get the distance and only repel points close to the mouse
//    float dist = frc.length();
//    frc.normalize();
//    
//    vel *= drag;
//    if( dist < 150 ){
//        vel += -frc * 0.6; //notice the frc is negative
//    }else{
//        //if the particles are not close to us, lets add a little bit of random movement using noise. this is where uniqueVal comes in handy.
//        frc.x = ofSignedNoise(uniqueVal, pos.y * 0.01, ofGetElapsedTimef()*0.2);
//        frc.y = ofSignedNoise(uniqueVal, pos.x * 0.01, ofGetElapsedTimef()*0.2);
//        vel += frc * 0.04;
//    }
}

void ManyParticles::draw(){
    ofDrawSphere(pos, 5);
}
