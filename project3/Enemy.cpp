
#include "Enemy.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

    int Enemy::getX_position(){
        return this->x_position;
    }
    
    void Enemy::setX_position(int xpos){
        this->x_position = xpos;
    }

    int Enemy::getY_position(){
        return this->y_position;
    }

    void Enemy::setY_position(int ypos){
        this->y_position = ypos;
    }

    int Enemy::getWidth(){
        return this->width;
    }

    void Enemy::setWidth(int newWidth){
        this->width = newWidth;
    }

    int Enemy::getHeight(){
        return this->height;
    }

    void Enemy::setHeight(int newHeight){
        this->height = newHeight;
    }

    int Enemy::getStatus(){
        return this->status;
    }

    void Enemy::setStatus(int stat){
        this->status = stat;
    }