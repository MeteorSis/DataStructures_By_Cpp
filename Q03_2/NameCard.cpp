#include "NameCard.h"

NameCard::NameCard(const string& name, const string& phone)
	:name(name), phone(phone) {}

void NameCard::showNameCardInfo() const
{
	cout << "[ �̸� : " << name << ",	��ȭ��ȣ : " << phone << " ]" << endl;
}

int NameCard::nameCmp(const string& name) const
{
	return this->name.compare(name);
}

void NameCard::changePhoneNum(const string& phone)
{
	this->phone = phone;
}
