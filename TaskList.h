#ifndef TASKLIST_H
#define TASKLIST_H

#include "Task.h"
#include <vector>

class TaskList {
private:
    std::vector<Task> tasks;

public:
    // Method to add a task to the list
    void addTask(Task task);

    // Method to delete a task from the list
    void deleteTask(int index);

    // Method to mark a task as completed
    void markTaskCompleted(int index);

    // Method to display all tasks in the list
    void displayTasks();

    // Method to sort tasks by priority
    void sortByPriority();

    // Method to sort tasks by due date
    void sortByDueDate();
};

#endif
