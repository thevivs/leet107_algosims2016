##Vivian's Weekly Homeworks


### Week 3

Problem A:

I'm trying to understand what this piece of code says, but I'm not sure if I got it right?


    
    ofBackground(255);
    for(int i = 0; i< num; i++){
        particles[i].explode();
        particles[i].draw();
        
        
        //if the particles array goes into the the frame count
        //and equal zero
        //then play again
        //because they are both increasing in the array at the same time
        //the modulo will always be zero
        //but if its random...
        
        if(ofGetFrameNum() % particles[i].someNumber == 0){
            particles[i].restart();
        }
    }
    

In my code, why do the balls disappear after awhile?

Problem B:
When using the z-axis in a piece of code, does "ofGetWidth()"/ "ofGetHeight()" not work anymore? It would be sort of obsolete in this case because with the z-axis, then (0, 0, 0) becomes the center?

I just made the realization that "int i" in for loops signify for loops.

What if I wanted to make the bounding box grow as well? Would I have to hosue the particles inside or can I simply create a "for loop" for the bounding box.

I wanted it to spin on its axis, but I guess I didn't write the right code into it.



### Week 2

Problem A- fairly simple. I just sampled the code from class to give the square some bounding constraints. However, it is annoying to me that half of the square falls off the screen before it is recognized as going off screen. I know that that is because the vector point is in the center of the square, but I don't know know how to set it so that it reads off screen when it hits the edge of the square.

The trailing effect is a little different than how you give that command in processing, but I kind of knew that you had to change the opacity of the screen so that it leaves a trail when the square moves. However, what I got was the the result I was expecting.

Problem B - What.....? update: I think I got it?

Problem C - Also what...?

Problem D - I wanted to make each ball randomly different colors, not changing colors randomly. Tried a couple of codes in there, but it's either doing all the same color or just continuously changing color. Also, I still don't know how to write arrays.


###Week 1

/Users/vivianlee/Dropbox/DT/Fall2016/CreativeCoding/OpenFrameworks/of_v0.9.3_osx_release/apps/leet107_AlgoSims2016/Screen Shot 2016-09-21 at 8.17.49 PM.png

