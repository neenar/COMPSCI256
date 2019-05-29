#ifndef BEAR_H
#define BEAR_H
#include "Enemy.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Bear : public Enemy{
public:

Bear();

void move_position() override;

void fire_weapon() override;

void update_status() override;
};


#endif