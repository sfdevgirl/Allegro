//
//  Shapes.hpp
//  913class
//
//  Created by Shannon Smith on 9/13/16.
//  Copyright © 2016 Shannon Smith. All rights reserved.
//

#ifndef Shapes_hpp
#define Shapes_hpp

#include <stdio.h>


struct Position {
    int x;
    int y;
};

struct Direction {
    int x;
    int y;
};

class Shapes {
    public:
        Shapes();
        virtual ~Shapes();
        int getVelocity(void);
        int getColor(void);
        bool getFilled(void);
        void setVolocity(int);
        void setColor(int);
        void setFilled(bool);
        void setDirection(int, int);
        Direction getDirection(void);
        void setPosition(int, int);
        Position getPosition(void);
    
    protected:
        Position thePosition;
        Direction theDirection;
        int velocity;
        int color;
        bool filled;
    
    
    private:
        //classes shapes can see
    
};
#endif /* Shapes_hpp */
