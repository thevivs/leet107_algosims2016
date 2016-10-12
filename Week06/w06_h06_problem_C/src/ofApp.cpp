#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    num = 100;
    
    for (int i = 0; i< num; i++) {
        
        Boids tempBoids;
        flockingBoids.push_back(tempBoids);
        flockingBoids[i].init();
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0; i<num; i++){
        flockingBoids[i].update(flockingBoids);
        flockingBoids[i].bounding();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0);
    
    cam.begin();
    
    
    for(int i =0; i < num; i++){
        flockingBoids[i].draw();
    }
    
    
    cam.end();

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
