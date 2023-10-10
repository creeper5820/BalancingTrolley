#include "./system/system.hh"
#include "iostream"

Kernel test;

int main()
{
    while (1) {
        test.Log("Hello World!");
        test.Run();
        return 0;
    }
}