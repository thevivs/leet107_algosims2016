#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i = 0; i < num; i++){
        
        
            //we are giving PS a temporary value p
        ParticleSystem p;
        
            //run the first array of particles
            //and put back into the code the array p
            // which is the temp value for PS
        particles.push_back(p);
        
        
            //we are setting up the particles array
            //which is the particle system set up
        particles[i].setup();
        
            //we are calling the array color (?)
            //but it doesnt have [i]
        
            //calling array color
            //feeding into the array random colors
        color.push_back(ofColor(ofRandom(255),ofRandom(255),ofRandom(255)));
        
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
        //for the array is equal to 0
        //if it is in the array less than 1000
        //then move forward one in array

    
        for(int i = 0; i <num; i++){
            particles[i].update();
            particles[i].bounding();
        }
    
    


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
    cam.begin();
    
    ofPushMatrix();
    
    ofRotate(360, 0, 0, 0);
    
        for(int i = 0; i < num; i++){
            ofSetColor(color[i]);
            particles[i].draw();
        }
    
    ofPopMatrix();
    
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
