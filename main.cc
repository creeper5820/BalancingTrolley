#include "iostream"
#include "./MicroKernel/system/system.hh"
#include "./MicroKernel/user/test_detector.hh"

Kernel test;
Test_Detector test_detector;
Utility utility;

int main()
{
    test.Push_Detector(&test_detector);

    while (1) {
        utility.Delay();
        utility.Log(".");
        test.Theard();
    }

    return 0;
}