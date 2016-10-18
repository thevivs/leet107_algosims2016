#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    bells.load("bells_30sec.wav");
    bells.play();
    bells.setLoop(true);
    
    ofSetWindowShape(960, 540);
    //    ofBackground(102, 61, 73);
    ofBackground(58, 38, 41);
    
    for(int i = 0; i < num; i++){
        TextureParticles tempP;
        
        particles.push_back(tempP);
        particles[i].setup();
        
        colors.push_back(ofColor(ofRandom(255),175));
    }
    
    for(int i = 0; i < boidNum; i++){
        Boids tempBoids;
        flockingBoids.push_back(tempBoids);
        flockingBoids[i].init();
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0; i < num; i++){
        particles[i].update();
        particles[i].bounding();
    }
    
    for(int i = 0; i < boidNum; i++){
        flockingBoids[i].update(flockingBoids);
        flockingBoids[i].bounding();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    for(int i = 0; i < num; i++){
        ofSetColor(colors[i]);
        particles[i].draw();
    }
    
    circle.draw();
    
    cam.begin();
    
    
    for(int i = 0; i < boidNum; i++){
        ofSetColor(255, 150);
        flockingBoids[i].draw();
        
    }
    
    cam.end();
    
    
    
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
