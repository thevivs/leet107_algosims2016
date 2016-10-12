//
//  Boids.cpp
//  w06_h06_problem_C
//
//  Created by Vivian Lee on 10/11/16.
//
//

#include "Boids.hpp"

Boids::Boids(){
    
    radius = 3;
}

void Boids::init(){
    
    pos = ofPoint(0, 0, 0);
    vel = ofPoint(ofRandom(-1, 1), ofRandom(-1, 1), ofRandom(-1, 1));
    
    
}

void Boids::bounding(){
    
    if(pos.x > 200 || pos.x < -200){
        vel = -vel;
    }
    if(pos.y > 200 || pos.y < -200){
        vel = -vel;
    }
    if(pos.z > 200 || pos.z < -200){
        vel = -vel;
    }
    
}

void Boids::draw(){
    
    ofDrawCircle(pos.x, pos.y, pos.z, radius);
    
}

ofPoint Boids::cohesion(vector<Boids> &boidParticles){
    
    ofPoint centerMass;
    for(int i = 0; i <boidParticles.size(); i++){
        if(&boidParticles[i] == this){
            continue;
        }
        
        centerMass = (boidParticles[i].pos + pos)*2;
    }
    
    centerMass = centerMass/(boidParticles.size()-1);
    
    ofPoint cohesion_vel;
    cohesion_vel = (centerMass-pos)/80.0;
    return cohesion_vel;
    
}


ofPoint Boids::separation(vector<Boids> &boidParticles){
    
    ofPoint displace;
    for(int i = 0; i < boidParticles.size(); i++){
        if(&boidParticles[i] == this){
            continue;
        }
        
        float dist = pow(boidParticles[i].pos.x - pos.x, 2) + pow(boidParticles[i].pos.y - pos.y, 2) + pow(boidParticles[i].pos.z - pos.z, 2);
        
        dist = sqrt(dist);
        
        if(dist < 10.0){
            displace = displace - (boidParticles[i].pos - pos);
        }
        
    }
    
    ofPoint separation_vel;
    separation_vel = displace;
    return separation_vel;
    
}



ofPoint Boids::alignment(vector<Boids> &boidParticles) {
    
    ofPoint aveVel;
    for(int i = 0; i < boidParticles.size(); i++){
        if(&boidParticles[i] == this){
            continue;
        }
        
        aveVel += boidParticles[i].vel;
        
    }
    
    aveVel = aveVel/(boidParticles.size()-1);
    
    ofPoint alignment_vel;
    alignment_vel = (aveVel - vel)/8.0;
    return alignment_vel;
    
}

void Boids:: update(vector<Boids> &boidParticles){
    
    ofPoint v1 = cohesion(boidParticles);
    ofPoint v2 = separation(boidParticles);
    ofPoint v3 = alignment(boidParticles);
    
    vel += v1 + v2 + v3;
    pos = pos + vel;
    
}








