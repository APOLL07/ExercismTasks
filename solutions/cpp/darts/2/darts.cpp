#include "darts.h"

namespace darts {
int score(double x, double y)
    {
        double d = x * x + y * y;
        if(d <= 1)
            return 10;
        else if(d <= 25)
            return 5;
        else if (d <=100)
            return 1;
        return 0;
    }
// TODO: add your solution here

}  // namespace darts
