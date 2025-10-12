#include "trinary.h"

namespace trinary {

    int to_decimal(string str)
    {
        for(size_t i = 0; i < str.size();i++)
            {
                if(str[i] != '0' && str[i] != '1' && str[i] != '2')
                    return 0;
            }
        int sum = 0;
        int power = 0;
        for(int i = str.size() - 1;i >= 0;i--)
            {
                if(str[i] == '1')
                    sum +=1 * pow(3, power);
                else if(str[i] == '2')
                    sum += 2 * pow(3, power);
                power++;
            }
        return sum;
    }
// TODO: add your solution here

}  // namespace trinary
