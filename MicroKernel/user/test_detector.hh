#pragma once
#include "../system/detector.hh"
#include "test_task.hh"

class Test_Detector : public Detector {
private:
    int count_ = 0;

public:
    std::unique_ptr<Task> Run()
    {
        if (count_ == 5) {

            count_ = 0;

            return Make_Task(Test_Task(task_debug));
        }

        count_++;
        return nullptr;
    }
};