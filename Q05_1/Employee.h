#pragma once
#include <string>

using std::string;

struct Employee
{
	int num;
	string name;
	Employee(const int &num=0, const string &name="");
};
