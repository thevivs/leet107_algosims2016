#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//
//    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){
//        float posX, posY;
//        
//        posX = ofGetMouseX();
//        posY = ofGetMouseY();
//        
//       ofDrawRectangle(posX, posY, 50, 50);
//        
//    } else {
//        
//        
//        ofDrawRectangle(ofGetWidth() * 0.5, ofGetHeight() * 0.5, 50, 50);
//    }
//


    
    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){
        
        obj.drawAgain();
        
    } else if(ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)){
        
        obj.drawRight();
        
    } else {
        
        obj.draw();
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
