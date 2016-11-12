//
//  VectorField.cpp
//  w09_h09_problem_1_2_0
//
//  Created by Vivian Lee on 11/2/16.
//
//

#include "VectorField.hpp"

void VectorField::setup(int _w, int _h, int _res){
    
    //when creating a gui for width and height, they need to be the same or else it won't draw
    //but also why is it still following a path when there is no field
    
    width = _w;
    height = _h;
    res = _res;
    
    //because we don't need to cover the entire screen with vectors of points
    //we use resolotion to distribute vectors kind of like mapping
    
    cols = width / res;
    rows = height / res;
    layers = depth /res;
    
    for (int z = 0; z < layers; z++){
        vector < vector < ofVec3f> > myPlaneList;
        table.push_back(myPlaneList);
        
        for(int y = 0; y < rows; y++){
            vector < ofVec3f> myList;
            table[z].push_back(myList);
            
            for(int x = 0; x < cols; x++){
                ofVec3f dir(5, 5, 5);
                table[z][y].push_back(dir);
            }
        }
    }
}

void VectorField::setNoise( float _noiseX, float _noiseY, float _noiseZ){
    //float _cosNum, float _sinNum
    
//    cosNum = _cosNum;
//    sinNum = _sinNum;
    
    noiseX = _noiseX;
    noiseY = _noiseY;
    noiseZ = _noiseZ;
    
    for(int z = 0; z < table.size(); z++){
        for(int y = 0; y < table[z].size(); y++){
            
            for(int x = 0; x < table[z][y].size(); x++){
                
                float noise = ofMap( ofNoise(x *noiseX, y *noiseY, z * noiseZ), 0, 1, 0, TWO_PI);
                float cotNoise = (cos(noise)/sin(noise));
                table[x][y][z].set(ofVec3f(cos(noise) *20.0, sin(noise) *20.0, sin(noise) * 20.0));
            }
        }
    }
}



void VectorField::draw(){
    
    for(int z = 0; z< table.size(); z++){
        for(int y = 0; y < table[z].size(); y++){
            for (int x = 0; x < table[y][z].size(); x++){
                ofVec3f np( x*res, y*res, z*res);
                ofDrawLine(np, np +table[z][y][x]);
            }
        }
    }
    
}

ofPoint VectorField::getForce(ofVec3f pos){
    float pctX = pos.x/width;
    float pctY = pos.y / height;
    float pctZ = pos.z / depth;
    
    cols = width / res;
    rows = height / res;
    layers = depth /res;
    
    int xVal = ofClamp(pctX * cols, 0, cols-1);
    int yVal = ofClamp(pctY * rows, 0, rows-1);
    int zVal = ofClamp(pctZ * layers, 0, layers - 1);
    
    ofVec3f newPos;
    newPos.set(table[zVal][yVal][xVal]);
    
    return newPos;
}

//void VectorField::update(float _speed){
//    
//    speed= _speed;
//    
//    for (int x = 0; x <table.size(); x++){
//        for(int y = 0; y < table[x].size(); y++){
//            
//            //I labeled this as speed, but I don't think that it the proper term for it. When it increases/decreases it actually changes the length of the vector field particle
//            
//            //it controls the speed of the particles
//            
//            table[x][y] *= speed;
//        }
//    }
//}
