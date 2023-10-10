#pragma once

#include "stdbool.h"

enum Detector_Status {
    run,
    stop
};

class Detector {
private:
    int detector_status = stop;

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

    void Delay_Thread()
    {
        if (!Check())
            return;

        Run();
    }
};