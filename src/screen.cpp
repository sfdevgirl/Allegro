//
//  screen.cpp
//  913class
//
//  Created by Shannon Smith on 9/13/16.
//  Copyright © 2016 Shannon Smith. All rights reserved.
//
#include "screen.hpp"

screen::screen() {
    // TODO Auto-generated constructor stub
    for (int i = 0; i < 5; i++){
        myCircle[i] = new Circle(i);
        theRectangles[i] = new Rectangle();
    }//for
    screenHeight = 0;
    screenWidth = 0;
    BKG_COLOR = 0;
    
}

screen::~screen() {
    // TODO Auto-generated destructor stub
    
    //use for loop to delete the Circles
    for(int i = 0; i < 5; i++){
        delete myCircle[i];
        delete theRectangles[i];
    }//for
    
    
}