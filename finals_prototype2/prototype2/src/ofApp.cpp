#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //
    //    ofToggleFullscreen();
    
    sound.load("microtonal_30sec.wav");
    sound.play();
    
    fftSmooth = new float [8192];
    for (int i = 0; i < 8192; i++) {
        fftSmooth[i] = 0;
    }
    
    bands = 64;
    
    sound.setLoop(true);
    sound.setVolume(1.0);
    
    
    particleParameters.add(noiseNum.set("multiplyNoise",100.0,0.00,100.0));
    particleParameters.add(noiseX.set("multiplyNoiseX",0.005, 0.000, 0.01));
    particleParameters.add(noiseY.set("multiplyNoiseY",0.005, 0.000, 0.01));
    particleParameters.add(cosNoise.set("multipleCos", 1.0, 0.0, 2.0));
    particleParameters.add(sinNoise.set("multipleSin", 1.0, 0.0, 2.0));
    //    particleParameters.add(num.set("particleAmount", 1000, 100, 2500));
    
    //    circle.load("bigCircle.png");
    
    ofSetWindowShape(960, 540);
    ofSetBackgroundAuto(false);
//    ofBackground(0, 100);
        ofEnableAlphaBlending();
    //    ofSetFrameRate(160);
    
    num = 2500;
    
    for(int i = 0; i < num; i++){
        addParticles();
        
    }
    
    maskFbo.allocate(ofGetWidth(), ofGetHeight());
    
    maskFbo.begin();
    ofClear(0, 0, 0, 70);
    maskFbo.end();
//    fbo1.allocate(ofGetWidth(), ofGetHeight());
//    fbo2.allocate(ofGetWidth(), ofGetHeight());
    
    gui.setup(particleParameters);
    
}
//--------------------------------------------------------------
void ofApp::addParticles(){
    
    Particles p;
    ofVec2f rVel = ofVec2f(ofRandom(-2.0 , 1.0), ofRandom(-1.0, 2.0));
    p.setup(rVel);
    particles.push_back(p);
    
    
}


//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0; i < num; i++){
        particles[i].update(noiseNum, noiseX, noiseY, cosNoise, sinNoise);
    }
    
    float * value = ofSoundGetSpectrum(bands);
    for(int i = 0; i < bands; i++){
        fftSmooth[i] *= 0.1f;
        if(fftSmooth[i]< value[i]){
            fftSmooth[i] = value[i];
        }
    }
    

    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    for(int i = 0; i < num; i++){
        particles[i].draw();
        particles[i].bounding();
    }
    
    //    circle.draw(0, 0);
    
    
    maskFbo.begin();
    ofSetColor(255);
    for(int i = 0; i <bands; i++){
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, -(fftSmooth[i]*150));
    }
//    ofDrawCircle(ofGetWidth()* 0.25, ofGetHeight() * 0.5, 155);
    
    maskFbo.end();
    maskFbo.draw(0,0);
    
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
