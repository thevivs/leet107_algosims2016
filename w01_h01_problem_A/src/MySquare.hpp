//
//  MySquare.hpp
//  w01_h01_problem_A
//
//  Created by Vivian Lee on 9/7/16.
//
//



#pragma once
#include "ofMain.h"



class MySquare{
    
public:

    void draw();
    void setSrc(float _x, float _y);
    void setDst(float _x, float _y);
    
    void updatePct(float _pct);
    
    void powUpdatePct(float _pct, float _shaper);
    
private:
    
    ofPoint src, dst;
    ofPoint pos;
    
    
    
    
};
