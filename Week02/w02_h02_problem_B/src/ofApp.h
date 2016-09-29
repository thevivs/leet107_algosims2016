#pragma once

#include "ofMain.h"
#include "VivianBalls.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();


		
    VivianBalls ball1;
    VivianBalls ball2;
    VivianBalls ball3;
    VivianBalls ball4;
    VivianBalls ball5;

    
};
