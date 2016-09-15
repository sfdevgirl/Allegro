//
//  circle.cpp
//  913class
//
//  Created by Shannon Smith on 9/13/16.
//  Copyright © 2016 Shannon Smith. All rights reserved.
//

#include "circle.hpp"

Circle::Circle(int anInt){
    initObj();
    radius = anInt;
}

void Circle::initObj(void){
    velocity = 0;
    color = 0;
    filled= false;
}

Circle::Circle(){
    
   
}

Circle::~Circle(){
    //TODO
    radius = 0;
}



int Circle::getRadius(void){
    return radius;
}

void Circle::setRadius(int anInt){
    
}