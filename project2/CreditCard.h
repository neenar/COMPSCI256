#ifndef CREDITCARD_H
#define CREDITCARD_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
using namespace std;

class CreditCard : public Account{

    private:
    long cardNumber;
    
    vector<string> charges;

    public:
    void doCharge(string name, double amount);

    void makePayment(double amount);

    CreditCard();

    CreditCard(string aname, long ataxID, double abalance);

    void display();

};

#endif