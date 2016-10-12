#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    zombieParametrs.add(maxForce.set("Force", 1.0, 0.0, 5.0));
    zombieParametrs.add(maxSpeed.set("Speed", 10.0, 0.0, 100.0));
    zombieParametrs.add(size.set("Size", 70.0, 0.0, 200));
    
    gui.setup(zombieParametrs);
    
    img.load("zombie.png");

    man01.load("man01.png");
    man01.resize(90, 90);
    
    man02.load("man02.png");
    man02.resize(90, 90);

    zombie.setInit(ofGetWindowSize()*0.5, ofPoint(10, -5));

    
    ofBackground(0);
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    zombie.seek(man1, maxSpeed, maxForce);

    zombie.update();
    
    if(zombie.getPosition().distance(man1) < 90){
        man1 = ofPoint(ofRandom(100, ofGetWidth()-100), ofRandom(100, ofGetHeight()-100));
    }

    img.load("zombie.png");
    img.resize(size, size);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    


    
    zombie.draw(img);
    
    if(zombie.getPosition().distance(man1) < 250){
        man02.draw(man1);
        
    } else{
        man01.draw(man1);
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
