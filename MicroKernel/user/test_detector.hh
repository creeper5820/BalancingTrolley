#pragma once
#include "../system/detector.hh"
#include "test_task.hh"

class Test_Detector : public Detector {
private:
    int count = 0;

public:
    void Run()
    {
        if (count == 5) {
            count = 0;

            auto task_temp = Test_Task();
            Set_Task(&task_temp);
        }

        count++;
    }
};