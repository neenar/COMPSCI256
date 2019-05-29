#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Account{
private:
    string name; 
    long taxID;
    double balance;

protected:
    vector<double> withdraws;
    vector<double> deposits;
    int numWithDraws = 0;
    int count = 0;


public: 
    Account();

    Account(string a_name,long a_taxID,double a_balance);

    void setName(string a_name);

    string getName();

    void setTaxID(long a_taxID); 

    long getTaxID();

    void setBalance(double a_balance);

    double getBalance();

    void setCount();

    int getCount();

    void makeDeposit(double amount);
    
    void display();

};
#endif