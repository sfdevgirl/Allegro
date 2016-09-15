//
//  Shapes.cpp
//  913class
//
//  Created by Shannon Smith on 9/13/16.
//  Copyright © 2016 Shannon Smith. All rights reserved.
//

#include "Shapes.hpp"

Shapes::Shapes(){
    velocity = 0;
    filled = true;
    color = 0;
}//shapes

Shapes::~Shapes(){
    //
}//~
int Shapes::getVelocity(){
    return velocity;
}//getVelocity

int Shapes::getColor(void){
    return color;
}//getColor

bool Shapes::getFilled(void){
    return filled;
}//getFilled