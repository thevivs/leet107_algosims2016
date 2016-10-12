//
//  Zombie.cpp
//  w06_h06_problem_A
//
//  Created by Vivian Lee on 10/10/16.
//
//

#include "Zombie.hpp"

Zombie::Zombie(){

    
    pos.x = ofGetWidth() * 0.5;
    pos.y = ofGetHeight() * 0.5;
    
    vel.set(0,0);
    acc.set(0,0);
    
    damp = 0.95;
    radius = 1;
    
}

void Zombie::setInit(ofPoint _pos, ofPoint _vel){
    
    pos = _pos;
    vel = _vel;
    acc.set(0,0);
    
}

ofPoint Zombie::getPosition(){
    
    return pos;
    
}

float Zombie::getRadius(){
    
    return radius;
    
}

void Zombie::addForce(ofPoint _force){
    
    acc += _force;
    
}

void Zombie::addAttractionForce(ofPoint _pos, float _rad, float _scale){
    
    ofPoint diff = _pos - pos;
    if(diff.length() < _rad){
        diff *= 0.3-diff.length()/_rad;
        addForce(-diff*_scale);
    }
}

void Zombie::seek(ofPoint &_man, float _maxSpeed, float _maxForce){
    
    maxSpeed = _maxSpeed;
    maxForce = _maxForce;
    
    float slowDownRadius = 10.0;
    
    ofPoint desired= _man - pos;
    
    if(desired.length() < slowDownRadius){
        float newMag = ofMap(desired.length(), 0, slowDownRadius, 0, maxSpeed);
        
        desired.normalize();
        desired*= newMag;
        
    }else{
        desired.normalize();
        desired *=maxSpeed;
    }
    
    ofPoint steer = desired - vel;
    steer.limit(maxForce);
    
    addForce(steer);
}

void Zombie::update(){
    
    vel += acc;
    vel *= damp;
    pos += vel;
    acc *= 0.0;
    
    if(pos.x < 0.0+radius || pos.x > ofGetWidth()-radius){
        pos.x -= vel.x;
        vel.x *= -1.0;
    }
    
    
    if(pos.y < 0.0+radius || pos.y > ofGetHeight()-radius){
        pos.y -= vel.y;
        vel.y *= -1.0;
    }
}

void Zombie::draw(ofImage &_img){
    
    _img.draw(pos.x, pos.y, 10);

}

//void Zombie::draw(){
//    ofDrawCircle(pos.x, pos.y, 50);
//}







