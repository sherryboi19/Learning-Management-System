#pragma once
#include"Assignment.h"
#include"Student.h"
#include"Facuilty.h"

class Date;
class Student;
class Facuilty;
class Assignment;
class Course
{
private:
	string Title;
	int ID;
	Date StartingDate;
	Student **StudentsReg;
	int NumStudents;
	Facuilty *Teacher;
	int TotalLecture;
	Date*AttendanceDates;
	int** StuPresent;
	int* NumStuPresent;
	int LecturesDelivered;
	Assignment *Assignments;
	int NumAssignments;
public:
	Course(string tt = "None", int id = 0, int session = 0, int sd = 0, int sm = 0, int sy = 0, int tlects = 0) :Title(tt), ID(id), TotalLecture(tlects), NumAssignments(0)
	{
		StartingDate.setDate(sd, sm, sy);
		NumStudents = 0;
		StudentsReg = new Student *[40];
		AttendanceDates = new Date[tlects];
		StuPresent = new int*[tlects];
		NumStuPresent = new int[tlects];
		LecturesDelivered = 0;
	}
	string getCourseTitle();
	
	int getCourseID();
	
	Date getStartingDate();
	
	int getNumofStudents();

	Facuilty getTeacher();
	
	int getTotalLectures();
	
	Student* getStudent(int id);
	
	Date* getAttendanceDates();
	
	int* getStudentsPresent(int d, int m, int y);
	
	int getPresentStuNumforDates(int d, int m, int y);
	
	int getLecturesDelivered();
	
	Assignment* getAssignments();
	
	void setCourse(string tt, int id, int sd, int sm, int sy, int tlects);
	
	void ViewStudentsEnrolled();
	
	void AddStudent(Student tempstu);
	
	void RemoveStudent(int tempstuid);
	
	void AssignTeacher(Facuilty tempfac);
	
	void AddAssignment(string t, int td, int tm, int ty, float tmark, int w);
	
	int getNumAssignments();
	
	void AddAttendance(int d, int m, int y);
	
	void ViewAttendanceforStudent(int id, int d, int m, int y);
	
	void ViewAttendanceDetails(int d, int m, int y);
	
	void EditAttendance(int d, int m, int y);
	
	void DisplayCourseInfo();
	
	~Course()
	{
		delete StudentsReg;
		delete Teacher;
		delete AttendanceDates;
		delete StuPresent;
		delete NumStuPresent;
		delete Assignments;
	}
};
