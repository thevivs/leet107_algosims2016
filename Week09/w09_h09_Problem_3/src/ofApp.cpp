#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    fieldParameters.add(noiseX.set("noiseX",0.05,0.00,1.0));
    fieldParameters.add(noiseY.set("noiseY",0.05,0.00,1.0));
    fieldParameters.add(noiseZ.set("noiseZ",0.05,0.00,1.0));
    fieldParameters.add(speed.set("speed", 0.99, 0.00,40.0));
    
    fieldParameters.add(cosNum.set("cosNum", 1, 0.0 ,10.0));
    fieldParameters.add(sinNum.set("sinNum",1, 0.0 ,10.0));
    
    
    
    //for some reason when I added the gui for the setup of the vector field, it doesn't work
    //but when I manuall change it in the original code I got from class, I am able to change it
    
    
    vf.setup(1000, 1000, 1000, 50);
    
    
//    particleList.clear();
    
    for(int i=0; i< 1000; i++){
        addParticle();
    }
    
    ofBackground(0);
    gui.setup(fieldParameters);
}

//--------------------------------------------------------------

void ofApp::addParticle() {
    Particles part;
    part.pos = ofVec3f(ofRandom(vf.width), ofRandom(vf.height), ofRandom(vf.depth) );
    
    particleList.push_back( part );
}

//--------------------------------------------------------------
void ofApp::update(){
    
    vf.setNoise(noiseX, noiseY, noiseZ);
    //    vf.update(speed);
    
    for(int i = 0; i< particleList.size(); i++){
        particleList[i].addForce(vf.getForce(particleList[i].pos) *0.005);
        particleList[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    
    ofPushMatrix();{
        ofSetColor(255);
        ofTranslate(vf.width*0.5*-1, vf.height*0.5*-1, vf.depth*0.5*-1);
        //vf.draw();
        
        
        glBegin(GL_POINTS);
        for(int i = 0; i<particleList.size(); i++){
            particleList[i].draw();
        }
        
        glEnd();
        
    } ofPopMatrix();
    
    

    
    
    cam.end();
    
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
