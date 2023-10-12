#include "./MicroKernel/system/system.hh"
#include "./MicroKernel/user/test_detector.hh"
#include "iostream"

Kernel test;
Utility utility;

int main()
{
    test.Push_Detector(std::make_unique<Test_Detector>());

    while (1) {
        utility.Delay();
        utility.Log(".");
        test.Theard();
    }

    return 0;
}