#include "rotational_cipher.h"

namespace rotational_cipher {

string rotate(string str, int key)
    {
        string newStr = "";
        for(size_t i = 0;i < str.length();i++)
            {
                if(str[i] >= 'A' && str[i]<= 'Z')
                {
                    int pos = str[i] - 'A';
                    int newPos = (pos + key) % 26;
                    char newLetter = newPos + 'A';
                    newStr += newLetter;
                }
                else if(str[i] >= 'a' && str[i] <= 'z')
                {
                    int pos = str[i] - 'a';
                    int newPos = (pos + key) % 26;
                    char newLetter = newPos + 'a';
                    newStr += newLetter;
                }
                else 
                    newStr += str[i];
            }
        return newStr;
    }
    
}  // namespace rotational_cipher
