#include "raindrops.h"
#include <string>

// Строка using namespace std; УДАЛЕНА

namespace raindrops {
    std::string convert(int number)
    {
        std::string str;
        
        if (number % 3 == 0) {
            str += "Pling";
        }
        if (number % 5 == 0) {
            str += "Plang";
        }
        if (number % 7 == 0) {
            str += "Plong";
        }
        
        if (str.empty()) {
            return std::to_string(number);
        }
        
        return str;
    }
} // namespace raindrops