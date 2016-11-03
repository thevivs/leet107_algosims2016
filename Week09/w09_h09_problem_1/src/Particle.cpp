//
//  Particle.cpp
//  w09_h09_problem_1
//
//  Created by Vivian Lee on 11/2/16.
//
//

#include "Particle.hpp"

Particle::Particle(){
    
    pos.x = ofGetWidth()*0.5;
    pos.y = ofGetHeight()*0.5;
    pos.z = 0.0;
    
    vel.set(0, 0, 0);
    acc.set(0, 0, 0);
    
    damp = 0.97;
    radius = 3;
}

void Particle::setInit(ofPoint _pos, ofPoint _vel){
    pos = _pos;
    vel = _vel;
    acc.set (0, 0, 0);
}

ofPoint Particle::getPosition(){
    return pos;
}

ofPoint Particle::getVeloctiy(){
    return vel;
}

//float Particle:: getRadius(){
//    return radius;
//}

void Particle::addForce(ofPoint _force){
    acc += _force;
}

void Particle::addRepulsionForce(ofPoint _pos, float _rad, float _scale){
    ofPoint diff = _pos - pos;
    if(diff.length() < _rad){
        diff *= 1.0 - diff.length()/_rad;
        addForce(-diff*_scale);
    }
}

void Particle::addAttractionForce(ofPoint _pos, float _rad, float _scale){
    
    ofPoint diff = _pos - pos;
    if(diff.length() < _rad){
        diff*= 1.0-diff.length()/_rad;
        addForce(diff*_scale);
    }
}

void Particle:: addFlockingForce(vector<Particle> &_particles, float _neighborhoodRadius, float _alignmentScale, float _separationScale, float _cohesionScale){
    
    float zoneRadiusSq = _neighborhoodRadius * _neighborhoodRadius;
    
    ofPoint sep;
    
    ofPoint ali;
    int aliCount = 0;
    
    ofPoint coh;
    ofPoint posSum;
    int cohCount = 0;
    
    for(int i = 0; i < _particles.size(); i++){
        if(this != &_particles[i]){
            ofPoint diff = pos - _particles[i].getPosition();
            float lenSq = diff.lengthSquared();
            
            if(lenSq < zoneRadiusSq){
                ofPoint repulse = diff;
                repulse.normalize();
                repulse /= sqrt(lenSq);
                sep += repulse;
                
                
                ali += _particles[i].getVeloctiy();
                aliCount++;
                
                posSum += _particles[i].getPosition();
                cohCount++;
            }
        }
    }
    
    if(aliCount > 0){
        ali /= (float)aliCount;
        ali.limit(0.1);
    }
    
    if(cohCount > 0){
        posSum /= (float) cohCount;
    }
    
    coh = posSum - pos;
    coh.limit(0.04);
    
    
    acc += ali * _alignmentScale;
    acc += coh * _separationScale;
    acc += sep * _cohesionScale;
    
}

void Particle::update(){
    vel += acc;
    vel *= damp;
    pos += vel;
    acc *= 0.0;
    
    if(tail.size()>0){
        if(pos.distance(tail[tail.size()-1])>2.){
            tail.push_back(pos);
        }
    } else {
        tail.push_back(pos);
    }
    if(tail.size() > 300){
        tail.erase(tail.begin());
    }
    
}

void Particle::bounding(){
    
    if(pos.x < 0.0 + radius || pos.x > ofGetWidth()-radius){
        pos.x -= vel.x;
        vel.x *= -1.0;
    }
    
    if(pos.y < 0.0 + radius || pos.y > ofGetHeight()-radius){
        pos.y -= vel.y;
        vel.y *= -1.0;
    }
}

void Particle::infiniteWalls(){
    
    if(pos.x < 0.0){
        pos.x = ofGetWidth()-1;
        tail.clear();
    }
    
    if(pos.x > ofGetWidth()){
        pos.x = 1;
        tail.clear();
    }
    
    if(pos.y < 0){
        pos.y = ofGetHeight()-1;
        tail.clear();
    }
    
    if(pos.y > ofGetHeight()){
        pos.y = 1;
        tail.clear();
    }

    
}

void Particle::draw(){
    ofDrawCircle(pos, radius);
//    
//    ofPoint velNormal = vel;
//    velNormal.normalize();
//    
//    ofVec2f velPerp;
//    velPerp.x = -velNormal.y;
//    velPerp.y = velNormal.x;
    
    //ofLine(pos.x, pos.y, pos.x + velNormal.x *10, pos.y +velNormal.y *10);
}














