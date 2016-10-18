//
//  Boids.cpp
//  w07_midterm
//
//  Created by Vivian Lee on 10/14/16.
//
//

#include "Boids.hpp"


Boids::Boids(){
    
    radius = ofRandom(0.1, 5.0);
    
}

void Boids::init(){
    
    pos = ofPoint(-150, 5, 0);
    vel= ofPoint(ofRandom(-0.5, 0.5), ofRandom(-0.5, 0.5), ofRandom(-0.5, 0.5));
    
}

void Boids::bounding(){
    
    if(pos.x > 250 || pos.x < -250){
        vel = -vel;
    }
    if(pos.y > 250 || pos.y < -250){
        vel = -vel;
    }
    if(pos.z > 250 || pos.z < -250){
        vel = -vel;
    }
    
}

void Boids::draw(){
    
    ofDrawCircle(pos.x, pos.y, pos.z, radius);

}


ofPoint Boids::cohesion(vector<Boids> &boidsParticles){
    
    ofPoint centerMass;
    for(int i = 0; i <boidsParticles.size(); i++){
        if(&boidsParticles[i] == this){
            continue;
        }
        
        centerMass = (boidsParticles[i].pos + pos)*2;
    }
    
    centerMass = centerMass/(boidsParticles.size()-1);
    
    ofPoint cohesion_vel;
    cohesion_vel = (centerMass-pos)/30.0;
    return cohesion_vel;
    
}


ofPoint Boids::separation(vector<Boids> &boidsParticles){
    
    ofPoint displace;
    for(int i = 0; i < boidsParticles.size(); i++){
        if(&boidsParticles[i] == this){
            continue;
        }
        
        float dist = pow(boidsParticles[i].pos.x - pos.x, 2) + pow(boidsParticles[i].pos.y - pos.y, 2) + pow(boidsParticles[i].pos.z - pos.z, 2);
        
        dist = sqrt(dist);
        
        if(dist < 80.0){
            displace = displace - (boidsParticles[i].pos - pos);
        }
        
    }
    
    ofPoint separation_vel;
    separation_vel = displace;
    return separation_vel;
    
}



ofPoint Boids::alignment(vector<Boids> &boidsParticles) {
    
    ofPoint aveVel;
    for(int i = 0; i < boidsParticles.size(); i++){
        if(&boidsParticles[i] == this){
            continue;
        }
        
        aveVel += boidsParticles[i].vel;
        
    }
    
    aveVel = aveVel/(boidsParticles.size()-2);
    
    ofPoint alignment_vel;
    alignment_vel = (aveVel - vel)/50.0;
    return alignment_vel;
    
}

void Boids:: update(vector<Boids> &boidsParticles){
    
    ofPoint v1 = cohesion(boidsParticles);
    ofPoint v2 = separation(boidsParticles);
    ofPoint v3 = alignment(boidsParticles);
    
    vel = (v1 + v2 + v3)*0.25;
    pos = pos + vel;
    
}
