#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofSetVerticalSync(true);
    
    inked.load("inked.mp4");
    inked.setLoopState(OF_LOOP_NORMAL);
    inked.play();
    
    videoCharacters = string("..,,,'''``--_:;^^**""=+<>iv%&xclrs)/){}I?!][1taeo7zjLunT#@JCwfy325Fp6mqSghVd4EgXPGZbYkOA8U$KHDBWNMR0Q");
    font.load("Courier New Bold.ttf", 9);
    
    ofEnableAlphaBlending();

}

//--------------------------------------------------------------
void ofApp::update(){
    
    inked.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    inked.draw(20, 20);
    ofPixels inkedPixels = inked.getPixels();
    
    int vidWidth = inkedPixels.getWidth();
    int vidHeight = inkedPixels.getHeight();
    int nChannel = inkedPixels.getNumChannels();
    
    for (int i = 0; i < vidWidth; i+= 16){
        for(int j = 1; j < vidHeight; j+= 16){
            unsigned char r = inkedPixels[(j * 150 + i)*nChannel];
            float val = 1 - ((float)r / 255.0f);
            ofDrawCircle(520 + i, 20 + j, 5*val);
        }
    }
    
    ofPixelsRef pixelsRef = inked.getPixels();
    ofSetHexColor(0xffffff);
    
    for(int k = 0; k < vidWidth; k += 2){
        for (int l = 0; l < vidHeight; l+=15){
            float lightness = pixelsRef.getColor(k,l).getLightness();
            
            int character = powf(ofMap(lightness, 0, 255, 0, 1), 2.5)*videoCharacters.size();
            
            font.drawString(ofToString(videoCharacters[character]), 20 +k, 320 + l);
        }
    }
    

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
