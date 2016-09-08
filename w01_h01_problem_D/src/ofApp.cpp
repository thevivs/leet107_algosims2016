#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){


    
    
    ballOne.ballShape(ofGetMouseX(), ofGetMouseY(), 100);
    ballTwo.ballShape(ofGetMouseX() * 0.5, ofGetMouseY() * 0.5, 50);
    ballThree.ballShape(ofGetMouseX() * 0.25, ofGetMouseY() * 0.25, 10);



}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ballOne.draw(ofGetMouseX(), ofGetMouseY(),100);
    ballTwo.draw(ofGetMouseX()*.5, ofGetMouseY()*.5,50);
    ballThree.draw(ofGetMouseX()*.25, ofGetMouseY()*.25,10);

    
//    ballOne.ballPos(ofGetMouseX(), ofGetMouseY());
//    ballTwo.ballPos(ofGetMouseX() * 0.5, ofGetMouseY() * 0.5);
//    ballThree.ballPos(ofGetMouseX() * 0.25, ofGetMouseY() * 0.25);


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
