#ifndef TASK_H
#define TASK_H

#include <string>
using namespace std;

struct Task {
    string description; // description of the task
    bool completed; // true if the task is completed, false otherwise
};

#endif // TASK_H