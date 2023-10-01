#include "pid.hh"
#include "iostream"

void Print_Test()
{
    std::cout << "This is Test!" << '\n';
}

class PID_Controller {

private:
    /**
     *  Some values about output and input
     */
    double speed_set;
    double speed_current;
    double speed_offset;
    double speed_offset_last;

    /**
     * The factors of PID
     */
    double factor_p;
    double factor_i;
    double factor_d;
};