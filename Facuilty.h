#pragma once
#include"Course.h"
#include"Person.h"

class Course;
class Facuilty :public Person
{
protected:
	string Password;
	Course **CoursesTeaching;
	int NumCourses;
	double Salary;
public:
	Facuilty(string fn = "None", string ln = "None", string fan = "None", int bd = 0, int bm = 0, int by = 0, string cnic = "0", string phn = "0", string mail = "None", string padr = "None", string cadr = "None", int id = 0, int jd = 0, int jm = 0, int jy = 0, string pass = "None", double sal = 0.0) :Person(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy), Password(pass), Salary(sal)
	{
		NumCourses = 0;
	}
	string getFacuilityPassword();
	
	Course** getCoursesListTeaching();
	
	int getNumCoursesTeaching();
		
	double getFacuilitySalary();
	
	void setPerson(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy);

	void setFacuility(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy, string pass, double sal);

	void ChangePassword(string pass);
	
	void AddCourse(Course tempcour);
	
	void RemoveCourse(int cc);
	
	void ViewCoursesTeaching();
	
	void ViewStudentsInCourse(int cc);
	
	void MarkAttendanceforCourse(int cc, int d, int m, int y);
	
	void CreateAssignment(int cc, string t, int td, int tm, int ty, float tmark, int w);
	
	void AssignMarks(int cc, int stuid);
	
	void AssignCGPA(int cc, int stuid);
	
	void AssignGrades(int cc, int stuid);
	
	void DisplayFacuility();

	~Facuilty()
	{
		delete CoursesTeaching;
	}
	
};