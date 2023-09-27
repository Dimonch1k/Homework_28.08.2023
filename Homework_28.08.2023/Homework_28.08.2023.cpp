#include <iostream>
using namespace std;


#include "String.h"


void FindCrossString(string str1, string str2)
{
	String string(str1, str2);

	if (string.IsEmpty() == true)
	{
		cout << "There are no indentical symbols in two strings!!!\n\n\n";
		return;
	}
	cout << "\n\tIdentical symbols in two strings are: \"" << string.getCrossString() << "\"\n\n\n";
}

int main()
{
	cout << "PROGRAM THAT FIND CROSS DISPLAY CROSS STRING BETWEEN TWO STRINGS!\n\n";


	string str1;
	string str2;

	cout << "\tInput 1 string: "; cin >> str1;
	cout << "\tInput 2 string: "; cin >> str2;

	FindCrossString(str1, str2);
}