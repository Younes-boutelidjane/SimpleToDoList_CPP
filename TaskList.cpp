#include "TaskList.h"
#include <algorithm>
#include <iostream>

void TaskList::addTask(Task task) {
    tasks.push_back(task);
}

void TaskList::deleteTask(int index) {
    tasks.erase(tasks.begin() + index);
}

void TaskList::markTaskCompleted(int index) {
    tasks[index].markCompleted();
}

void TaskList::displayTasks() {
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i].getName() << std::endl;
    }
}

void TaskList::sortByPriority() {
    std::sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
        return a.getPriority() < b.getPriority();
    });
}

void TaskList::sortByDueDate() {
    std::sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
        return a.getDueDate() < b.getDueDate();
    });
}
