#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    fieldParameters.add(noiseX.set("noiseX",0.05,0.00,1.0));
    fieldParameters.add(noiseY.set("noiseY",0.05,0.00,1.0));
    fieldParameters.add(speed.set("speed", 0.99, 0.00,40.0));
    
    fieldParameters.add(cosNum.set("cosNum", 1, 0.0 ,10.0));
    fieldParameters.add(sinNum.set("sinNum",1, 0.0 ,10.0));
    
    fieldParameters.add(width.set("width", ofGetWidth(), 0, ofGetWidth()));
    fieldParameters.add(height.set("height", ofGetHeight(), 0, ofGetHeight()));
    fieldParameters.add(res.set("resolution", 20, 0, 50));
    fieldParameters.add(drawVF.set(false));
    
    
    //for some reason when I added the gui for the setup of the vector field, it doesn't work
    //but when I manuall change it in the original code I got from class, I am able to change it
    
    vf.setup(width, height, res);
    
    for(int i = 0; i< 500; i++){
        Particles p;
        p.setInit(ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight())));
        particles.push_back(p);
    }
    
    gui.setup(fieldParameters);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    vf.setNoise(ofGetElapsedTimef(), noiseX, noiseY, cosNum, sinNum);
    vf.update(speed);
    
    for(int i = 0; i <particles.size(); i++){
        particles[i].addForce(vf.getForce(particles[i].getPosition()) * 0.1);
        particles[i].update();
        particles[i].infiniteWalls();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
    for(int i = 0; i < particles.size(); i++){
        particles[i].draw();
    }
    
    if(drawVF){
    vf.draw();
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
