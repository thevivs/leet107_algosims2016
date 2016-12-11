//
//  CircleMask.cpp
//  finalHopefully
//
//  Created by Vivian Lee on 12/10/16.
//
//

#include "CircleMask.hpp"


CircleMask::CircleMask(){
    
    radius = 50;
    
}

void CircleMask::setup(){
    
    
    sound.load("microtonal_30sec.wav");
    sound.play();
    
    fftSmooth = new float [8192];
    for (int i = 0; i < 8192; i++) {
        fftSmooth[i] = 0;
    }
    
    bands = 64;
    
    sound.setLoop(true);
    sound.setVolume(1.0);
    
    maskFbo.allocate(ofGetWidth(), ofGetHeight());
    
    maskFbo.begin();
    ofClear(0, 0, 0);
    maskFbo.end();

    
}


void CircleMask::update(){
    
    float * value = ofSoundGetSpectrum(bands);
    for(int i = 0; i < bands; i++){
        fftSmooth[i] *= 0.1f;
        if(fftSmooth[i]< value[i]){
            fftSmooth[i] = value[i];
        }
    }
    
}

void CircleMask::draw(){
    
    maskFbo.begin();
    ofSetColor(255);
    for(int i = 0; i <bands; i++){
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, -(fftSmooth[i]*radius));
    }
    //    ofDrawCircle(ofGetWidth()* 0.25, ofGetHeight() * 0.5, 155);
    
    maskFbo.end();
    maskFbo.draw(0,0);
    
    
    
}




