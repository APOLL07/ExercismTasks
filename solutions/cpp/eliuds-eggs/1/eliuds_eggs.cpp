#include "eliuds_eggs.h"

namespace chicken_coop {

int positions_to_quantity(int number)
    {
        int counter = 0;
        while(number > 0)
            {
                if(number % 2 == 1)
                    counter++;
                number /=2;
            }
        return counter;
    }

}  // namespace chicken_coop
