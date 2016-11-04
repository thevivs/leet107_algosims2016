#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    gridWidth = 200;
    gridHeight = 200;
    
    int scale = 6;
    
    for(int y = 0; y < gridWidth; y++){
        for(int x = 0; gridHeight; x++){
            
            //create a mesh!
            mesh.addVertex(ofPoint((x - gridWidth*0.5) *scale,
                                   (y - gridHeight* 0.5)*scale,
                                   0));
            
            mesh.addColor(ofColor(0, 0, 0));
        }
    }
    
    
    //add the triangles
    //i1 = x+ gridwidth * y
    //i2 = (x+1) + gridWidth * y
    //i3 = x + gridWidth * (y +1)
    //i4 = (x+1) + gridWidth *(y+1)
    
    for(int y = 0; y < gridWidth - 1; y++) {
        for(int x = 0; x< gridHeight - 1; x++){
            
            //loop through the squares to get the indices
            i1 = x+ gridWidth * y;
            i2 = x+1 + gridWidth * y;
            i3 = x + gridWidth * (y +1);
            i4 = x+1 + gridWidth *(y+1);
            
            mesh.addTriangle(i1, i2, i3);
            mesh.addTriangle(i2, i3, i4);
            
        }
    }

}

//--------------------------------------------------------------
void ofApp::update(){
        float time = ofGetElapsedTimef();
    
        for (int y = 0; y < gridWidth; y++) {
            for(int x = 0; x < gridHeight; x++){
                int i = x + gridWidth * y;
                ofPoint p = mesh.getVertex(i);
    
                float perlin = ofNoise(x*0.5, y * 0.5, time * 0.5);
                p.z = perlin * 100;
    
                mesh.setVertex(i, p);
                mesh.setColor(i, ofColor(perlin * 255, perlin * 255, 255));
                
            }
        }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    cam.begin();
    
    mesh.drawWireframe();
    
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
