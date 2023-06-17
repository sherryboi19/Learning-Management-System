#include"Course.h"
string Course::getCourseTitle()
{
	return Title;
}
int Course::getCourseID()
{
	return ID;
}
Date Course::getStartingDate()
{

	return StartingDate;

}
int Course::getNumofStudents()
{
	return NumStudents;
}
Facuilty Course::getTeacher()
{
	return *Teacher;
}
int Course::getTotalLectures()
{
	return TotalLecture;
}
Student* Course::getStudent(int id)
{
	for (int i = 0; i < NumStudents; i++)
	{
		if (StudentsReg[i]->getID() == id)
		{
			return StudentsReg[i];
		}
	}
}
Date* Course::getAttendanceDates()
{

	return AttendanceDates;

}
int* Course::getStudentsPresent(int d, int m, int y)
{
	for (int i = 0; i < TotalLecture; i++)
	{
		if (AttendanceDates[i].getDay() == d && AttendanceDates[i].getMonth() == m && AttendanceDates[i].getYear() == y)
		{
			return StuPresent[i];
		}
	}
}
int Course::getPresentStuNumforDates(int d, int m, int y)
{
	for (int i = 0; i < TotalLecture; i++)
	{
		if (AttendanceDates[i].getDay() == d && AttendanceDates[i].getMonth() == m && AttendanceDates[i].getYear() == y)
		{
			return NumStuPresent[i];
		}
	}

}
int Course::getLecturesDelivered()
{
	return LecturesDelivered;
}
Assignment* Course::getAssignments()
{
	return Assignments;
}
void Course::setCourse(string tt, int id, int sd, int sm, int sy, int tlects)
{
	Title = tt;
	ID = id;
	TotalLecture = tlects;
	NumAssignments = 0;
	StartingDate.setDate(sd, sm, sy);
	NumStudents = 0;
	StudentsReg = new Student *[40];
	AttendanceDates = new Date[tlects];
	StuPresent = new int*[tlects];
	NumStuPresent = new int[tlects];
	LecturesDelivered = 0;
}
void Course::ViewStudentsEnrolled()
{
	for (int i = 0; i < NumStudents; i++)
	{
		cout << i + 1 << " . " << StudentsReg[i]->getID() << "\t" << StudentsReg[i]->getFirstName() << " " << StudentsReg[i]->getLastName() << endl;
	}
}
void Course::AddStudent(Student tempstu)
{
	if (NumStudents > 40)
	{
		cout << "Course is Full!!!" << endl << endl;
	}
	else
	{
		StudentsReg[NumStudents] = &tempstu;
		NumStudents++;
	}
}
void Course::RemoveStudent(int tempstuid)
{
	for (int i = 0; i < NumStudents; i++)
	{
		if (StudentsReg[i]->getID() == tempstuid)
		{
			Student **temp = new Student*[40];
			for (int j = 0; j < i; j++)
			{
				temp[j] = StudentsReg[j];
			}
			for (int j = i; j < NumStudents; j++)
			{
				temp[j] = StudentsReg[j + 1];
			}
			delete StudentsReg;
			StudentsReg = temp;
			NumStudents--;
		}
	}
}
void Course::AssignTeacher(Facuilty tempfac)
{
	/*Teacher.setPerson(tempfac.getFirstName(),tempfac.getLastName(),tempfac.getFatherName(),tempfac.getDOB().getDay(), tempfac.getDOB().getMonth(), tempfac.getDOB().getYear(),tempfac.getCNIC(),tempfac.getPhoneNum(),tempfac.getEmailAdress(),tempfac.getPermanenetAddress(),tempfac.getCurrentAddress(),tempfac.getID(),tempfac.getDOJ().getDay(), tempfac.getDOJ().getMonth(), tempfac.getDOJ().getYear()) ;*/
	Teacher = &tempfac;
}
void Course::AddAssignment(string t, int td, int tm, int ty, float tmark, int w)
{
	Assignments[NumAssignments].setAssignment(t, td, tm, ty, tmark, w);
	NumAssignments++;
}
int Course::getNumAssignments()
{
	return NumAssignments;
}
void Course::AddAttendance(int d, int m, int y)
{
	AttendanceDates[LecturesDelivered - 1].setDate(d, m, y);
	cout << "\t\t\t==ADD ATTENDANCE===" << endl << endl;
	AttendanceDates[LecturesDelivered - 1].displaydate();
	cout << "ENTER P FOR PRESENT AND A FOR ABSENT STUDENTS" << endl << endl;
	StuPresent[LecturesDelivered - 1] = new int[40];
	for (int i = 0; i < NumStudents; i++)
	{
		char choice;
		cout << StudentsReg[i]->getFirstName() << " " << StudentsReg[i]->getLastName() << " : ";
		cin >> choice;
		if (choice == 'P' || choice == 'p')
		{
			StuPresent[LecturesDelivered - 1][i] = StudentsReg[i]->getID();
			NumStuPresent[LecturesDelivered - 1]++;
		}
		if (choice == 'A' || choice == 'a')
		{
			StuPresent[LecturesDelivered - 1][i] = 0;
		}
		else
		{
			cout << "Invalid Choice Enter Again!!" << endl;
			i--;
		}
	}
}
void Course::ViewAttendanceforStudent(int id, int d, int m, int y)
{
	for (int i = 0; i < LecturesDelivered; i++)
	{
		if ((AttendanceDates[i].getDay()) == d && (AttendanceDates[i].getMonth() == m) && (AttendanceDates[i].getYear() == y))
		{
			for (int j = 0; j < NumStudents; j++)
			{
				if (StuPresent[i][j] == id)
				{
					cout << "PRESENT." << endl;
				}
				else
				{
					cout << "Absent." << endl;
				}
			}
		}
	}
}
void Course::ViewAttendanceDetails(int d, int m, int y)
{
	for (int i = 0; i < LecturesDelivered; i++)
	{
		if ((AttendanceDates[i].getDay()) == d && (AttendanceDates[i].getMonth() == m) && (AttendanceDates[i].getYear() == y))
		{
			for (int j = 0; j < NumStudents; j++)
			{
				cout << StudentsReg[j]->getFirstName() << " " << StudentsReg[j]->getLastName() << " : ";
				if (StuPresent[i][j] == StudentsReg[j]->getID())
				{
					cout << "Present." << endl;
				}
				else
				{
					cout << "Absent." << endl;
				}
			}
		}
	}
}
void Course::EditAttendance(int d, int m, int y)
{
	for (int j = 0; j < LecturesDelivered; j++)
	{
		if ((AttendanceDates[j].getDay() == d) && (AttendanceDates[j].getMonth() == m) && (AttendanceDates[j].getYear() == y))
		{
			cout << "==ADD ATTENDANCE===" << endl << endl;
			AttendanceDates[LecturesDelivered - 1].displaydate();
			cout << "ENTER P FOR PRESENT AND A FOR ABSENT STUDENTS" << endl << endl;
			StuPresent[j] = new int[40];
			NumStuPresent[j] = 0;
			for (int i = 0; i < NumStudents; i++)
			{
				char choice;
				cout << StudentsReg[i]->getFirstName() << " " << StudentsReg[i]->getLastName() << " : ";
				cin >> choice;
				if (choice == 'P' || choice == 'p')
				{
					StuPresent[j][i] = StudentsReg[i]->getID();
					NumStuPresent[j]++;
				}
				if (choice == 'A' || choice == 'a')
				{
					StuPresent[j][i] = 0;
				}
				else
				{
					cout << "Invalid Choice Enter Again!!" << endl;
					i--;
				}
			}
		}
	}
}
void Course::DisplayCourseInfo()
{
	cout << "===COURSE INFORMATION===" << endl;
	cout << "Title : " << Title << endl;
	cout << "Course Code : " << ID << endl;
	cout << "Starting Date : ";
	StartingDate.displaydate();
	cout << "Teacher : " << Teacher->getFirstName() << " " << Teacher->getLastName() << endl;
}