#ifndef SAVINGS_H
#define SAVINGS_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
using namespace std;


class Savings : public Account{

    public:

    void DoWithdraw(int amount);

    Savings();

    Savings(string aname, long ataxID, double abalance);

    void display();

};

#endif