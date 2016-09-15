//*****************

//Project Name: In Class Game Assignment

//Project Description: Classes with Allegro

//Project Author: Smith, Shannon

//Is this an extra credit Project:  Yes

//Date completed:09/15/2016

//Operating system used: Windows

//IDE Used:  Eclipse

//*****************




#include <iostream>
using namespace std;
#include "screen.hpp"
#include "Rectangle.hpp"
#include "circle.hpp"
#include "allegro.h"
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    Circle* aCircle = new Circle();
    Rectangle* aRectangle = new Rectangle();
    //Shapes* aShapes= new Shapes();



    delete aCircle;
    delete aRectangle;

    //initialize the Allegro game system
    allegro_init();
    install_keyboard();
    int myWindow = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
    if(myWindow != 0){
        allegro_message(allegro_error);
        return 999;//return code error
    }//if 0 everything fine- works just like main returning 0

    //
    //Main allegro game loop
    while(!key[KEY_ESC]){
        //put your allegro game code here

        //define colors
        int red=rand()%255;
        int green=rand()%255;
        int blue=rand()%255;
        int color=makecol(red, green, blue);
        /*
         //make a screen with pixels
         int color=makecol(255, 255, 255);
         int x=10+rand()%(SCREEN_W-20);
         int y=10+rand()%(SCREEN_H-20);
         putpixel(screen, x, y, color);*/

         //horizontal lines
        /* int x1=10+rand()%(SCREEN_W-20);
         int x2=10+rand()%(SCREEN_W-20);
         int y=10+rand()%(SCREEN_H-20);
         hline(screen, x1, y, x2, color);*/

         //vertical lines
         /*int x=10+rand()%(SCREEN_W-20);
         int y=10+rand()%(SCREEN_H-20);
         int y2=10+rand()%(SCREEN_H-20);
         vline(screen, x, y, y2, color);*/

        //rectangles
        int x1=10+rand()%(SCREEN_W-20);
        int y1=10+rand()%(SCREEN_H-20);
        int x2=10+rand()%(SCREEN_W-20);
        int y2=10+rand()%(SCREEN_H-20);
        rect(screen, x1, y1, x2, y2, color); // or
        rectfill(screen, x1, y1, x2, y2, color);






    }//while


    allegro_exit();

    cout << "Goodbye, World!\n";
    return 0;
}
END_OF_MAIN()
