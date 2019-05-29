#ifndef TERRORIST_H
#define TERRORITS_H
#include <stdio.h>
#include <iostream>
#include <string>
#include "Enemy.h"
using namespace std;

class Terrorist : public Enemy{

public:

Terrorist();

void move_position() override;

void fire_weapon() override;

void update_status() override;
};

#endif