#pragma once

#include "ofMain.h"
#include "TextureParticles.hpp"
#include "Boids.hpp"
#include "ofxGui.h"
#include "Circle.hpp"


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
    
    vector<TextureParticles> particles;
    vector<ofColor> colors;
    
    vector<Boids>flockingBoids;

    float dist;
    
    Circle circle;
    
    ofEasyCam cam;

    int num = 25000;
    int boidNum = 250;
    
    ofSoundPlayer bells;
		
};
