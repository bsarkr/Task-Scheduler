#include <string>
#include <vector>
#include <iostream>
#include "task.h"

using namespace std;

int task::getTime() //returns the time in minutes. Must be in 1440 total daily minutes. Format: "00:00"
{
    int hour;
    int minute;
    int totalMins;

    //get : position
    int colonPos = time.find(':');

    //stoi(string)

    hour = stoi(time.substr(0, colonPos));
    minute = stoi(time.substr(colonPos+1));

    totalMins = hour*60 + minute;

    return totalMins; //returns the 24hr "minute" time of DUE
}

string task::getDate()
{
    return dueDate;
}

int task::getMonth()
{
    int dashPos1 = dueDate.find('-');
    int month = stoi(dueDate.substr(0,dashPos1));
    return month;
}

int task::getDay()
{
    int dashPos1 = dueDate.find('-');
    string dayAndYear = dueDate.substr(dashPos1+1);
    int dashPos2 = dayAndYear.find('-');
    int day = stoi(dueDate.substr(dashPos1+1,dashPos2));
    return day;
}

int task::getYear()
{
    int dashPos1 = dueDate.find('-');
    string dayAndYear = dueDate.substr(dashPos1+1);
    int dashPos2 = dayAndYear.find('-');
    int year = stoi(dayAndYear.substr(dashPos2+1));
    return year;
}