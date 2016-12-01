
#include "ParticleTwo.hpp"

void Particle::setup(ofVec2f rVel){
    
    vel = rVel;
    pos.x = ofGetWidth() * 0.5;
    pos.y = ofGetHeight() * 0.5;
//        pos.x = ofRandom(0, ofGetWidth());
//        pos.y = ofRandom(0, ofGetHeight());
    
}

void Particle::update(){
    
//    noiseNum = _noiseNum;
//    noiseX = _noiseX;
//    noiseY = _noiseY;
//    cosNoise = _cosNoise;
//    sinNoise = _sinNoise;
    
//    float noise = ofNoise(pos.x * noiseX, pos.y * noiseY, ofGetElapsedTimef()* 0.2)* noiseNum;
    
    float noise = ofNoise(pos.x * 0.005, pos.y * 0.005, ofGetElapsedTimef()* 0.2)* 25;
    
    pos += ofVec2f(cos(noise * 0.5), sin(noise * 1));
    pos += vel;
    vel *= 0.97;
    
}

void Particle::draw(){
    
    ofSetColor(255, 5);
    ofSetCircleResolution(100);
    
    radius = 1.0;
    
    ofDrawCircle(pos, radius);
    
}

void Particle::bounding(){
    
        if(pos.x < 225  + radius){
            pos.x = 735 + radius;
        }
    
        if(pos.x > 735 + radius){
            pos.x = 225 + radius;
        }
    
        if(pos.y < 15 + radius){
            pos.y = 520 + radius;
        }
    
        if(pos.y > 520 + radius){
            pos.y = 15 + radius;
        }
    
//    if(pos.x < 225|| pos.x > 735){
//        vel.x = -vel.x;
//    }
//    if(pos.y < 15 || pos.y > 520){
//        vel.y = -vel.y;
//    }
//    
}







