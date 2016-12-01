#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    sound.load("choirrr_30sec.wav");
    sound.play();
    sound.setLoop(true);
    
//    particleParameters.add(noiseNum.set("multiplyNoise",25.0,0.00,100.0));
//    particleParameters.add(noiseX.set("multiplyNoiseX",0.005, 0.000, 0.01));
//    particleParameters.add(noiseY.set("multiplyNoiseY",0.005, 0.000, 0.01));
//    particleParameters.add(cosNoise.set("multipleCos", 1.0, 0.0, 1.0));
//    particleParameters.add(sinNoise.set("multipleSin", 1.0, 0.0, 1.0));
//    particleParameters.add(num.set("particleAmount", 1000, 100, 2500));
    
    circle.load("bigCircle.png");
    
    ofSetWindowShape(960, 540);
    ofSetBackgroundAuto(false);
    ofBackground(0, 100);
//    ofEnableAlphaBlending();
//    ofSetFrameRate(160);
    
    num = 1500;
    
    for(int i = 0; i < num; i++){
        addParticles();
    
    }
    
//    maskFbo.allocate(ofGetWidth(), ofGetHeight());
//    
//    maskFbo.begin();
//    ofClear(255, 255, 255, 70);
//    maskFbo.end();
    
//    gui.setup(particleParameters);
    
}
//--------------------------------------------------------------
void ofApp::addParticles(){
    
    Particle p;
    ofVec2f rVel = ofVec2f(ofRandom(-2.0 , 2.0), ofRandom(-2.0, 1.0));
    p.setup(rVel);
    particles.push_back(p);

}


//--------------------------------------------------------------
void ofApp::update(){

    for(int i = 0; i < num; i++){
        particles[i].update();
//        particles[i].update(noiseNum, noiseX, noiseY, cosNoise, sinNoise);

        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    for(int i = 0; i < num; i++){
        particles[i].draw();
        particles[i].bounding();
    }
    
    circle.draw(0, 0);

    
//    maskFbo.begin();
//    ofSetColor(150, 150);
//    ofDrawCircle(ofGetWidth()* 0.25, ofGetHeight() * 0.5, 155);
//    
//    maskFbo.end();
//    maskFbo.draw(0,0);
    
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
