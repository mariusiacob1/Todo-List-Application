#ifndef TODOLIST_H
#define TODOLIST_H

#include "Task.h"
#include <vector>
#include <string>
using namespace std;

class ToDoList {
private:
    vector<Task> tasks; // list of tasks

public:
    void addTask(const string& description); // add a new task to the list
    void markTaskAsCompleted(int index); // mark a task as completed
    void deleteTask(int index); // delete a task from the list
    void deleteAllTasks(); // delete all tasks from the list
    void displayTasks(); // display all tasks
};

#endif // TODOLIST_H