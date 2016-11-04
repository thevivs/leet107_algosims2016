#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofBackground(0, 150);
    ofEnableAlphaBlending();
    
    num = 15000;
    
    for(int i = 0; i < num; i++){
        addParticles();
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0; i < num; i++){
        particle[i].update();
    }


}

//--------------------------------------------------------------
void ofApp::addParticles(){
    
    Particles p;
    ofVec2f rVel = ofVec2f(ofRandom(-1.0, 1.0), ofRandom(-1.0, 1.0))  * 15.0;
    p.setup(rVel);
    particle.push_back(p);
    
}


//--------------------------------------------------------------
void ofApp::draw(){
//    ofBackground(0, 150);

    for(int i = 0; i < num; i++){
        particle[i].draw();
        particle[i].bounding();
    }
    
    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){
        ofBackground(0);
        
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
