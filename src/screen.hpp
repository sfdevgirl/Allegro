//
//  screen.hpp
//  913class
//
//  Created by Shannon Smith on 9/13/16.
//  Copyright © 2016 Shannon Smith. All rights reserved.
//

#ifndef screen_hpp
#define screen_hpp

#include <stdio.h>
#include "circle.hpp"
#include "Rectangle.hpp"

class screen{ 
    
    public:
        screen();
        screen(int);
        
        virtual ~screen();
        
    protected:
    
    private:
    
    int screenHeight;
    int screenWidth;
    int BKG_COLOR;
    
   // create var called myCircles and make it a 5 entry array to circle *pointer
    
    Circle *myCircle[5];
    Rectangle* theRectangles[5];
    
 
    

    
};






#endif /* screen_hpp */
