#include "rotational_cipher.h"
#include <string>

namespace rotational_cipher {

std::string rotate(std::string str, int key)
{
    std::string newStr = "";
    
    // 💡 1. Нормалізація ключа для обробки негативних значень:
    // Це гарантує, що actualKey буде в діапазоні [0, 25]
    int actualKey = key % 26;
    if (actualKey < 0) {
        actualKey += 26;
    }

    // 💡 2. Виправлення: використання size_t або auto для ітератора циклу
    for(size_t i = 0; i < str.length(); i++)
    {
        char current_char = str[i];

        if (current_char >= 'A' && current_char <= 'Z')
        {
            char base = 'A';
            int pos = current_char - base;
            
            // Використовуємо нормалізований ключ
            int newPos = (pos + actualKey) % 26; 
            
            char newLetter = newPos + base;
            newStr += newLetter;
        }
        else if(current_char >= 'a' && current_char <= 'z')
        {
            char base = 'a';
            int pos = current_char - base;
            
            // Використовуємо нормалізований ключ
            int newPos = (pos + actualKey) % 26; 
            
            char newLetter = newPos + base;
            newStr += newLetter;
        }
        else 
        {
            newStr += current_char; // Не-літери залишаємо без змін
        }
    }
    
    // 💡 3. Виправлення: оператор return ПОВИНЕН бути всередині функції
    return newStr;
} 
// Кінець namespace rotational_cipher
}