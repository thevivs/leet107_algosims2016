#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //    ofBackground(255);
//    circlesParameter.add(oneX.set("First X", 0.125, 0.0, 1.0));
//    circlesParameter.add(twoX.set("Second X", 0.25, 0.0, 1.0));
//    circlesParameter.add(threeX.set("Third X", 0.5, 0.0, 1.0));
//    circlesParameter.add(fourX.set("Fourth X", 0.75, 0.0, 1.0));
//    circlesParameter.add(fiveX.set("Fifth X", 0.9, 0.0, 1.0));
//    
//    circlesParameter.add(oneY.set("First Y", 0.125, 0.0, 1.0));
//    circlesParameter.add(twoY.set("Second Y", 0.25, 0.0, 1.0));
//    circlesParameter.add(threeY.set("Third Y", 0.5, 0.0, 1.0));
//    circlesParameter.add(fourY.set("Fourth Y", 0.75, 0.0, 1.0));
//    circlesParameter.add(fiveY.set("Fifth Y", 0.9, 0.0, 1.0));
//    

    //    ofSetColor(255);
    //    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    ofSetBackgroundAuto(false);
    ofBackground(0, 150);
//    ofEnableAlphaBlending();
    
    num = 15000;
    
    for(int i = 0; i < num; i++){
        addParticles();
    }
    
    maskFbo.allocate(ofGetWidth(), ofGetHeight());
    
    maskFbo.begin();
    ofClear(255, 255, 255, 255);
    maskFbo.end();
    
 
//    gui.setup(circlesParameter);
    
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
    //    ofBackground(0, 255);
    
    
    
    for(int i = 0; i < num; i++){
        particle[i].draw();
        particle[i].bounding();
    }
    
    maskFbo.begin();
    
    ofSetColor(0);
    ofDrawCircle(ofGetWidth()* 0.75, ofGetHeight() * 0.75, 25);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight() * 0.75, 25);
    ofDrawCircle(ofGetWidth()/3, ofGetHeight() * 0.75, 25);
    ofDrawCircle(ofGetWidth()/4, ofGetHeight() * 0.75, 25);
    ofDrawCircle(ofGetWidth()/5, ofGetHeight() * 0.75, 25);
//
//    ofDrawCircle(ofGetWidth() * oneX, ofGetHeight() * oneY, 25);
//    ofDrawCircle(ofGetWidth() * twoX, ofGetHeight() * twoY, 25);
//    ofDrawCircle(ofGetWidth() * threeX, ofGetHeight() * threeY, 25);
//    ofDrawCircle(ofGetWidth() * fourX, ofGetHeight() * fourY, 25);
//    ofDrawCircle(ofGetWidth() * fiveX, ofGetHeight() * fiveY, 25);
    
    maskFbo.end();
    
    
    maskFbo.draw(0,0);
    
    
//    gui.draw();
    
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
