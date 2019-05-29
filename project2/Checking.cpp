#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Checking.h"
#include "Account.h"
using namespace std;


void Checking::WriteCheck(int checknum, double amount){
        setBalance(getBalance()-amount);
        this->checks.insert(this->checks.begin()+this->numchecks, checknum);
        this->numchecks++;

        this->withdraws.insert(this->withdraws.begin()+this->numWithDraws, amount);
        this->numWithDraws++;
        //may have to change count
}

Checking::Checking(){
    setName("Neena");
    setTaxID(123456789);
    setBalance(100.00);

}

Checking::Checking(string aname, long ataxID, double abalance){

    setName(aname);
    setTaxID(ataxID);
    setBalance(abalance);
}

void Checking::display(){
    cout<< "Check numbers: ";
    for (vector<int>::reverse_iterator i = checks.rbegin(); 
        i != checks.rend(); ++i ){
            cout << *i << " | ";
        }

        cout << endl << "Deposits into checking: ";
    for (vector<double>::reverse_iterator i = deposits.rbegin(); 
        i != deposits.rend(); ++i ){
            cout << "$" << *i << " | ";
        }

        cout << endl << "Withdraws from Checking: ";
    for (vector<double>::reverse_iterator i = withdraws.rbegin(); 
        i != withdraws.rend(); ++i ){
            cout << "$" << *i << " | ";
        }
        cout<< endl << endl;

}
