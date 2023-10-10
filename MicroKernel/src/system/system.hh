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
    void Log(std::string str)
    {
        std::cout << str << '\n';
        return;
    }

    void Read_Detector();

    void Handle_Tasks();

    void Run();
};