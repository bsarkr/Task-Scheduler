#include <string>
#include <vector>
#include <map>
#include <iostream>
#include "schedule.h"

using namespace std;

void scheduler::addTask(const task& task)
{
    tasks.push_back(task);
}

void scheduler::setBuffer(int x)
{
    buffer = x;
}

void scheduler::setBuffer(int x) //the user can set teh buffer that surrounds a specific task.
{
    buffer = x;
}

bool scheduler::checkOverlappingDue(task newTask)
{
    for(int i = 0; i<tasks.size(); i++)
    {
        if(newTask.getDay()==tasks[i].getDay() && newTask.getMonth()==tasks[i].getMonth() && newTask.getYear() == tasks[i].getYear())
        {
            if(newTask.getTime()==tasks[i].getTime() || !(newTask.getTime()>tasks[i].getTime()-buffer && newTask.getTime()<tasks[i].getTime()+buffer))
            {
                //^ checks if newTask is between (tasks[i]-buffer or tasks[i]+buffer)
                //then negates logic to make sure that it is not the case...

                return true;
            }
        }
    }

    return false;
}


void scheduler::orderTasks()//by due date
{
    //use quicksort probably. I dont think I can use STL sort?

    //so I want to sort by date
    //might need a vector of dates.

    vector<string> dates;

    for(int i = 0; i<tasks.size(); i++)
    {
        dates.push_back(tasks[i].getDate());
    }

    
}






void scheduler::displayTasks()
{
    cout<<"\n================================\n";
    cout<<"\n================================\n";

    for (int i = 0; i<tasks.size(); i++) 
    {

        cout << "Task: " << tasks[i].name 
        << "\nDue: " << tasks[i].getDate()
        << "\nTime: "<<tasks[i].time
        <<"\nTime in 24hr minutes: "<<tasks[i].getTime()
        <<"\nMonth: "<<tasks[i].getMonth()
        <<"\nDay: "<<tasks[i].getDay()
        <<"\nYear: "<<tasks[i].getYear()
        <<endl;

        cout<<"\n================================\n";
    }
    cout<<"\n================================\n";
}

