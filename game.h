//ANANDA BADARI - 903279508
#ifndef GAME_H
#define GAME_H

#include "gba.h"

                    /* TODO: */

            // Create any necessary structs //

#define ROWS 5
#define COLS 10

struct block
{
        int x;
        int y;
        int hit;
        u16 color;
};

struct gamebat 
{
        int x;
        int length;
        int speed;
};

struct gameball
{
        int x;
        int y;
        int vx;
        int vy;
        int tvx;
        int tvy;
};


#endif
