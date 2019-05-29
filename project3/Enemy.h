#ifndef ENEMY_H
#define ENEMY_H

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Enemy {
    private:
    int x_position;
    int y_position;
    int width;
    int height; 
    int status;

    protected:

    int getX_position();
    
    void setX_position(int xpos);

    int getY_position();

    void setY_position(int ypos);

    int getWidth();

    void setWidth(int newWidth);

    int getHeight();

    void setHeight(int newHeight);

    int getStatus();

    void setStatus(int stat);

    public:

    virtual void move_position() = 0;

    virtual void fire_weapon() = 0;

    virtual void update_status() = 0;

    virtual ~Enemy(){};
};
#endif