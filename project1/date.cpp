#include <stdio.h>
#include <iostream>
#include <string>
#include "date.h"
using namespace std;

//bool validDay = true;
//bool validYear = true;
int day;
int year;
string month;


date::date(int daynum, int yearnum, string monthname){
    day = daynum;
    year = yearnum;
    month = monthname;
}

date::date(){
    day = 12;
    year = 2019;
    month = "Jan";
}

    int date::getday(){
        return day;
    }

    void date::setday(int newday){
        if (newday >= 1 && newday <= 31){
            day = newday;
        }else{
            cout << "error, the day you entered is not a valid date" << endl;
            //validDay = false;
        }
        
    }

    int date::getyear(){
        return year;
    }

    void date::setyear(int newyear){
        if(newyear > 1970 && newyear < 2099 ){
            year = newyear;
        }else{
            cout << "error, the year you entered is not a valid year" << endl;
            //validYear = false;
        }
    }

    string date::getmonth(){
        return month;
    }

    void date::setmonth(string newmonth){
        month = newmonth;
    }

    void date::tostring(int day, int year, string month){
        cout << "please enter a number between 0 and 3 for the format of your date: " << endl;
        int i;
        cin >> i;
        cout << "The Date is: ";
        date::printdate(i);
        cout << endl;
    }

    int date::getMonthNumber(){
        if (month == "Jan" || month == "jan" || month == "JAN"){
            return 1;
        }else if(month == "Feb" || month == "feb" || month == "FEB"){
            return 2;
        }else if(month == "Mar" || month == "mar" || month == "MAR"){
            return 3;
        }else if(month == "Apr" || month == "apr" || month == "APR"){
            return 4;
        }else if(month == "May" || month == "may" || month == "MAY"){
            return 5;
        }else if(month == "Jun" || month == "jun" || month == "JUN"){
            return 6;
        }else if(month == "Jul" || month == "jul" || month == "JUL"){
            return 7;
        }else if(month == "Aug" || month == "aug" || month == "AUG"){
            return 8;
        }else if(month == "Sep" || month == "sep" || month == "SEP"){
            return 9;
        }else if(month == "Oct" || month == "oct" || month == "OCT"){
            return 10;
        }else if(month == "Nov" || month == "nov" || month == "NOV"){
            return 11;
        }else if(month == "Dec" || month == "dec" || month == "DEC"){
            return 12;
        }else{
            cout << "error, invalid month" << endl;
        }
    }

    void date::printdate(int i){
        //int i;
         if(i == 0){ 
            cout << month << " " << day << ", " << year << endl;
         }else if(i == 1){
            cout << day << " " << month << " " << year << endl;
         }else if(i == 2){
            cout << date::getMonthNumber() << "-" << day << "-" << year << endl;
         }else if(i == 3){
            cout << date::getMonthNumber() << "/" << day << "/" << year << endl;
         }else{
             cout << "error, you entered an invalid option." << endl;
         }
           
        }
    

