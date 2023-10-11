#include "iostream"
#include "./MicroKernel/system/system.hh"
#include "./MicroKernel/user/test_detector.hh"

Kernel test;
Test_Detector test_detector;
Utility utility;

int main()
{
    test_detector.Start();
    return 0;
}