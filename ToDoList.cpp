#include "ToDoList.h"
#include <iostream>
using namespace std;

void ToDoList::addTask(const string& description) {
    Task newTask = {description, false}; // create a new task
    tasks.push_back(newTask); // add the new task to the list
    cout << "Task added!" << endl;
    cout << endl; // add a new line
}

void ToDoList::markTaskAsCompleted(int index) {
    if (tasks.empty()) {
        cout << "No tasks to mark as completed!" << endl;
    } else if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid index!" << endl;
    }
    cout << endl; // add a new line
}

void ToDoList::deleteTask(int index) {
    if (tasks.empty()) {
        cout << "No tasks to delete!" << endl;
    } else if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
        cout << "Task deleted!" << endl;
    } else {
        cout << "Invalid index!" << endl;
    }
    cout << endl; // add a new line
}

void ToDoList::deleteAllTasks() {
    if (tasks.empty()) {
        cout << "No tasks to delete!" << endl;
    } else {
        tasks.clear();
        cout << "All tasks deleted!" << endl;
    }
    cout << endl; // add a new line
}

void ToDoList::displayTasks() {
    if (tasks.empty()) {
        cout << "No tasks to display!" << endl;
    } else {
        cout << "Tasks:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << i << ". ";
            if (tasks[i].completed) {
                cout << "[X] ";
            } else {
                cout << "[ ] ";
            }
            cout << tasks[i].description << endl;
        }
    }
    cout << endl; // add a new line
}