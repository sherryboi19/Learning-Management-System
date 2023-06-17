#include"Person.h"
string Person::getFirstName()
{
	return FirstName;
}
string Person::getLastName()
{
	return LastName;
}
string Person::getFatherName()
{
	return FatherName;
}
Date Person::getDOB()
{
	return DOB;
}
string Person::getCNIC()
{
	return CNIC;
}
string Person::getPhoneNum()
{
	return PhoneNum;
}
string Person::getEmailAdress()
{
	return EmailAdress;
}
string Person::getPermanenetAddress()
{
	return PermanenetAddress;
}
string Person::getCurrentAddress()
{
	return CurrentAddress;
}
int Person::getID()
{
	return ID;
}
Date Person::getDOJ()
{
	return DOJ;
}
void Person::Display()
{
	cout << "======PERSONAL DETAILS======" << endl << endl;
	cout << "First Name : " << FirstName << endl;
	cout << "Last Name : " << LastName << endl;
	cout << "Father Name : " << FatherName << endl;
	cout << "Date of Birth (D-M-Y) : ";
	DOB.displaydate();
	cout << "CNIC# : " << CNIC << endl;
	cout << "Phone# : " << PhoneNum << endl;
	cout << "Email Adress : " << EmailAdress << endl;
	cout << "Permanent Residance : " << PermanenetAddress << endl;
	cout << "Current Residance : " << CurrentAddress << endl;
}