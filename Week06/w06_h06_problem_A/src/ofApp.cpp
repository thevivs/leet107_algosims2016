#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    zombieParametrs.add(maxForce.set("Force", 1.0, 0.0, 5.0));
    zombieParametrs.add(maxSpeed.set("Speed", 10.0, 0.0, 100.0));
    zombieParametrs.add(size.set("Size", 70.0, 0.0, 200));
    
    gui.setup(zombieParametrs);
    
    img.load("zombie.png");
    //    img.resize(size, size);
    
        for(int i = 0; i<5; i++){
            ofPoint tempMan;
            tempMan.set(ofRandomWidth(), ofRandomHeight());
            man1.push_back(tempMan);
        }
    
    man01.load("man01.png");
    man01.resize(90, 90);
    
    man02.load("man02.png");
    man02.resize(90, 90);
    //
    //
    //    man03.load("man03.png");
    //    man03.resize(70, 70);
    
    zombie.setInit(ofGetWindowSize()*0.5, ofPoint(10, -5));
    
    ofBackground(0);
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
//    zombie.seek(man1, maxSpeed, maxForce);
        for(int i = 0; i < 5; i++){
            zombie.seek(man1[i], maxSpeed, maxForce);
        }
    
//    for(int i = 0; i < 5; i++){
//        zombie.seek(man1[0].getPosition().distance(man1[1]) < man1[0].distance, maxSpeed, maxForce);
//    }
    
    zombie.update();
    
    
    
//    if(zombie.getPosition().distance(man1) < 90){
//        vel.x = ofRandom(0, 10);
//        vel.y = ofRandom(0,10);
//        
//        man1 += vel;
//    }
//    

    
//    if(zombie.getPosition().distance(man1) < 90){
//        man1 = ofPoint(ofRandom(100, ofGetWidth()-100), ofRandom(100, ofGetHeight()-100));
//    }
    
        for(int i = 0; i < 5; i++){
            if(zombie.getPosition().distance(man1[i]) < 100){
                man1[i] = ofPoint(ofRandom(100, ofGetWidth()-100), ofRandom(100, ofGetHeight()-100));
            }
        }
    
    
    img.load("zombie.png");
    img.resize(size, size);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    zombie.draw(img);
    
    //    for(int i = 0; i < 5; i++){
    //        man01.draw(man1[i]);
    //    }
    
  for(int i = 0; i < 5; i++){
    if(zombie.getPosition().distance(man1[i]) < 250){
        man02.draw(man1[i]);
        
    } else{
        man01.draw(man1[i]);
    }
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
