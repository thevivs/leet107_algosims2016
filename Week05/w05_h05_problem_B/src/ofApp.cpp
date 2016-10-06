#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    springParameters.add(anchorSize.set("AnchorSize", 10, 0, 100));
    springParameters.add(ballSize.set("BallSize", 10, 0, 100));
    springParameters.add(anchorColor.set("AnchorColor", ofColor(255), ofColor(0,0),ofColor(255)));
    springParameters.add(ballColor.set("BallColor", ofColor(255), ofColor(0,0),ofColor(255)));
    springParameters.add(lineColor.set("LineColor", ofColor(255), ofColor(0,0),ofColor(255)));
    springParameters.add(restLength.set("RestLength", 200, 0, 300));
    springParameters.add(setK.set("K Variable", 0.05, 0, 1));
    springParameters.add(gravity.set("Gravity", 0.98, 0, 2));
    
    gui.setup(springParameters);
    
    
    ofBackground(0);
    k = setK;
//    restLength = 200;
    
    anchor = ofVec2f(ofGetWidth()/2, anchorSize+ 10);
    ball = ofVec2f(ofGetWidth()/2, restLength + ballSize);
    
    dragging = false;
    
}
//--------------------------------------------------------------

//Our own function in the main

void ofApp::applyForce(ofVec2f force){
    //    acc += force;
    acc.x += force.x;
    acc.y += force.y;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if(dragging == true){
        return; //go out of update of function
    }
    
    //Steps to create the springy effect
    ofVec2f force = ball - anchor; // the direction of the vector
    
    float currentLength = force.length();
    float x = currentLength - restLength;
    //normalize refers to vector math whereby you multiply the vector by the "unit vector"
    force.normalize();
    force *= -1 * k * x;  //applying Hooke's Law
    
    applyForce(force);
    applyForce(ofVec2f(0,1.0));//brings the x component back to 0
    
    //Add dynamic movement
    vel+=acc;
    vel*=gravity; // gravity
    ball+=vel;
    acc*=0; //set back to 0 to bring the spring thing back to a neutral position.
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    gui.draw();
    
    ofSetColor(lineColor);
    ofLine(anchor, ball);
    
    ofSetCircleResolution(100);
    
    ofSetColor(anchorColor);
    ofCircle(anchor, anchorSize);
    
    ofSetColor(ballColor);
    ofCircle(ball, ballSize);
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
    
    if(dragging==true){
        ball.set(x, y);
    }
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    if(ofVec2f(x,y).distance(ball) < 20){
        ball.set(x, y);
        dragging = true;
        vel *= 0;
        
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    dragging = false;
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
