#include "reverse_string.h"

namespace reverse_string {
string reverse_string(string str)
{
    if (str.empty()) 
        return str;

    string reversed_str = "";
    

    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed_str += str[i];
    }
    return reversed_str;
}

}  // namespace reverse_string
