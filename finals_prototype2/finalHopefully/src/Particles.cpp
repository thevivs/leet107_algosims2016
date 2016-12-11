
#include "Particles.hpp"

void Particles::setup(ofVec2f rVel){
    

    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();

    
    
    vel = rVel;
    pos.x = ofGetWidth()*0.75;
    pos.y = ofGetHeight() * 0.75;
    //    pos.x = ofRandom(0, ofGetWidth());
    //    pos.y = ofRandom(0, ofGetHeight());
    
}

void Particles::update(float _noiseNum, float _noiseX, float _noiseY, float _cosNoise, float _sinNoise){
    
    noiseNum = _noiseNum;
    noiseX = _noiseX;
    noiseY = _noiseY;
    cosNoise = _cosNoise;
    sinNoise = _sinNoise;
    
    float noise = ofNoise(pos.x * noiseX, pos.y * noiseY, ofGetElapsedTimef()* 0.2)* noiseNum;
    
    pos += ofVec2f(cos(noise * cosNoise), sin(noise * sinNoise));
    pos += vel;
    vel *= 0.97;
    
}

void Particles::draw(){
    
    ofSetColor(255, 5);
    ofSetCircleResolution(100);
    
    radius = 1.0;
    
    ofDrawCircle(pos, radius);
    
}

void Particles::bounding(){
    
    if(pos.x < 0 + radius){
        pos.x = ofGetWidth() + radius;
    }
    
    if(pos.x > ofGetWidth()+radius){
        pos.x = 0 + radius;
    }
    
    if(pos.y < 0 +radius ){
        pos.y = ofGetHeight() + radius;
    }
    
    if(pos.y > ofGetHeight() + radius){
        pos.y = 0 + radius;
    }
    
    //    if(pos.x < 225|| pos.x > 735){
    //        vel = -vel;
    //    }
    //    if(pos.y < 15 || pos.y > 520){
    //        vel = -vel;
    //    }
    
}







