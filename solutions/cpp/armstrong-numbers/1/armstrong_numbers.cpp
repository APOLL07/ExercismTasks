#include "armstrong_numbers.h"

namespace armstrong_numbers {

    bool is_armstrong_number(int number){
        string newNumber = to_string(number);
        int stepen = newNumber.length();
        int sum = 0;
        for(auto c : newNumber) {
            sum += pow(c - '0', stepen);
            }
            return sum == number;
    }
}  // namespace armstrong_numbers
