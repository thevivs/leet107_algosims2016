#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    for(int i = 0; i<num; i++){
        MyParticles tempVar;
        particle.push_back(tempVar);
        particle[i].setup();
    
    
    color.push_back(ofColor(ofRandom(255),ofRandom(255),ofRandom(255)));
    }
}

//--------------------------------------------------------------
void ofApp::update(){

    for(int i = 0; i <num; i++){
        particle[i].update();
        particle[i].bounding();
    }
}

//----------------------

void ofApp::draw(){
    
    ofBackground(255);
    cam.begin();
    
    for(int i = 0; i< num; i++){
        ofSetColor(color[i]);
        particle[i].draw();
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
