#pragma once
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;
namespace bob {
bool is_question(string srt);
bool is_silent(string str);
bool is_yelling(string str);
string hey(string str);

}  // namespace bob
