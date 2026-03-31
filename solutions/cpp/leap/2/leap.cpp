#include "leap.h"

namespace leap {
bool is_leap_year(int year)
    {
       return (year % 400 == 0) ? true : ((year % 100 == 0) ? false : ((year % 4 == 0) ? true : false));
    }
// TODO: add your solution here

}  // namespace leap
