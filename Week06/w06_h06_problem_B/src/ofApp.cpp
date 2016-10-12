#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    zombie.load("zombie.png");
    zombie.resize(100, 100);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
//    ofPoint predict = vel.getPosition();
//    predict.normalize();
////    predict.mult(25);
//    ofPoint predictLoc = loc + predict;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    zombie.draw(ofGetWidth()/2, ofGetHeight()/2);
    path.display();
    
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
