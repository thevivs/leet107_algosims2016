#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    ofEnableDepthTest();
    
    ofDisableArbTex();
    ofLoadImage(heightMap, "heightmap.png");
    fbo.allocate(ofGetWidth(), ofGetHeight());
    ofEnableArbTex();
    
    normalShader.load("", "normal.frag");
    terrainShader.load("terrain");
    
    int scale = 15;
    int w = ofGetWidth()/scale;
    int h = ofGetHeight()/scale;
    
    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
            
            float offsetX = 0;
            float offsetY;
            
            if(x%2==1){
                offsetY = 0.5;
            } else {
                offsetY = 0.0;
            }
            
            terrain.addVertex(ofPoint((x+offsetX)*scale, (y+offsetY)*scale, 0));
            terrain.addNormal(ofPoint( 1, 0, 0));
            terrain.addTexCoord(ofVec2f((float)(x+offsetX)/ (float)w, (float)(y+offsetY)/(float)h));
            
        }
    }
    
    for(int y = 0; y< h-1; y++){
        for(int x = 0; x<w-1; x++){
            if(x%2==0){
                terrain.addIndex(x+y*w);
                terrain.addIndex((x+1)+y*w);
                terrain.addIndex(x+(y+1)*w);
                
                terrain.addIndex((x+1)+y*w);
                terrain.addIndex((x+1)+(y+1)*w);
                terrain.addIndex(x+(y+1)*w);
            } else {
                terrain.addIndex((x+1)+y*w);
                terrain.addIndex(x+y*w);
                terrain.addIndex((x+1)+(y+1)*w);
                
                terrain.addIndex(x+y*w);
                terrain.addIndex(x+(y+1)*w);
                terrain.addIndex((x+1)+(y+1)*w);
            }
        }
    }
    
    wireFrame = true;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    int width = ofGetWidth();
    int height = ofGetHeight();
    
    fbo.begin();
    ofClear(0);
    ofSetColor(255);
    normalShader.begin();
    normalShader.setUniformTexture("texutre", heightMap, 0);
    glBegin(GL_QUADS);
    
    
    //the coordinates to stretch the texture?
    glTexCoord2f(0, 0);
    glVertex2f(0, 0);
    
    glTexCoord2f(1.0, 0);
    glVertex2f(width, 0);
    
    glTexCoord2f(1.0, 1.0);
    glVertex2f(width, height);
    
    glTexCoord2f(0, 1.0);
    glVertex2f(0, height);
    
    glEnd();
    normalShader.end();
    fbo.end();
    
    
    ofSetWindowTitle(ofToString(ofGetFrameRate()));
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    ofPushMatrix();
    
    ofTranslate(-ofGetWidth()*0.5, -ofGetHeight()*0.5);
    
    terrainShader.begin();
    terrainShader.setUniformTexture("heightMap", heightMap, 0);
    terrainShader.setUniformTexture("normalMap", fbo, 1);
    terrainShader.setUniform1f("time", ofGetElapsedTimef());
    
    if(wireFrame){
        terrain.drawWireframe();
    } else{
        terrain.draw();
    }
    
    terrainShader.end();
    ofPopMatrix();
    
    cam.end();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'w'){
        wireFrame = !wireFrame;
    } else {
        terrainShader.load("terrain");
    }
    
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
