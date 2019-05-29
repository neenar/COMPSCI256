#include <stdio.h>
#include <iostream>
#include "date.h"
#include "TVShow.h"
using namespace std;

int main(){
    //date b;
    //int year = b.getyear();
    //int date = b.getday();
    //string month = b.getmonth();
    //b.tostring(date, year, month );

    //TVShow a;
    //string name = a.getName();
    //double rating = a.getRating();
    //string showtime = a.getShowtime();
    //a.toString(name, rating, showtime);
    int option;

    do{
    cout << "Welcome! Would you like to enter a new (1)date object or a new (2)TV Show object? (enter 3 to quit): " << endl;

    cin >> option;

    if(option == 1){
         date b;
        cout << "Please enter the day: " << endl;
        int day;
        cin >> day;
        b.setday(day);

        cout << "Please enter the year: " << endl;
        int year;
        cin >> year;
        b.setyear(year);

        cout << "Please enter the month (month must be 3 letter format): " << endl;
        string month;
        cin >> month;
        b.setmonth(month);
        b.tostring(day, year, month);
    }else if(option == 2){
        TVShow a;
        cout << "Please enter the name of the tv show: " << endl;
        string name; 
        cin >> name;
        a.setName(name);
        cout << "Please enter the rating of the show out of 5.0: " << endl;
        double rating;
        cin >> rating;
        a.setRating(rating);
        cout << "Please enter the showtime of the show (in following format 00:00): " << endl;
        string showtime;
        cin >> showtime;
        a.setShowtime(showtime);
        a.toString(name, rating, showtime);
    }else if(option == 3){
        cout << "Goodbye! :)" << endl;
    }else{
        cout << "error, you entered an invalid option" << endl;
    }

    }while(option != 3);
}