#pragma once

#include "ofMain.h"
#include "Zombie.hpp"
#include "ofxGui.h"
#include "NewPath.hpp"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    Zombie zombie;
    
    ofImage img;
    ofImage man01;
    ofImage man02;
    ofImage man03;
    
    ofPoint man1;
    
    ofPoint pos;
    ofPoint vel;
    
    ofxPanel gui;
    ofParameterGroup zombieParametrs;
    ofParameter<float> maxForce;
    ofParameter<float> maxSpeed;
    ofParameter<float> size;
    
    
//    vector<ofPoint> man1;
    
};
