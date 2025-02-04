#include <string>
#include <vector>
#include <map>
#include <iostream>
#include "task.cpp"

using namespace std;


/* 
    this  has to be part of the scheduler class bc that handles the actual scheduling
    //asks if user is okay with an inturuption (meeting/end of day schedule) to complete the task. Set equal to true automatically
    bool allowInturuption = true;


    also i can put break time function in the scheduler.
    this would be able to break every task down into multiple parts to implement a user set break period. 
    follow pomodoro type breaks
*/


class scheduler //handles the scheduling of tasks
{

    private:
    //storing a vector of tasks
    vector<task> tasks;

    int buffer;

    public: 
    
    //adding a task to the private vector so we can store and access it later.
    void addTask(const task& task);

    //so I need a function to check if overlapping due time/date
    //but I also want to add a user settable buffer so like maybe it "overlaps" if the date of one due task is too close to another due task
    //or maybe just a quick warning...

    void setBuffer(int x); //in minutes, like everything else.

    bool checkOverlappingDue(task newTask);//makeing sure that the time's and date are diff
    //^need to issue a warning if this occurs. This might have to be through the GUI...

    void orderTasks();//reordering tasks to be from closest due date to latest due date.



    //display function for testing
    void displayTasks();

};