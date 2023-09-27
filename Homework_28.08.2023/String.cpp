#include "String.h"


String::String()
{
	crossString = "";
	str1 = "";
	str2 = "";
}

String::String(string str1_, string str2_)
{
	this->str1 = str1_;
	this->str2 = str2_;
}


bool String::IsEmpty()
{
	string cross = "";
	for (int i = 0; i < str1.length(); i++)
	{
		for (int j = 0; j < str2.length(); j++)
		{
			if (str1[i] == str2[j])
			{ssS
				cross += str1[i];
				break;
			}
		}
	}
	if (cross.empty())
	{
		return true;
	}
	setCrossString(cross);
	return false;
}


void String::setCrossString(string cross)
{
	this->crossString = cross;
}

string String::getCrossString()
{
	return crossString;
}