// Lab Problem 8.1
// Wesley Casselman
// October 19th, 2023

#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);

int main(void)
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);

	cout << endl << countVowel(str) << endl;

	return 0;
}

int countVowel(string str)
{
	int vowels = 0;

	for (int i = 0; i < str.length(); i++)
	{
		switch (str[i])
		{
		case 'a': vowels++; break;
		case 'e': vowels++; break;
		case 'i': vowels++; break;
		case 'o': vowels++; break;
		case 'u': vowels++; break;
		case 'A': vowels++; break;
		case 'E': vowels++; break;
		case 'I': vowels++; break;
		case 'O': vowels++; break;
		case 'U': vowels++; break;
		default: break;
		}
	}
	
	return vowels;
}