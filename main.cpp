/*
Dynamic Scheduler
Created by Bilash Sarkar
*/

/*
Plan of attack

I want a function to take input(s)

*/

/*
let me assume that i'm pulling data from a given list (we'll get this list later when we get user input...)

//I want to make this as if my Google Calander BRUH

*******lets say the list, looks like this (a list of multiple inputs of this...): task name, due date, time allocation, breaks?********** 
//this could be a class in itself?

Set up my code to ensure that I can add items to the map in the future.

breaks would ask if they want to take breaks during the assignment. if yes, they can choose how long of a break they want and how many.
I also want to ask if the task can be seperated into parts (lets say if we can get a little done now, work on something like a meeting
then more done later)

(I want to add things like category and difficulty later? difficulty could be used to implement ai? rofl)


****************
"Day Settings"
Then, I also want there to be a "settings" option s/t you can set "available to work" time range.
This function would only work for a specific day of the week
This is like a bedtime thing or what not
We can change this for any day.

"Week Settings"
option to set available time to work for a whole week


NO INPUT LETS SAY IT =-1

*/

#include <iostream>
#include "scheduler.cpp"

using namespace std;

int main()
{
    //creating tasks
    task testTask1("Test1", "1-5-2025", "11:30"); //11:30 AM
    task testTask2("Test2", "3-5-2025", "17:15"); //5:15 PM
    task testTask3("Test3", "2-7-2025");

    //creating a schedule OBJECT first... dumb dumb
    scheduler schedule1;

    //now we can add a task to our first schedule.
    schedule1.addTask(testTask1);
    schedule1.addTask(testTask2);
    schedule1.addTask(testTask3);

    schedule1.displayTasks();
}