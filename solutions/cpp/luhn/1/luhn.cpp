#include "luhn.h"

namespace luhn {
bool valid(string cardNumber)
{

    cardNumber.erase(std::remove(cardNumber.begin(), cardNumber.end(), ' '), cardNumber.end());
                if (cardNumber.length() <= 1) 
            return false;
    for (char c : cardNumber)
    {

        
        if (!isdigit((int)c))
            return 0;
    }
    bool flag = false;
    for (int i = cardNumber.size() - 1; i >= 0; i--)
    {
        if (flag){
            int digit = cardNumber[i] - '0';
            digit *= 2;
        if (digit > 9)
            digit -= 9;

        cardNumber[i] = digit  + '0';

        }
                    flag = !flag;
    }
    int sum = 0;
    for (auto elem : cardNumber)
    {
        sum += elem - '0';
    }
    if (sum % 10 == 0)
        return 1;
    else
        return 0;
}
// TODO: add your solution here

}  // namespace luhn