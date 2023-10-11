#pragma once
#include "../system/task.hh"
#include "../system/utility.hh"

class Test_Task : public Task {
private:
    Utility utility;
    float temperture;
    float factor;
    std::string output;

public:
    Test_Task()
    {
        temperture = 24.7;
        factor = 0.84;
    }

    void Handler()
    {
        output = "The expected value is " + std::to_string(temperture * factor);
        utility.Log("Test handler works");
        utility.Log(output);
    }
};