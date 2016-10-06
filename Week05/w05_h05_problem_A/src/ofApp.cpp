#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
//    ofSetFrameRate(4);
    ofBackground(0);
    k = 0.05;
    restLength = ofRandom (150, 250);
    
    anchor = ofVec2f(ofGetWidth()/2, 100);
    
    for(int i=0; i <5; i++){
        ofVec2f temp;
        temp.set(ofGetWidth()/2, restLength);
        ball.push_back(temp);
    }
    
}

//--------------------------------------------------------------
void ofApp::applyForce(ofVec2f force){
    
    acc.x += force.x;
    acc.y += force.y;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if(dragging == true){
        return;
    }
    
    for(int i=0; i <5; i++){
        ofVec2f force = ball[i] - anchor;
        
        float currentLength = force.length();
        float x = currentLength - restLength;
        
        force.normalize();
        force *= -1 * k * x;
        
        applyForce(force);
        applyForce(ofVec2f(0, 1.0));
        
        vel += acc;
        vel*=0.98;
        ball[i] += vel;
        acc*=0;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetCircleResolution(60);
    ofSetColor(255, 255, 255, 127);
    ofDrawCircle(anchor, 100);
    
    for(int i = 0; i <5; i++){
    ofDrawCircle(ball[i].x,ball[i].y, ofRandom(10,20));
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
