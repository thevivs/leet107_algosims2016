//
//  VectorField.hpp
//  w09_h09_problem_1_2_0
//
//  Created by Vivian Lee on 11/2/16.
//
//
#pragma once
#include "ofMain.h"

class VectorField{
    
public:
    void setup(int _w, int _h, int _res);
    void setNoise(float _noiseX, float _noiseY, float _noiseZ);
    //, float _cosNum, float _sinNum
    
    ofPoint getForce(ofPoint _pos);
    
//    void update(float _speed);
    void draw();
    
    vector <vector <vector <ofVec3f> > > table;
    int width, height, cols, depth, rows, layers, res;
 
    float noiseX, noiseY, noiseZ, speed;
    
    float cosNum, sinNum;

};