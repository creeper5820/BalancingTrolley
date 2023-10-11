#pragma once
#include "iostream"
#include "queue"
#include "string"

#include "task.hh"

class Kernel {
private:
    std::queue<Task> task_queue_debug;
    std::queue<Task> task_queue_positive;
    std::queue<Task> task_queue_negtive;

public:
    Kernel() {}

    void Read_Detector();

    void Handle_Task();

    void Run();
};