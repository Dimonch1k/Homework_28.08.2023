#pragma once
#include <iostream>
#include <string>
using namespace std;


class String
{
private:
	string crossString;

	string str1;
	string str2;

public:
	String();
	String(string str1_, string str2_);

	bool IsEmpty();

	void setCrossString(string cross);
	string getCrossString();
};

