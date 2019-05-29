#ifndef DATE_H
#define DATE_H

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class date{
private:
    //bool validDay;
    //bool validYear;
    int day;
    int year;
    string month;

public:
    date(int daynum,int yearnum,string monthname);

    date();

    int getday();

    void setday(int newday);

    int getyear();

    void setyear(int newyear);

    string getmonth();

    void setmonth(string newmonth);

    void tostring(int day, int year, string month);

    int getMonthNumber();

    void printdate(int i);
    };

    #endif