#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class NameCard
{
private:
	string name;
	string phone;
public:
	NameCard(const string& name, const string& phone);
	void showNameCardInfo() const;
	int nameCmp(const string& name) const;
	void changePhoneNum(const string& phone);
};

