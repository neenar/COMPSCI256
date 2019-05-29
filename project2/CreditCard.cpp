#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
#include "CreditCard.h"
using namespace std;

    void CreditCard::doCharge(string name, double amount){
        setBalance(getBalance()-amount);
        this->charges.insert(this->charges.begin()+count, name);
        count++;

        this->withdraws.insert(this->withdraws.begin()+this->numWithDraws, amount);
        this->numWithDraws++;
    }

    void CreditCard::makePayment(double amount){
    setBalance(getBalance()+amount);
        this->deposits.insert(this->deposits.begin()+count, amount);
        count++;
    }

    CreditCard::CreditCard(){
    setName("Neena");
    setTaxID(123456789);
    setBalance(100.00);
    }
    
    CreditCard::CreditCard(string aname, long ataxID, double abalance){
        setName(aname);
        setTaxID(ataxID);
        setBalance(abalance);
    }

    void CreditCard::display(){
        cout << "reasons for charges: ";
        for (vector<string>::reverse_iterator i = charges.rbegin(); 
        i != charges.rend(); ++i ){
            cout << *i << " | ";
        }

        cout << endl << " Charges: " ;
        for (vector<double>::reverse_iterator i = withdraws.rbegin(); 
        i != withdraws.rend(); ++i ){
            cout << "$" << *i  << " | ";
        } 

        cout << endl << "Credit card payments: ";
         for (vector<double>::reverse_iterator i = deposits.rbegin(); 
        i != deposits.rend(); ++i ){
            cout << "$" << *i  << " | ";
        } 
        cout<< endl << endl;
    }