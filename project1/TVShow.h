#ifndef TVSHOW_H
#define TVSHOW_H

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class TVShow{
private:
    string name;
    double rating;
    string showtime;

public:
    TVShow(string s_name, double s_rating, string s_time);

    TVShow();

    string getName();

    void setName(string s_name);

    double getRating();

    void setRating(double s_rating);

    string getShowtime();

    void setShowtime(string s_time);

    void toString(string name, double rating, string showtime);
    };

    #endif