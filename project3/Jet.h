#ifndef JET_H
#define ACCOUNT_H
#include "Enemy.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Jet : public Enemy{

    public:

    Jet();

    void move_position() override;

    void fire_weapon() override;

    void update_status() override;

};

#endif