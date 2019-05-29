#include <stdio.h>
#include <iostream>
#include "TVShow.h"
using namespace std;

string name;
double rating;
string showtime;

TVShow::TVShow(string s_name, double s_rating, string s_time){
    name = s_name;
    rating = s_rating;
    showtime = s_time;
}

TVShow::TVShow(){
    name = "Survivor";
    rating = 4.9;
    showtime = "8:00";
}

string TVShow::getName(){
    return name;
}

void TVShow::setName(string s_name){
    name = s_name;
}

double TVShow::getRating(){
    return rating;
}

void TVShow::setRating(double s_rating){
    if(s_rating <= 5.0 && s_rating >= 0.0){
            rating = s_rating;
    }else{
        cout << "error, you entered an invalid rating" << endl;
    }
}

string TVShow::getShowtime(){
    return showtime;
}

void TVShow::setShowtime(string s_time){
    showtime = s_time;
}

void TVShow::toString(string name, double rating, string showtime){
    cout << "The TV Show  " << name << " has a rating of " << rating <<
    " out of 5.0 " <<  "and is on at " << showtime << "." << endl;
}