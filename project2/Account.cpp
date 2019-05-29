#include <stdio.h>
#include <iostream>
#include "Account.h"
#include <vector>
using namespace std;

//do error checking 

    Account::Account(){
        this->name = "Neena";
        this->taxID = 123456789;
        this->balance = 100.00;
    }

    Account::Account(string a_name,long a_taxID,double a_balance){
        this->name = a_name;
        this->taxID = a_taxID;
        this->balance = a_balance;
    }

    void Account::setName(string a_name){
        this->name = a_name;
    }

    string Account::getName(){
        return this->name;
    }

    void Account::setTaxID(long a_taxID){
       this->taxID = a_taxID; 
    }

    long Account::getTaxID(){
        return this->taxID;
    }

    void Account::setBalance(double a_balance){
        this->balance = a_balance;
    }

    double Account::getBalance(){
        return this->balance;
    }

    void Account::makeDeposit(double amount){
        
        this->balance += amount;
        this->deposits.insert(this->deposits.begin()+this->count, amount);
        this->count++;
    }

    void Account::display(){
        cout << "name: " << this->name;
        cout << "Tax ID: " << this->taxID;
        cout << "Balance: " << this->balance;
    }
