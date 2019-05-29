#include <stdio.h>
#include <iostream>
#include "Account.h"
#include "Checking.h"
#include "Savings.h"
#include "CreditCard.h"
using namespace std;

int main(){
    Checking A;
    Savings B;
    CreditCard C;
    bool loop = true;
    while (loop == true){
        cout << "Checkings Balance: $" << A.getBalance() << endl;
        cout << "Savings Balance: $" << B.getBalance() << endl;
        cout << "Credit Card Balance: $" << C.getBalance() << endl;

        cout << "1. Savings Deposit" << endl;
        cout << "2. Savings withdrawal" << endl;
        cout << "3. Checking Deposit" << endl;
        cout << "4. Write A Check" << endl;
        cout << "5. Credit Card Payment" << endl;
        cout << "6. Make A Charge" << endl;
        cout << "7. Display Savings" << endl;
        cout << "8. Display Checking" << endl;
        cout << "9. Display Credit Card" << endl;
        cout << "0. Exit" << endl;

        int option;
        cin >> option;

        string name;
        double amount;
        int checknum;

        switch(option){

        case 1:
        cout << "please enter an amount to deposit: ";
        
        cin >> amount;
        B.makeDeposit(amount);
        break;

        case 2:
        cout << "please enter an amount you would like to withdraw: ";
        cin >> amount;
        B.DoWithdraw(amount);
        break;

        case 3:
        cout << "please enter an amount to deposit: ";
        cin >> amount;
        A.makeDeposit(amount);
        break;
         
        case 4:
        cout << "please enter a check number: ";
        cin >> checknum;
        cout << "please enter the amount you would like to write the check for: ";
        cin >> amount;
        A.WriteCheck(checknum, amount);
        break;

        case 5:
        cout << "please enter the amount for your payment: ";
        cin >> amount;
        C.makePayment(amount);
        break;

        //make a charge
        case 6:
        cout << "please enter the reason for the charge: ";
        cin >> name;
        cin.clear();
        cout << "please enter the amount you would like to charge: ";
        cin >> amount;
        C.doCharge(name, amount);
        break;

        //display savings
        case 7:
        B.display();
        break;
        
        //display checking 
        case 8:
        A.display();
        break;

        //display credit card
        case 9:
        C.display();
        break;

        case 0:
        loop = false;
        break;
        }
    }
}