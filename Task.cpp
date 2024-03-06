#include "Task.h"

Task::Task(std::string name, std::string description, int priority, std::string dueDate)
    : name(name), description(description), priority(priority), dueDate(dueDate), completed(false) {}

std::string Task::getName() const {
    return name;
}

std::string Task::getDescription() const {
    return description;
}

int Task::getPriority() const {
    return priority;
}

std::string Task::getDueDate() const {
    return dueDate;
}

bool Task::isCompleted() const {
    return completed;
}

void Task::markCompleted() {
    completed = true;
}
