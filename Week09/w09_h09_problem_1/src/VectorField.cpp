//
//  VectorField.cpp
//  w09_h09_problem_1
//
//  Created by Vivian Lee on 11/2/16.
//
//

#include "VectorField.hpp"

//first create a vector field

void VectorField::setup(int _w, int _h, int _res){
    
    width = _w;
    height = _h;
    res = _res;
    
    //because we don't need to cover the entire screen with vectors of points
    //we use resolotion to distribute vectors kind of like mapping
    
    cols = width / res;
    rows = height / res;
    
    for(int x = 0; x < cols; x++){
        
        vector<ofPoint> column;
        column.resize(rows);
        table.push_back(column);
        
        for(int y = 0; y < rows; y++){
            table[x][y] = ofPoint(ofRandom(-10,10),ofRandom(-10,10));
        }
    }
}

void VectorField::setNoise(float _time){
    
    for(int x = 0; x < table.size(); x++){
        for(int y = 0; y < table[x].size(); y++){
            float noise = ofMap(ofNoise(x * 0.05, y * 0.05, _time * 0.1), 0, 1, 0, TWO_PI);
            table[x][y] = ofPoint(cos(noise), sin(noise));
        }
    }
}


void VectorField::draw(){
    
    for(int x = 0; x < table.size(); x++){
        for (int y = 0; y < table[x].size(); y++){
            ofPushMatrix();
            ofTranslate(x*res, y*res);
            
            ofDrawLine(ofPoint(0,0), table[x][y]);
            ofPopMatrix();
        }
    }
    
}

ofPoint VectorField::getForce(ofPoint _pos){
    _pos /= res;
 
    //what does the ofClamp do?
    
    int x = ofClamp(int(_pos.x), 0, cols-1);
    int y = ofClamp(int(_pos.y), 0, rows-1);
    
    return table[x][y];
}

void VectorField::update(){
    
    for (int x = 0; x <table.size(); x++){
        for(int y = 0; y < table[x].size(); y++){
            table[x][y] *= 0.99;
        }
    }
}











