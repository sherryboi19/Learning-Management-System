#include"Assignment.h"
string Assignment::getTitle()
{
	return Title;
}
Date Assignment::getDateofTest()
{
	return DateofTest;
}
float Assignment::getTotalMarks()
{
	return TotalMarks;
}
int Assignment::getWeightage()
{
	return Weightage;
}
float Assignment::getObtainedMarks()
{
	return ObtainedMarks;
}
void Assignment::setTitle(string t)
{
	Title = t;
}
void Assignment::setDateofTest(int td, int tm, int ty)
{
	DateofTest.setDate(td, tm, ty);
}
void Assignment::setTotalMarks(float tmark)
{
	TotalMarks = tmark;
}
void Assignment::setWeightage(int w)
{
	Weightage = w;
}
void Assignment::setObtainedMarks(float omark)
{
	ObtainedMarks = omark;
}
void Assignment::setAssignment(string t, int td, int tm, int ty, float tmark, int w)
{
	Title = t;
	DateofTest.setDate(td, tm, ty);
	TotalMarks = tmark;
	Weightage = w;
}
void Assignment::AssignmentDetails()
{
	cout << "Title : " << Title << endl;
	cout << "Date of Assesment (D-M-Y): ";
	DateofTest.displaydate();
	cout << "Total Marks : " << TotalMarks << endl;
	cout << "Weightage : " << Weightage << endl;
}
void Assignment::DisplayAssignment()
{
	cout << "====ASSIGNMENT DETAILS====" << endl;
	cout << "Title : " << Title << endl;
	cout << "Date of Assesment (D-M-Y): ";
	DateofTest.displaydate();
	cout << "Total Marks : " << TotalMarks << endl;
	cout << "Weightage : " << Weightage << endl;
	cout << "Obtained Marks : " << ObtainedMarks << endl;
}