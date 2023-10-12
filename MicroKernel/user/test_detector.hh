#pragma once
#include "../system/detector.hh"
#include "test_task.hh"

class Test_Detector : public Detector {
private:
    int count_ = 0;

public:
    std::unique_ptr<Task> Run()
    {
        count_ = rand() % 200;

        if (count_ < 50) {
            return Make_Task(Test_Task(task_debug));
        }

        return nullptr;
    }
};