#pragma once
#include"Person.h"
#include"Course.h"

class Course;
class Assignment;
class Student :public Person
{
protected:
	string Password;
	Course **RegisteredCourses;
	int NumCourses;
	Assignment **AssesmentMarks;
	int *NumAssesments;
	float CGPA;
	string *Grades;
	double Fees;
	bool FeeStatus;
public:
	Student(string fn = "None", string ln = "None", string fan = "None", int bd = 0, int bm = 0, int by = 0, string cnic = "0", string phn = "0", string mail = "None", string padr = "None", string cadr = "None", int id = 0, int jd = 0, int jm = 0, int jy = 0, string pass = "None", double fee = 0.0) :Person(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy), Password(pass)
	{
		RegisteredCourses = new Course *[9];
		NumCourses = 0;
		AssesmentMarks = new Assignment*[9];
		NumAssesments = new int[9];
		CGPA = 0.0;
		Grades = new string[9];
		Fees = fee;
		FeeStatus = false;
	}
	string getStuPassword();
	
	Course getCourse(int id);
	
	int getNumofCourses();
	
	Assignment* getAssignments();
	
	int getNumofAssignments(int cc);
	
	float getCGPA();

	string* getGrades();
	
	double getSemesterFee();

	bool getFeeSubmissionStatus();

	void ChangePassword(string pass);
	
	void setPerson(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy);
	
	void setStuFees(double fee);
	
	void AddCourse(Course tempcourse);
	
	void DropCourse(int tempcc);
	
	void ViewCoursesRegistered();

	void ViewAttendance(int tempcc, int d, int m, int y);
	
	void ViewCourseFullAttendance(int tempcc);
	
	void AssignAssesmentMarks(int tempcc);
	
	void AssignCGPA(float gpa);
	
	void ViewAssignments(int tempcc);
	
	void AssignGrades(int cc, string grade);
	
	void viewGrade(int cc);
	
	void ViewDMC();
	
	void DisplayStudent();
	
	~Student()
	{
		delete RegisteredCourses;
		delete AssesmentMarks;
		delete NumAssesments;
		delete Grades;
	}
};