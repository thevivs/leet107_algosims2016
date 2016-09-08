//
//  MySquare.cpp
//  w01_h01_problem_A
//
//  Created by Vivian Lee on 9/7/16.
//
//

#include "MySquare.hpp"

void MySquare::setSrc(float _x, float _y){
    
    src.set(_x, _y);
}

void MySquare::setDst(float _x, float _y){

    dst.set(_x,_y);

}


void MySquare::powUpdatePct(float _pct, float _shaper){
    
    float Powpct = powf(_pct, _shaper);
    pos = dst * Powpct + src * (1.0 - Powpct);

}


void MySquare::draw(){
    
    ofSetColor(255, 255, 255);
    ofLine(src, dst);
    
    ofSetColor(255, 0, 0, 200);
    ofRect(pos, 10, 10);
    
}

