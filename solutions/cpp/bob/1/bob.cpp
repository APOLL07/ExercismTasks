#include "bob.h"

namespace bob {

bool is_question(string str)
    {
        if(str.empty())
            return false;
        return str.back() == '?';
    }
bool is_silent(string str)
    {
        return str.empty() || std::all_of(str.begin(), str.end(), ::isspace);
    }
bool is_yelling(string str)
    {
        bool has_letters = false;
        for(char c : str)
            {
                if(isalpha(c))
                    has_letters = true;
                if(islower(c))
                    return false;
            }
        return has_letters;
    }
string hey(string str)
    {
        size_t start = str.find_first_not_of(" \t\n\r");
        if(start == string::npos)
            return "Fine. Be that way!";
        size_t end = str.find_last_not_of(" \t\n\r");
        string trimmed_str = str.substr(start, (end - start + 1));
        bool yelling = is_yelling(trimmed_str);
        bool question = is_question(trimmed_str);
        if(yelling && question)
            return "Calm down, I know what I'm doing!";
        if(yelling)
            return "Whoa, chill out!";
        if(question)
            return "Sure.";
        return "Whatever.";
    }

}  // namespace bob
