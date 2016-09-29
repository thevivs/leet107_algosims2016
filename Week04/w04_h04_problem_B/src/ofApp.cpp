#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i = 0; i< num; i++){
        
        ManyParticles tempP;
        tempP.initialPosition(ofPoint(ofGetWidth()*0.5, ofGetHeight()*0.5), ofPoint(ofRandom(-1,1), ofRandom(-1, 1)));
        particles.push_back(tempP);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    for(int i = 0; i< num; i++){
        if(ofGetMousePressed(OF_KEY_LEFT)){
            particles[i].addRepulsion(ofPoint(ofGetMouseX(), ofGetMouseY()), 100, 0.05);
            
        } else {
            
            particles[i].addAttraction(ofPoint(ofGetMouseX(), ofGetMouseY()), 100, 0.05);
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    ofSetColor(255);
    
    
    for(int i = 0; i< num; i++){
        particles[i].draw();
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
