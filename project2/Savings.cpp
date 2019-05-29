#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
#include "Savings.h"
using namespace std;

    void Savings::DoWithdraw(int amount){
        setBalance(getBalance() - amount);
        this->withdraws.insert(this->withdraws.begin()+this->numWithDraws, amount);
        this->numWithDraws++;
    }

    Savings::Savings(){
        setName("Neena");
        setTaxID(123456789);
        setBalance(100.00);
    }

    Savings::Savings(string aname, long ataxID, double abalance){
        setName(aname);
        setTaxID(ataxID);
        setBalance(abalance);
    }

    void Savings::display(){

        cout << "Withdraws from savings: ";
         for (vector<double>::reverse_iterator i = withdraws.rbegin(); 
        i != withdraws.rend(); ++i ){
             cout << "$" << *i << " | ";
        }

        cout << endl << "Deposits into checking: ";
        for (vector<double>::reverse_iterator i = deposits.rbegin(); 
        i != deposits.rend(); ++i ){
            cout << "$" << *i << " | ";
        }
        cout << endl << endl;
    }
