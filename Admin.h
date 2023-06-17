#pragma once
#include"Course.h"
#include"Facuilty.h"
#include"Student.h"

class Facuilty;
class Course;
class Student;
class Admin :public Person
{
protected:
	string Password;
	Facuilty *Facuilities;
	int NumFacilities;
	Course *CoursesOffered;
	int NumCourses;
	Student *StudentsRegistered;
	int NumStudents;
	double Salary;
public:
	Admin(string fn = "None", string ln = "None", string fan = "None", int bd = 0, int bm = 0, int by = 0, string cnic = "0", string phn = "0", string mail = "None", string padr = "None", string cadr = "None", int id = 0, int jd = 0, int jm = 0, int jy = 0, string pass = "Admin", double sal = 0.0)
		:Person(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy), Password(pass), Salary(sal)
	{
		NumFacilities = 0;
		NumCourses = 0;
		NumStudents = 0;
	}
	void setPerson(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy);
	
	string getAdminPassword();
	
	double getAdminSalary();
	
	void setAdminSalary(double sal);
	
	Facuilty getFacuility(int id);
	
	int getNumofFacuilities();
	
	Course getCourse(int id);
	
	int getNumofCourses();
	
	Student getStudent(int id);
	
	int getNumofStudents();
	
	void CreateFacuility(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy, double sal);
	
	void CreateCourse(string tt, int id, int sd, int sm, int sy, int tlects);
	
	void CreateStudent(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy, double fee);
	
	void AssignLOGINcreditals();
	
	string RetriveForgottenPassword(string cnic, int choice);
	
	void EditFacuilty(int id, string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int jd, int jm, int jy, double sal);
	
	void EditCourse(int id, string tt, int session, int sd, int sm, int sy);
	
	void EditStudent(int id, string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int jd, int jm, int jy, double fee);
	
	void AssignFacuilty(int cc, int fid);
	
	void RegisterCourse(int cc, int stuid);
	
	void DropCourse(int cc, int stuid);
	
	void DisplayStudentINFO(int id);
		
	void ViewDMCofStudent(int id);
	
	void DisplayCourseINFO(int id);
	
	void DisplayFacuiltyINFO(int id);

	void DisplayAdmin();

	~Admin()
	{
		delete Facuilities;
		delete CoursesOffered;
		delete StudentsRegistered;
	}
	
};