// Task.h

#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string name;
    std::string description;
    int priority;
    std::string dueDate;
    bool completed;

public:
    // Constructor
    Task(std::string name, std::string description, int priority, std::string dueDate);

    // Getter methods (marked as const)
    std::string getName() const;
    std::string getDescription() const;
    int getPriority() const;
    std::string getDueDate() const;
    bool isCompleted() const;

    // Setter method
    void markCompleted();
};

#endif
