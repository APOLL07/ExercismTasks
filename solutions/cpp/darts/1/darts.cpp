#include "darts.h"

namespace darts {
int score(double x, double y)
    {
        double d = sqrt(x * x + y * y);
        if(d <= 1.0)
            return 10;
        else if(d <= 5.0)
            return 5;
        else if (d <=10.0)
            return 1;
        return 0;
    }
// TODO: add your solution here

}  // namespace darts
