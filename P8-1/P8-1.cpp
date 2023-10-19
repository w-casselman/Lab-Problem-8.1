// Lab Problem 8.1
// Wesley Casselman
// October 19th, 2023

#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str);

int main(void)
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);

	cout << endl << countCharacter(str) << endl;

	return 0;
}

int countCharacter(string str)
{
	return str.length();
}