//
//  circle.hpp
//  913class
//
//  Created by Shannon Smith on 9/13/16.
//  Copyright © 2016 Shannon Smith. All rights reserved.
//

#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>
#include "Shapes.hpp"

class Circle: public Shapes{
    
public:
    Circle();
    Circle(int);
   
    virtual ~Circle();
    void setRadius(int);
    int getRadius(void);
    
    
private:
    int radius;
    void initObj(void);
    
};
#endif /* circle_hpp */
