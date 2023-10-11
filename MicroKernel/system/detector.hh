#pragma once

#include "stdbool.h"

#include "task.hh"

enum Detector_Status {
    run,
    stop
};

class Detector {
private:
    int detector_status = stop;
    Task* ptask = nullptr;

public:
    virtual void Run() = 0;

    Detector()
    {
        Stop();
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

    void Set_Task(Task* _ptask)
    {
        ptask = _ptask;
    }

    void Delay_Thread()
    {
        if (!Check())
            return;

        Run();
    }

    Task* Get_Task()
    {
        if (ptask == nullptr)
            return nullptr;
        else {
            return ptask;
        }
    }

    void Empty_Task()
    {
        ptask = nullptr;
    }
};