#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofBackground(255,255,255);
    ofEnableAlphaBlending();

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    ball1.update();
    ball2.update();
    ball3.update();
    ball4.update();
    ball5.update();
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ball1.draw();
    ball2.draw();
    ball3.draw();
    ball4.draw();
    ball5.draw();

}
