#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    num = 500;
    for(int i = 0; i <num; i++){
        
        VivianParticles tempVar;
        tempVar.setup();
        
        //are we calling the setup from the objects file?
        //we must be since we did the dot notation
        
        particles.push_back(tempVar);
        
        //taking the information from the particle array
        //and putting it in the tempVar
        
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
    for(int i = 0; i< num; i++){
        particles[i].explode();
        particles[i].draw();
        
        
        //if the particles array goes into the the frame count
        //and equal zero
        //then play again
        //because they are both increasing in the array at the same time
        //the modulo will always be zero
        //but if its random...
        
        if(ofGetFrameNum() % particles[i].someNumber == 0){
            particles[i].restart();
        }
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
