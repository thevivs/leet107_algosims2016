#version 120

uniform vec2 resolution;


void main( void ) {
    
    //why is it that when I try to use only numbers in the frag color, I only get one color?
    vec2 p = gl_FragCoord.xy / resolution.y;
    gl_FragColor = vec4(p.x, p.y, 0.5, 1.0);
}