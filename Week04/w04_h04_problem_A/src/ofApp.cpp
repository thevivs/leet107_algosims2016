#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    
    orbit.set(150, 0);
    
    parameterGroup.add(orbit.circleParameters);
    gui.setup(parameterGroup);
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    orbit.update(ofPoint(ofGetWidth()*0.5, ofGetHeight()*0.5));
    orbit.speedTravel();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if(ofGetKeyPressed('1')){
        ofSetColor(100, 10, 60);
        ofDrawSphere(ofGetWidth()/2, ofGetHeight()/2, 50);
    }
    
    if(ofGetKeyPressed('2')){
        ofSetColor(70, 100, 20);
        ofDrawSphere(ofGetWidth()/2, ofGetHeight()/2, 50);
    }
    
    if(ofGetKeyPressed('3')){
        ofSetColor(0, 0, 100);
        ofDrawSphere(ofGetWidth()/2, ofGetHeight()/2, 50);
        
    } else {
        
        ofSetColor(255, 255, 255);
        ofDrawSphere(ofGetWidth()/2, ofGetHeight()/2, 50);
        
    }
    
    orbit.draw();
    gui.draw();
    
    ofSetColor(255);
    ofDrawBitmapString("\n\nPress 1-3 to change color", ofGetWidth()*0.25, 20);
    
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
