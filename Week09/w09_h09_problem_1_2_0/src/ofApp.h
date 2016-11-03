#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "VectorField.hpp"
#include "Particles.hpp"

//vector field code from the class
//I am trying to add gui panel so that I can better understand the way that the vector field works

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
    
    ofxPanel gui;
    ofParameterGroup fieldParameters;
    ofParameter<float> noiseX;
    ofParameter<float> noiseY;
    ofParameter<float> cosNum;
    ofParameter<float> sinNum;
    ofParameter<float> speed;
    ofParameter<int> width;
    ofParameter<int> height;
    ofParameter<int> res;
    ofParameter<bool> drawVF;
    
    VectorField vf;
    vector<Particles> particles;
    
};
