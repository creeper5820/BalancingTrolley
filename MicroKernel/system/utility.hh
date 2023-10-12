#include "iostream"
#include "string"

class Utility {
public:
    void Log(std::string str)
    {
        std::cout << str << '\n';
    }

    void Delay()
    {
        for (int i = 0; i < 0xfffffff / 2; i++)
            ;
    }
};