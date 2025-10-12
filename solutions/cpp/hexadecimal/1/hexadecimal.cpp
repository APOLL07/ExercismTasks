#include "hexadecimal.h"

namespace hexadecimal {

int hex_char_to_int(char c)
    {
        char lower_s = tolower(c);
        if(isdigit(lower_s))
        {
            return lower_s - '0';
        }
        else if(lower_s >= 'a' && lower_s <='f')
            return lower_s - 'a' + 10;
        else
            return -1;
    }
int convert(string str)
    {
        long long result = 0;
        for(char c : str)
            {
                int letter = hex_char_to_int(c);
                if(letter == -1)
                    return 0;
                result = result * 16 + letter;
                
            }
        return result;
    }

}  // namespace hexadecimal
