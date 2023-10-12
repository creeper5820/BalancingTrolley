#pragma once

#include "stdbool.h"
#include "memory"

#include "task.hh"

enum Detector_Status {
    run,
    stop
};

class Detector {
private:
    int detector_status = run;

public:
    virtual std::unique_ptr<Task> Run() = 0;

    Detector()
    {
        Start();
    }

    void Stop()
    {
        detector_status = stop;
    }

    void Start()
    {
        detector_status = run;
    }

    bool Check()
    {
        if (detector_status == run)
            return true;
        else
            return false;
    }

    template <class Task_User_Template>
    std::unique_ptr<Task> Make_Task(Task_User_Template task_user)
    {
        return std::make_unique<Task_User_Template>(task_user);
    }
};