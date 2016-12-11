#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    particleParameters.add(noiseNum.set("multiplyNoise",100.0,0.00,100.0));
    particleParameters.add(noiseX.set("multiplyNoiseX",0.005, 0.000, 0.01));
    particleParameters.add(noiseY.set("multiplyNoiseY",0.005, 0.000, 0.01));
    particleParameters.add(cosNoise.set("multipleCos", 1.0, 0.0, 2.0));
    particleParameters.add(sinNoise.set("multipleSin", 1.0, 0.0, 2.0));
    
    for(int i = 0; i < num; i++){
        addParticles();
        
    }
    
    ofSetWindowShape(960, 540);
    ofSetBackgroundAuto(true);
    ofEnableAlphaBlending();


    gui.setup(particleParameters);
    
    maskCircle.setup();

}

//--------------------------------------------------------------
void ofApp::addParticles(){
    
    Particles p;
    ofVec2f rVel = ofVec2f(ofRandom(-2.0 , 1.0), ofRandom(-1.0, 2.0));
    p.setup(rVel);
    particles.push_back(p);
    
    
}



//--------------------------------------------------------------
void ofApp::update(){
    
    maskCircle.update();

    for(int i = 0; i < num; i++){
        particles[i].update(noiseNum, noiseX, noiseY, cosNoise, sinNoise);
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    maskCircle.draw();
    
    for(int i = 0; i < num; i++){
        particles[i].draw();
        particles[i].bounding();
    }

    
        gui.draw();
    

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
