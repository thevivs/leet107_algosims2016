#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //not really sure about this command?
    //just to disable the background from updating to white (fill opacity each time?
    
    ofSetBackgroundAuto(false);
    ofBackground(255,255,255);
    ofEnableAlphaBlending();

}

//--------------------------------------------------------------
void ofApp::update(){
    square.update();
}

//--------------------------------------------------------------
void ofApp::draw(){


    square.draw();
    
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
