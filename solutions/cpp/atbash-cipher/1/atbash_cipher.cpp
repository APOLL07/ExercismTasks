#include "atbash_cipher.h"

namespace atbash_cipher {

 char cipher(char letter)
{
	return 'a' + ('z' - letter);
}
string formattedStr(string str)
{
	int counter = 0;
	string formatted_string = "";
	for (char c : str)
	{
		if (counter > 0 && counter % 5 == 0)
		{
			formatted_string += " ";
		}
		formatted_string += c;
		counter++;
	}
	return formatted_string;
}
string encode(string text)
{
	string encoded = "";
	for (char c : text) {
		c = tolower(c);
		if (isalpha(c) != 0)
			encoded += cipher(c);
		else if (isdigit(c))
			encoded += c;
	}
	return formattedStr(encoded);
}
string decode(string text)
{
	string decoded = "";
	for (char c : text)
	{
		c = tolower(c);
			if (isalpha(c) != 0)
				decoded += cipher(c);
			else if (isdigit(c))
				decoded += c;
	}
	return decoded;
}

}
