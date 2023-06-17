#include"Student.h"
string Student::getStuPassword()
{
	return Password;
}
Course Student::getCourse(int id)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (RegisteredCourses[i]->getCourseID() == id)
		{
			return *RegisteredCourses[i];
		}
	}
}
int Student::getNumofCourses()
{
	return NumCourses;
}
Assignment* Student::getAssignments()
{
	return *AssesmentMarks;
}
int Student::getNumofAssignments(int cc)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (RegisteredCourses[i]->getCourseID() == cc)
		{
			return NumAssesments[i];
		}
	}
}
float Student::getCGPA()
{
	return CGPA;
}
string* Student::getGrades()
{
	return Grades;
}
double Student::getSemesterFee()
{
	return Fees;
}
bool Student::getFeeSubmissionStatus()
{
	return FeeStatus;
}
void Student::ChangePassword(string pass)
{
	Password = pass;
}
void Student::setPerson(string fn, string ln, string fan, int bd, int bm, int by, string cnic, string phn, string mail, string padr, string cadr, int id, int jd, int jm, int jy)
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
void Student::setStuFees(double fee)
{
	Fees = fee;
	FeeStatus = false;
}
void Student::AddCourse(Course tempcourse)
{
	if (NumCourses > 9)
	{
		cout << "Courses Number Full Unregister Course to Add More..!" << endl << endl;
	}
	else
	{
		RegisteredCourses[NumCourses] = &tempcourse;
		NumCourses++;
	}
}
void Student::DropCourse(int tempcc)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (RegisteredCourses[i]->getCourseID() == tempcc)
		{
			Course**temp = new Course*[9];
			for (int j = 0; j < i; j++)
			{
				temp[j] = RegisteredCourses[j];
			}
			for (int j = i; j < NumCourses; j++)
			{
				temp[j] = RegisteredCourses[j + 1];
			}
			delete RegisteredCourses;
			RegisteredCourses = temp;
			NumCourses--;
		}
	}
}
void Student::ViewCoursesRegistered()
{
	for (int i = 0; i < NumCourses; i++)
	{
		RegisteredCourses[i]->DisplayCourseInfo();
		cout << endl;
	}
}
void Student::ViewAttendance(int tempcc, int d, int m, int y)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (RegisteredCourses[i]->getCourseID() == tempcc)
		{
			RegisteredCourses[i]->ViewAttendanceforStudent(ID, d, m, y);
		}
	}
}
void Student::ViewCourseFullAttendance(int tempcc)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (RegisteredCourses[i]->getCourseID() == tempcc)
		{
			Date *temp = RegisteredCourses[i]->getAttendanceDates();
			for (int j = 0; j < RegisteredCourses[i]->getLecturesDelivered(); j++)
			{
				temp[j].displaydate();
				cout << "\t\t";
				RegisteredCourses[i]->ViewAttendanceforStudent(ID, temp[j].getDay(), temp[j].getMonth(), temp[j].getYear());
				cout << endl;
			}
		}
	}
}
void Student::AssignAssesmentMarks(int tempcc)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (RegisteredCourses[i]->getCourseID() == tempcc)
		{
			AssesmentMarks[i] = new Assignment[RegisteredCourses[i]->getNumAssignments()];
			Assignment * temp = RegisteredCourses[i]->getAssignments();
			for (int j = 0; j < RegisteredCourses[i]->getNumAssignments(); j++)
			{
				float marko;
				AssesmentMarks[i][j].setAssignment(temp[j].getTitle(), temp[j].getDateofTest().getDay(), temp[j].getDateofTest().getMonth(), temp[j].getDateofTest().getYear(), temp[j].getTotalMarks(), temp[j].getWeightage());
				AssesmentMarks[i][j].AssignmentDetails();
				cout << "Assign Marks Obtained : ";
				cin >> marko;
				AssesmentMarks[i][j].setObtainedMarks(marko);
				NumAssesments[i]++;
			}
		}
	}
}
void Student::AssignCGPA(float gpa)
{
	CGPA = gpa;
}
void Student::ViewAssignments(int tempcc)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (RegisteredCourses[i]->getCourseID() == tempcc)
		{
			for (int j = 0; j < NumAssesments[i]; j++)
			{
				AssesmentMarks[i][j].DisplayAssignment();
			}
		}
	}
}
void Student::AssignGrades(int cc, string grade)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (RegisteredCourses[i]->getCourseID() == cc)
		{
			Grades[i] = grade;
		}
	}
}
void Student::viewGrade(int cc)
{
	for (int i = 0; i < NumCourses; i++)
	{
		if (RegisteredCourses[i]->getCourseID() == cc)
		{
			cout << "Grade for Course is " << Grades[i] << endl;
		}
	}
}

void Student::ViewDMC()
{
	cout << endl << "           ===DETAILED MARK SHEET===" << endl << endl;
	for (int i = 0; i < NumCourses; i++)
	{
		cout << i + 1 << "\t" << RegisteredCourses[i]->getCourseID() << " - "
			<< RegisteredCourses[i]->getCourseTitle() << "\t" << RegisteredCourses[i]->getTeacher().getFirstName()
			<< " " << RegisteredCourses[i]->getTeacher().getLastName() << "\t" << Grades[i] << endl;
	}
	cout << "CGPA : " << CGPA << endl;
}
void Student::DisplayStudent()
{
	Display();
	cout << "CGPA : " << CGPA << endl;
	cout << "Semester Fees : " << Fees << endl;
	cout << "Fee Status : ";
	if (FeeStatus)
	{
		cout << "PAID!" << endl;
	}
	else
	{
		cout << "UNPAID!" << endl;
	}
}