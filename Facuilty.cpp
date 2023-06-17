#include"Facuilty.h"
string Facuilty::getFacuilityPassword()
{
	return Password;
}
Course** Facuilty::getCoursesListTeaching()
{
	return CoursesTeaching;
}
int Facuilty::getNumCoursesTeaching()
{
	return NumCourses;
}
double Facuilty::getFacuilitySalary()
{
	return Salary;
}
void Facuilty::setPerson(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy)
{
	FirstName = fn;
	LastName = ln;
	FatherName = fan;
	DOB.setDate(bd, bm, by);
	CNIC = cnic;
	PhoneNum = phn;
	EmailAdress = mail;
	PermanenetAddress = padr;
	CurrentAddress = cadr;
	ID = id;
	DOJ.setDate(jd, jm, jy);
}
void Facuilty::setFacuility(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy, string pass, double sal)
{
	FirstName = fn;
	LastName = ln;
	FatherName = fan;
	DOB.setDate(bd, bm, by);
	CNIC = cnic;
	PhoneNum = phn;
	EmailAdress = mail;
	PermanenetAddress = padr;
	CurrentAddress = cadr;
	ID = id;
	DOJ.setDate(jd, jm, jy);
	Password = pass;
	Salary = sal;
	NumCourses = 0;
}
void Facuilty::ChangePassword(string pass)
{
	Password = pass;
}
void Facuilty::AddCourse(Course tempcour)
{
	if (NumCourses == 0)
	{
		CoursesTeaching = new Course*[1];
		CoursesTeaching[0] = &tempcour;
	}
	else
	{
		Course**temp = new Course*[NumCourses + 1];
		for (int i = 0; i < NumCourses; i++)
		{
			temp[i] = CoursesTeaching[i];
		}
		temp[NumCourses] = &tempcour;
		delete CoursesTeaching;
		CoursesTeaching = temp;
	}
	NumCourses++;
}
void Facuilty::RemoveCourse(int cc)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesTeaching[i]->getCourseID() == cc)
		{
			Course**temp = new Course*[NumCourses - 1];
			for (int j = 0; j < i; j++)
			{
				temp[j] = CoursesTeaching[j];
			}
			for (int j = i; j < NumCourses; j++)
			{
				temp[j] = CoursesTeaching[j + 1];
			}
			delete CoursesTeaching;
			CoursesTeaching = temp;
			NumCourses--;
		}
	}
}
void Facuilty::ViewCoursesTeaching()
{
	cout << "\t\t\t---Teaching Courses---" << endl << endl;
	for (int i = 0; i < NumCourses; i++)
	{
		cout << i + 1 << " . " << CoursesTeaching[i]->getCourseID() << "  - " << CoursesTeaching[i]->getCourseTitle() << endl;
	}
}
void Facuilty::ViewStudentsInCourse(int cc)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesTeaching[i]->getCourseID() == cc)
		{
			CoursesTeaching[i]->ViewStudentsEnrolled();
		}
	}
}
void Facuilty::MarkAttendanceforCourse(int cc, int d, int m, int y)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesTeaching[i]->getCourseID() == cc)
		{
			CoursesTeaching[i]->AddAttendance(d, m, y);
		}
	}
}
void Facuilty::CreateAssignment(int cc, string t, int td, int tm, int ty, float tmark, int w)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesTeaching[i]->getCourseID() == cc)
		{
			CoursesTeaching[i]->AddAssignment(t, td, tm, ty, tmark, w);
		}
	}
}
void Facuilty::AssignMarks(int cc, int stuid)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesTeaching[i]->getCourseID() == cc)
		{
			for (int j = 0; j < CoursesTeaching[i]->getNumofStudents(); j++)
			{
				if (CoursesTeaching[i]->getStudent(stuid)->getID() == stuid)
				{
					CoursesTeaching[i]->getStudent(stuid)->AssignAssesmentMarks(cc);
				}
			}
		}
	}
}
void Facuilty::AssignCGPA(int cc, int stuid)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesTeaching[i]->getCourseID() == cc)
		{
			for (int j = 0; j < CoursesTeaching[i]->getNumofStudents(); j++)
			{
				if (CoursesTeaching[i]->getStudent(stuid)->getID() == stuid)
				{
					float tpercentage = 0.0;
					Assignment *ptr = CoursesTeaching[i]->getStudent(stuid)->getAssignments();
					for (int k = 0; k < CoursesTeaching[i]->getStudent(stuid)->getNumofAssignments(cc); k++)
					{
						tpercentage += (ptr[i].getWeightage() *ptr[i].getObtainedMarks()) / ptr[i].getTotalMarks();
					}
					if (tpercentage <= 100 || tpercentage > 95)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(4.0);
					}
					if (tpercentage <= 95 || tpercentage > 90)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(3.7);
					}
					if (tpercentage <= 90 || tpercentage > 85)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(3.5);
					}
					if (tpercentage <= 85 || tpercentage > 80)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(3.3);
					}
					if (tpercentage <= 80 || tpercentage > 70)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(3.0);
					}
					if (tpercentage <= 70 || tpercentage > 65)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(2.7);
					}
					if (tpercentage <= 65 || tpercentage > 60)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(2.5);
					}
					if (tpercentage <= 60 || tpercentage > 55)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(2.2);
					}
					if (tpercentage <= 55 || tpercentage > 50)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(2.0);
					}
					if (tpercentage <= 50 || tpercentage > 40)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(1.7);
					}
					if (tpercentage <= 40 || tpercentage >= 30)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(1.5);
					}
					if (tpercentage <= 30 || tpercentage >= 0)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignCGPA(1.0);
					}
				}
			}
		}
	}
}
void Facuilty::AssignGrades(int cc, int stuid)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesTeaching[i]->getCourseID() == cc)
		{
			for (int j = 0; j < CoursesTeaching[i]->getNumofStudents(); j++)
			{
				if (CoursesTeaching[i]->getStudent(stuid)->getID() == stuid)
				{
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 4.0)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "A+");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 3.7)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "A");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 3.5)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "A-");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 3.3)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "B+");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 3.0)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "A");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 2.7)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "B-");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 2.5)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "C+");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 2.2)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "C");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 2.0)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "D+");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 1.7)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "D");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 1.5)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "E");
					}
					if (CoursesTeaching[i]->getStudent(stuid)->getCGPA() == 1.0)
					{
						CoursesTeaching[i]->getStudent(stuid)->AssignGrades(cc, "F");
					}
				}
			}
		}
	}
}
void Facuilty::DisplayFacuility()
{
	Display();
	cout << "Salary : " << Salary << endl;
	cout << "     ---Teaching Courses---" << endl << endl;
	for (int i = 0; i < NumCourses; i++)
	{
		cout << i + 1 << " . " << CoursesTeaching[i]->getCourseID() << "  - " << CoursesTeaching[i]->getCourseTitle() << endl;
	}
}