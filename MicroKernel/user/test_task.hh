#pragma once
#include "../system/task.hh"
#include "../system/utility.hh"

class Test_Task : public Task {
private:
    Utility utility_;
    float temperture_;
    float factor_;
    std::string output_;

public:
    using Task::Task;

    Test_Task(int task_level)
        : Task(task_level)
    {
        temperture_ = 24.7;
        factor_ = 0.84;
    }

    void Handler()
    {
        output_ = "The expected value is " + std::to_string(temperture_ * factor_);
        utility_.Log("Test handler works");
        utility_.Log(output_);
    }
};