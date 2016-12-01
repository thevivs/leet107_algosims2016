
#include "Circle.hpp"

void Circle::draw(){
    
    ofSetColor(0, 250, 0);
    ofDrawCircle(ofGetWidth()* 0.5, ofGetHeight() * 0.5 + 55, 70);
    
}