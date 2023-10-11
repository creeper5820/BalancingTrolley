#include "iostream"
#include "./MicroKernel/system/system.hh"
#include "./MicroKernel/user/test_detector.hh"

Kernel test;
Test_Detector test_detector;
Utility utility;

int main()
{
    while (1) {
        for (int i = 0; i < INT_MAX; i++)
            ;

        test_detector.Run();
        auto task = test_detector.Get_Task();
        if (task) {
            task->Handler();
            task = nullptr;
            test_detector.Empty_Task();
        }

        utility.Log("None Tasks");
    }

    return 0;
}