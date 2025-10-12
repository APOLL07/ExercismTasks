#pragma once
#include <cctype>
#include <string>
using namespace std;
namespace atbash_cipher {

char cipher(char letter);
string formattedStr(string str);
string encode(string text);
string decode(string text);
}  // namespace atbash_cipher
