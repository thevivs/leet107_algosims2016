#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sound.load("Ambient_30sec.wav");
    sound.play();
    
    fftSmooth = new float [8192];
    for (int i = 0; i < 8192; i++) {
        fftSmooth[i] = 0;
    }
    
    bands = 64;
    
    sound.setLoop(true);
    sound.setVolume(0.2);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofSoundUpdate();
    
    float * value = ofSoundGetSpectrum(bands);
    for(int i = 0; i < bands; i++){
        fftSmooth[i] *= 0.9f;
        if(fftSmooth[i]< value[i]){
            fftSmooth[i] = value[i];
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    for(int i = 0; i <bands; i++){
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, -(fftSmooth[i]*150));
    }

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
