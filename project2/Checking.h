#ifndef CHECKING_H
#define CHECKING_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
using namespace std;

class Checking : public Account{

private:

vector<int> checks;
int numchecks = 0;

public:

void WriteCheck(int checknum, double amount);

Checking();

Checking(string aname, long ataxID, double abalance);

void display();
};
#endif