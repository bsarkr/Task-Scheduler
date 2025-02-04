#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

class task //basic task
{
    public:
    string name;
    string dueDate; //in 00-00-0000 format
    string time; //00:00, 24 hour clock format 

    task(const string& taskName, const string& taskDue, const string& dueTime)
    {
        name = taskName;
        dueDate = taskDue;
        time = dueTime;
    }

    task(const string& taskName, const string& taskDue) //if no time set, then automatically set time due to end of day
    {
        name = taskName;
        dueDate = taskDue;
        time = "23:59";
    }

    //need to "get time to return an int"
    int getTime();

    //need to get date. 
    string getDate(); //this one gets full date;

    int getMonth(); //this one gets month only as int

    int getDay(); //day only as int

    int getYear(); //year only as int
};