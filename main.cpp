#include <iostream>
#include "Task.h"
#include "TaskList.h"

int main() {
    TaskList taskList;

    // Example usage
    Task task1("Complete assignment", "Finish project by the deadline", 2, "2024-12-31");
    Task task2("Read book", "Read a new novel", 1, "2024-10-15");
    Task task3("Go to gym", "Exercise for an hour", 3, "2024-10-20");

    taskList.addTask(task1);
    taskList.addTask(task2);
    taskList.addTask(task3);

    std::cout << "Tasks before sorting by priority:" << std::endl;
    taskList.displayTasks();

    taskList.sortByPriority();

    std::cout << "\nTasks after sorting by priority:" << std::endl;
    taskList.displayTasks();

    return 0;
}
