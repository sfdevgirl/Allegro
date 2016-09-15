//
//  Rectangle.hpp
//  913class
//
//  Created by Shannon Smith on 9/13/16.
//  Copyright © 2016 Shannon Smith. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "Shapes.hpp"


class Rectangle: public Shapes{
    
    public:
        Rectangle();
        virtual ~Rectangle();
        Rectangle(int, int);
        int getWidth(void);
        void setWidth(int);
        int getLength(void);
        void setLength(int);
        
    private:
        int length;
        int width;
    
};

#endif /* Rectangle_hpp */
