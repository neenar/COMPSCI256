#include "Enemy.h"
#include "Bear.h"
#include "Jet.h"
#include "Terrorist.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{    
    const int max_enemy = 20;
    Enemy* enemy_ptr[max_enemy];
    int num_enemy;
	

	// create Enemy objects, place in array
    enemy_ptr[0] = new Bear;
    
    // Bear B;
    // Bear C;
    // Bear D;
    // Bear E;
    enemy_ptr[1]= new Jet ;
    // Jet B;
    // Jet C;
    // Jet D;
    // Jet E;
    enemy_ptr[3]= new Terrorist; 
    // Terrorist B;
    // Terrorist C;
    // Terrorist D;
    // Terrorist E;

	// set value of num_enemy
    num_enemy = 3;

    while ( true ) {

        // every Enemy object should move_position 
        enemy_ptr[0]->move_position();
        enemy_ptr[1]->move_position();
        enemy_ptr[2]->move_position();
        // Pick a random Enemy to fire_weapon
        int r = rand() % (num_enemy + 1);
        enemy_ptr[r]->fire_weapon();
        // Pick a random Enemy to update_status		
        int a = rand() % (num_enemy + 1);
        enemy_ptr[a]->update_status();
        //getch();
        cout << endl;
    }
    return 0;
}