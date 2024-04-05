#include <iostream>
#include "ToDoList.h"
using namespace std;

int main() {
    ToDoList toDoList; // create a to-do list object 

    // display the menu
    // cout << "Menu:" << endl;
    // cout << "1. Add a new task" << endl;
    // cout << "2. Mark a task as completed" << endl;
    // cout << "3. Delete a task" << endl;
    // cout << "4. Delete all tasks" << endl;
    // cout << "5. Display all tasks" << endl;
    // cout << "6. Exit" << endl;

    int choice;
    do {
        // display the menu
        cout << "Menu:" << endl;
        cout << "1. Add a new task" << endl;
        cout << "2. Mark a task as completed" << endl;
        cout << "3. Delete a task" << endl;
        cout << "4. Delete all tasks" << endl;
        cout << "5. Display all tasks" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string description;
                cout << "Enter the description of the task: ";
                cin.ignore();
                getline(cin, description);
                toDoList.addTask(description);
                break;
            }
            case 2: {
                int index;
                cout << "Enter the index of the task to mark as completed: ";
                cin >> index;
                toDoList.markTaskAsCompleted(index);
                break;
            }
            case 3: {
                int index;
                cout << "Enter the index of the task to delete: ";
                cin >> index;
                toDoList.deleteTask(index);
                break;
            }
            case 4: {
                toDoList.deleteAllTasks();
                cout << "All tasks deleted!" << endl;
                break;
            }
            case 5:
                toDoList.displayTasks();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}