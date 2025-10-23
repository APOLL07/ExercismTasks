#include "reverse_string.h"

namespace reverse_string {
string reverse_string(string str)
{
    if (str.empty()) 
        return str;

    string reversed_str = "";
    

    for (size_t i = 0; i < str.length();i++)
    {
        reversed_str = str[i] + reversed_str;
    }
    return reversed_str;
}

}  // namespace reverse_string
