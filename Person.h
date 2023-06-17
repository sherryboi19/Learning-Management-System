#pragma once
#include"Date.h"

class Person
{
protected:
	string FirstName;
	string LastName;
	string FatherName;
	Date DOB;
	string CNIC;
	string PhoneNum;
	string EmailAdress;
	string PermanenetAddress;
	string CurrentAddress;
	int ID;
	Date DOJ;
public:
	Person(string fn = "None", string ln = "None", string fan = "None", int bd = 0, int bm = 0, int by = 0, string cnic = "0", string phn = "0", string mail = "None", string padr = "None", string cadr = "None", int id = 0, int jd = 0, int jm = 0, int jy = 0)
		:FirstName(fn), LastName(ln), FatherName(fan), DOB(bd, bm, by), CNIC(cnic), PhoneNum(phn), EmailAdress(mail), PermanenetAddress(padr), CurrentAddress(cadr), ID(id), DOJ(jd, jm, jy)
	{
	}
	string getFirstName();
	
	string getLastName();
	
	string getFatherName();
	
	Date getDOB();
	
	string getCNIC();

	string getPhoneNum();
	
	string getEmailAdress();
	
	string getPermanenetAddress();
	
	string getCurrentAddress();
	
	int getID();
	
	Date getDOJ();
	
	virtual void setPerson(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy) = 0;
	
	void Display();
	
	~Person()
	{

	}
};