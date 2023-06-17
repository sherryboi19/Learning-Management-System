#include"Admin.h"
void Admin::setPerson(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy)
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
string Admin::getAdminPassword()
{
	return Password;
}
double Admin::getAdminSalary()
{
	return Salary;
}
void Admin::setAdminSalary(double sal)
{
	Salary = sal;
}
Facuilty Admin::getFacuility(int id)
{
	for (int i = 0; i < NumFacilities; i++)
	{
		if (Facuilities[i].getID() == id)
		{
			return Facuilities[i];
		}
	}
}
int Admin::getNumofFacuilities()
{
	return NumFacilities;
}
Course Admin::getCourse(int id)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesOffered[i].getCourseID() == id)
		{
			return CoursesOffered[i];
		}
	}
}
int Admin::getNumofCourses()
{
	return NumCourses;
}
Student Admin::getStudent(int id)
{
	for (int i = 0; i < NumStudents; i++)
	{
		if (StudentsRegistered[i].getID() == id)
		{
			return StudentsRegistered[i];
		}
	}
}
int Admin::getNumofStudents()
{
	return NumStudents;
}
void Admin::CreateFacuility(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy, double sal)
{
	if (NumFacilities == 0)
	{
		Facuilities = new Facuilty[NumFacilities + 1];
		Facuilities[NumFacilities].setFacuility(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy, "None", sal);
	}
	else
	{
		Facuilty*ptr = new Facuilty[NumFacilities + 1];
		for (int i = 0; i < NumFacilities; i++)
		{
			ptr[i] = Facuilities[i];
		}
		ptr[NumFacilities].setFacuility(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy, "None", sal);
		delete Facuilities;
		Facuilities = ptr;
	}
	NumFacilities++;
}
void Admin::CreateCourse(string tt, int id, int sd, int sm, int sy, int tlects)
{
	if (NumCourses == 0)
	{
		CoursesOffered = new Course[NumCourses + 1];
		CoursesOffered[NumCourses].setCourse(tt, id, sd, sm, sy, tlects);
	}
	else
	{
		Course*ptr = new Course[NumCourses + 1];
		for (int i = 0; i < NumCourses; i++)
		{
			ptr[i] = CoursesOffered[i];
		}
		ptr[NumCourses].setCourse(tt, id, sd, sm, sy, tlects);
		delete CoursesOffered;
		CoursesOffered = ptr;
	}
	NumCourses++;
}
void Admin::CreateStudent(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy, double fee)
{
	if (NumStudents == 0)
	{
		StudentsRegistered = new Student[NumStudents + 1];
		StudentsRegistered[NumStudents].setPerson(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy);
		StudentsRegistered[NumStudents].setStuFees(fee);
	}
	else
	{
		Student*ptr = new Student[NumStudents + 1];
		for (int i = 0; i < NumStudents; i++)
		{
			ptr[i] = StudentsRegistered[i];
		}
		ptr[NumStudents].setPerson(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy);
		ptr[NumStudents].setStuFees(fee);
		delete StudentsRegistered;
		StudentsRegistered = ptr;
	}
	NumStudents++;
}
void Admin::AssignLOGINcreditals()
{
	for (int i = 0; i < NumFacilities; i++)
	{
		string name, pass, id;
		name = Facuilities[i].getFirstName();
		id = to_string(Facuilities[i].getID());
		pass = name + id;
		Facuilities[i].ChangePassword(pass);
	}
	for (int i = 0; i < NumStudents; i++)
	{
		string name, pass, id;
		name = StudentsRegistered[i].getFirstName();
		id = to_string(StudentsRegistered[i].getID());
		pass = name + id;
		StudentsRegistered[i].ChangePassword(pass);
	}
}
string Admin::RetriveForgottenPassword(string cnic, int choice)
{
	if (choice == 1)
	{
		for (int i = 0; i < NumFacilities; i++)
		{
			if (Facuilities[i].getCNIC() == cnic)
			{
				return Facuilities[i].getFacuilityPassword();
			}
		}
	}
	if (choice == 2)
	{
		for (int i = 0; i < NumStudents; i++)
		{
			if (StudentsRegistered[i].getCNIC() == cnic)
			{
				return StudentsRegistered[i].getStuPassword();
			}
		}
	}
}
void Admin::EditFacuilty(int id, string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int jd, int jm, int jy, double sal)
{
	for (int i = 0; i < NumFacilities; i++)
	{
		if (Facuilities[i].getID() == id)
		{
			Facuilities[i].setFacuility(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy, Facuilities[i].getFacuilityPassword(), sal);
		}
	}
}
void Admin::EditCourse(int id, string tt, int session, int sd, int sm, int sy)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesOffered[i].getCourseID() == id)
		{
			CoursesOffered[i].setCourse(tt, id, sd, sm, sy, CoursesOffered[i].getTotalLectures());
		}
	}
}
void Admin::EditStudent(int id, string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int jd, int jm, int jy, double fee)
{
	for (int i = 0; i < NumStudents; i++)
	{
		if (StudentsRegistered[i].getID() == id)
		{
			StudentsRegistered[i].setPerson(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy);
			StudentsRegistered[i].setStuFees(fee);
		}
	}
}
void Admin::AssignFacuilty(int cc, int fid)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesOffered[i].getCourseID() == cc)
		{
			for (int j = 0; j < NumFacilities; j++)
			{
				if (Facuilities[j].getID() == fid)
				{
					CoursesOffered[i].AssignTeacher(Facuilities[j]);
					Facuilities[j].AddCourse(CoursesOffered[i]);
				}
			}
		}
	}
}
void Admin::RegisterCourse(int cc, int stuid)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesOffered[i].getCourseID() == cc)
		{
			for (int j = 0; j < NumStudents; j++)
			{
				if (StudentsRegistered[j].getID() == stuid)
				{
					CoursesOffered[i].AddStudent(StudentsRegistered[j]);
					StudentsRegistered[j].AddCourse(CoursesOffered[i]);
				}
			}
		}
	}
}
void Admin::DropCourse(int cc, int stuid)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesOffered[i].getCourseID() == cc)
		{
			for (int j = 0; j < NumStudents; j++)
			{
				if (StudentsRegistered[j].getID() == stuid)
				{
					CoursesOffered[i].RemoveStudent(stuid);
					StudentsRegistered[j].DropCourse(cc);
				}
			}
		}
	}
}
void Admin::DisplayStudentINFO(int id)
{
	for (int i = 0; i < NumStudents; i++)
	{
		if (StudentsRegistered[i].getID() == id)
		{
			StudentsRegistered[i].DisplayStudent();
		}
	}
}
void Admin::ViewDMCofStudent(int id)
{
	for (int i = 0; i < NumStudents; i++)
	{
		if (StudentsRegistered[i].getID() == id)
		{
			StudentsRegistered[i].ViewDMC();
		}
	}
}
void Admin::DisplayCourseINFO(int id)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (CoursesOffered[i].getCourseID() == id)
		{
			CoursesOffered[i].DisplayCourseInfo();
		}
	}
}
void Admin::DisplayFacuiltyINFO(int id)
{
	for (int i = 0; i < NumFacilities; i++)
	{
		if (Facuilities[i].getID() == id)
		{
			Facuilities[i].DisplayFacuility();
		}
	}
}
void Admin::DisplayAdmin()
{
	Display();
	cout << "Salary : " << Salary << endl;
	cout << "  =========COURSES OFFERED========= " << endl;
	cout << "No. CC - COURSE TITLE \t\tSTARTING DATE" << endl << endl;
	for (int i = 0; i < NumCourses; i++)
	{
		cout << i + 1 << " . " << CoursesOffered[i].getCourseID() << " - " << CoursesOffered[i].getCourseTitle() << "\t\t";
		CoursesOffered[i].getStartingDate().displaydate();
		cout << endl;
	}
}