#include"Admin.h"

void main()
{
	Admin a;
	string fn, ln, fan ,mail, padr, cadr;
	int bd, bm, by, id, jd, jm, jy;
	string cnic, phn;
	double sal;
	cout << "Enter Admin First Name : ";
	getline(cin, fn);
	cout << "Enter Admin Last Name : ";
	getline(cin, ln);
	cout << "Enter Admin Father Name : ";
	getline(cin, fan);
	cout << "Enter Admin Birth Day : ";
	cin >> bd;
	while (bd <= 0 || bd > 31)
	{
		cout << "INVALID!" << endl;
		cout << "Enter Again : ";
		cin >> bd;
	}
	cout << "Enter Admin Birth Month : ";
	cin >> bm;
	while (bm <= 0 || bm > 12)
	{
		cout << "INVALID!" << endl;
		cout << "Enter Again : ";
		cin >> bm;
	}
	cout << "Enter Admin Birth Year : ";
	cin >> by;
	while (by <= 1900 || bd > 2500)
	{
		cout << "INVALID!" << endl;
		cout << "Enter Again : ";
		cin >> by;
	}
	cin.ignore();
	cout << "Enter Admin CNIC# : ";
	getline(cin, cnic);
	cout << "Enter Admin Phone# : ";
	getline(cin, phn);
	cout << "Enter Admin Email Adress : ";
	getline(cin, mail);
	cout << "Enter Admin Permanent Residance : ";
	getline(cin, padr);
	cout << "Enter Admin Current Residance : ";
	getline(cin, cadr);
	cout << "Enter Admin ID# : ";
	cin >> id;
	while (id <= 0 )
	{
		cout << "INVALID!" << endl;
		cout << "Enter Again : ";
		cin >> id;
	}
	cout << "Enter Admin Joining Day : ";
	cin >> jd;
	while (jd <= 0 || jd > 31)
	{
		cout << "INVALID!" << endl;
		cout << "Enter Again : ";
		cin >> jd;
	}
	cout << "Enter Admin Joining Month : ";
	cin >> jm;
	while (jm <= 0 || jm > 12)
	{
		cout << "INVALID!" << endl;
		cout << "Enter Again : ";
		cin >> jm;
	}
	cout << "Enter Admin Joining Year : ";
	cin >> jy;
	while (jy <= 2000 || jy > 2500)
	{
		cout << "INVALID!" << endl;
		cout << "Enter Again : ";
		cin >> jy;
	}
	cout << "Enter Admin Salary : ";
	cin >> sal;
	while (sal <= 0.0)
	{
		cout << "INVALID!" << endl;
		cout << "Enter Again : ";
		cin >> sal;
	}
	a.setPerson(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy);
	a.setAdminSalary(sal);
	do
	{
	menu:
		system("cls");
		int choice;
		cout << "\t\t======WELCOME=====" << endl << endl;
		cout << "WHO ARE YOU?" << endl;
		cout << "1. ADMIN." << endl;
		cout << "2. TEACHER." << endl;
		cout << "3. STUDENT." << endl;
		cout << "0. EXIT." << endl;
		cout << "ENTER CHOICE : ";
		cin >> choice;
		cout << endl << endl;
		while (choice < 0 || choice>3)
		{
			cout << "INVALID!!" << endl;
			cout << "ENTER CHOICE AGAIN : ";
			cin >> choice;
		}
		if (choice == 1)
		{
			int id;
			string pass;
			cout << "ENTER ID : ";
			cin >> id;
			cout << "PASSWORD : ";
			cin >> pass;
			if (a.getID() == id)
			{
				if (a.getAdminPassword() == pass)
				{
					do
					{
						system("cls");
						int achoice;
						cout << "\t\t\t.....WELCOME " << a.getFirstName() << "....." << endl << endl;
						cout << " 1. ADD COURSE." << endl;
						cout << " 2. ADD FACUILTY." << endl;
						cout << " 3. ADD STUDENT." << endl;
						cout << " 4. EDIT COURSE." << endl;
						cout << " 5. EDIT FACUILTY." << endl;
						cout << " 6. EDIT STUDENT." << endl;
						cout << " 7. VIEW COURSE." << endl;
						cout << " 8. VIEW FACUILTY." << endl;
						cout << " 9. VIEW STUDENT." << endl;
						cout << "10. ASSIGN TEACHERS." << endl;
						cout << "11. ASSIGN LOGIN CREDITALS." << endl;
						cout << "12. RETRIVE FORGOTTEN PASSWORD." << endl;
						cout << "13. VIEW DMCs." << endl;
						cout << "14. VIEW PROFILE." << endl;
						cout << "15. LOG OUT." << endl;
						cout << " 0. EXIT." << endl;
						cout << "ENTER CHOICE : ";
						cin >> achoice;
						while (choice < 0 || choice>15)
						{
							cout << "INVALID!!!" << endl;
							cout << "ENTER CHOICE AGAIN : ";
							cin >> achoice;
						}
						if (achoice == 1)
						{
							system("cls");
							cin.ignore();
							cout << "Enter Course Title : ";
							getline(cin, fn);
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							cout << "Enter Starting Day :";
							cin >> jd;
							while (jd <= 0 || jd > 31)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jd;
							}
							cout << "Enter Starting Month : ";
							cin >> jm;
							while (jm <= 0 || jm > 12)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jm;
							}
							cout << "Enter Starting Year : ";
							cin >> jy;
							while (jy <= 2000 || jy > 2500)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jy;
							}
							cout << "Enter Total Lectures : ";
							cin >> bm;
							while (bm <= 14 || bm > 18)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bm;
							}
							a.CreateCourse(fn, id, jd, jm, jy, bm);
							system("pause");
						}
						if (achoice == 2)
						{
							system("cls");
							cin.ignore();
							cout << "Enter Teacher First Name : ";
							getline(cin, fn);
							cout << "Enter Teacher Last Name : ";
							getline(cin, ln);
							cout << "Enter Teacher Father Name : ";
							getline(cin, fan);
							cout << "Enter Teacher Birth Day : ";
							cin >> bd;
							while (bd <= 0 || bd > 31)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bd;
							}
							cout << "Enter Teacher Birth Month : ";
							cin >> bm;
							while (bm <= 0 || bm > 12)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bm;
							}
							cout << "Enter Teacher Birth Year : ";
							cin >> by;
							while (by <= 1900 || bd > 2500)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> by;
							}
							cin.ignore();
							cout << "Enter Teacher CNIC# : ";
							getline(cin, cnic);
							cout << "Enter Teacher Phone# : ";
							getline(cin, phn);
							cout << "Enter Teacher Email Adress : ";
							getline(cin, mail);
							cout << "Enter Teacher Permanent Residance : ";
							getline(cin, padr);
							cout << "Enter Teacher Current Residance : ";
							getline(cin, cadr);
							cout << "Enter Teacher ID# : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							cout << "Enter Teacher Joining Day : ";
							cin >> jd;
							while (jd <= 0 || jd > 31)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jd;
							}
							cout << "Enter Teacher Joining Month : ";
							cin >> jm;
							while (jm <= 0 || jm > 12)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jm;
							}
							cout << "Enter Teacher Joining Year : ";
							cin >> jy;
							while (jy <= 2000 || jy > 2500)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jy;
							}
							cout << "Enter Teacher Salary : ";
							cin >> sal;
							while (sal <= 0.0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> sal;
							}
							a.CreateFacuility(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy, sal);
							system("pause");
						}
						if (achoice == 3)
						{
							system("cls");
							cin.ignore();
							cout << "Enter Student First Name : ";
							getline(cin, fn);
							cout << "Enter Student Last Name : ";
							getline(cin, ln);
							cout << "Enter Student Father Name : ";
							getline(cin, fan);
							cout << "Enter Student Birth Day : ";
							cin >> bd;
							while (bd <= 0 || bd > 31)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bd;
							}
							cout << "Enter Student Birth Month : ";
							cin >> bm;
							while (bm <= 0 || bm > 12)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bm;
							}
							cout << "Enter Student Birth Year : ";
							cin >> by;
							while (by <= 1900 || bd > 2500)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> by;
							}
							cin.ignore();
							cout << "Enter Student CNIC# : ";
							getline(cin, cnic);
							cout << "Enter Student Phone# : ";
							getline(cin, phn);
							cout << "Enter Student Email Adress : ";
							getline(cin, mail);
							cout << "Enter Student Permanent Residance : ";
							getline(cin, padr);
							cout << "Enter Student Current Residance : ";
							getline(cin, cadr);
							cout << "Enter Student ID# : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							cout << "Enter Student Joining Day : ";
							cin >> jd;
							while (jd <= 0 || jd > 31)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jd;
							}
							cout << "Enter Student Joining Month : ";
							cin >> jm;
							while (jm <= 0 || jm > 12)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jm;
							}
							cout << "Enter Student Joining Year : ";
							cin >> jy;
							while (jy <= 2000 || jy > 2500)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jy;
							}
							cout << "Enter Student Fees : ";
							cin >> sal;
							while (sal <= 0.0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> sal;
							}
							a.CreateStudent(fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, id, jd, jm, jy, sal);
							system("pause");
						}
						if (achoice == 4)
						{
							system("cls");
							bool stat = true;
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							for (int i = 0; i < a.getNumofCourses(); i++)
							{
								if (a.getCourse(id).getCourseID() == id)
								{
									a.getCourse(id).DisplayCourseInfo();
									cin.ignore();
									cout << "\n\t====EDIT DETAILS====" << endl << endl;
									cout << "Enter Course Title : ";
									getline(cin, fn);
									cout << "Enter Starting Day :";
									cin >> jd;
									while (jd <= 0 || jd > 31)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> jd;
									}
									cout << "Enter Starting Month : ";
									cin >> jm;
									while (jm <= 0 || jm > 12)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> jm;
									}
									cout << "Enter Starting Year : ";
									cin >> jy;
									while (jy <= 2000 || jy > 2500)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> jy;
									}
									a.EditCourse(id, fn, jy, jd, jm, jy);
									stat = false;
								}
							}
							if (stat)
							{
								cout << "Course Not Found!!" << endl;
							}
							system("pause");
						}
						if (achoice == 5)
						{
							system("cls");
							bool stat = true;
							cout << "Enter Teacher ID : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							for (int i = 0; i < a.getNumofFacuilities(); i++)
							{
								if (a.getFacuility(id).getID() == id)
								{
									a.getFacuility(id).DisplayFacuility();
									cin.ignore();
									cout << "\n\t====EDIT DETAILS====" << endl << endl;
									cout << "Enter Teacher First Name : ";
									getline(cin, fn);
									cout << "Enter Teacher Last Name : ";
									getline(cin, ln);
									cout << "Enter Teacher Father Name : ";
									getline(cin, fan);
									cout << "Enter Teacher Birth Day : ";
									cin >> bd;
									while (bd <= 0 || bd > 31)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> bd;
									}
									cout << "Enter Teacher Birth Month : ";
									cin >> bm;
									while (bm <= 0 || bm > 12)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> bm;
									}
									cout << "Enter Teacher Birth Year : ";
									cin >> by;
									while (by <= 1900 || bd > 2500)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> by;
									}
									cin.ignore();
									cout << "Enter Teacher CNIC# : ";
									getline(cin, cnic);
									cout << "Enter Teacher Phone# : ";
									getline(cin, phn);
									cout << "Enter Teacher Email Adress : ";
									getline(cin, mail);
									cout << "Enter Teacher Permanent Residance : ";
									getline(cin, padr);
									cout << "Enter Teacher Current Residance : ";
									getline(cin, cadr);
									cout << "Enter Teacher Joining Day : ";
									cin >> jd;
									while (jd <= 0 || jd > 31)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> jd;
									}
									cout << "Enter Teacher Joining Month : ";
									cin >> jm;
									while (jm <= 0 || jm > 12)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> jm;
									}
									cout << "Enter Teacher Joining Year : ";
									cin >> jy;
									while (jy <= 2000 || jy > 2500)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> jy;
									}
									cout << "Enter Teacher Salary : ";
									cin >> sal;
									while (sal <= 0.0)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> sal;
									}
									a.EditFacuilty(id, fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, jd, jm, jy, sal);
									stat = false;
								}
							}
							if (stat)
							{
								cout << "Teacher Not Found!!" << endl;
							}
							system("pause");
						}
						if (achoice == 6)
						{
							system("cls");
							bool stat = true;
							cout << "Enter Student ID : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							for (int i = 0; i < a.getNumofStudents(); i++)
							{
								if (a.getStudent(id).getID() == id)
								{
									a.getStudent(id).DisplayStudent();
									cin.ignore();
									cout << "\n\t====EDIT DETAILS====" << endl << endl;
									cout << "Enter Student First Name : ";
									getline(cin, fn);
									cout << "Enter Student Last Name : ";
									getline(cin, ln);
									cout << "Enter Student Father Name : ";
									getline(cin, fan);
									cout << "Enter Student Birth Day : ";
									cin >> bd;
									while (bd <= 0 || bd > 31)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> bd;
									}
									cout << "Enter Student Birth Month : ";
									cin >> bm;
									while (bm <= 0 || bm > 12)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> bm;
									}
									cout << "Enter Student Birth Year : ";
									cin >> by;
									while (by <= 1900 || bd > 2500)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> by;
									}
									cin.ignore();
									cout << "Enter Student CNIC# : ";
									getline(cin, cnic);
									cout << "Enter Student Phone# : ";
									getline(cin, phn);
									cout << "Enter Student Email Adress : ";
									getline(cin, mail);
									cout << "Enter Student Permanent Residance : ";
									getline(cin, padr);
									cout << "Enter Student Current Residance : ";
									getline(cin, cadr);
									cout << "Enter Student Joining Day : ";
									cin >> jd;
									while (jd <= 0 || jd > 31)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> jd;
									}
									cout << "Enter Student Joining Month : ";
									cin >> jm;
									while (jm <= 0 || jm > 12)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> jm;
									}
									cout << "Enter Student Joining Year : ";
									cin >> jy;
									while (jy <= 2000 || jy > 2500)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> jy;
									}
									cout << "Enter Student Fees : ";
									cin >> sal;
									while (sal <= 0.0)
									{
										cout << "INVALID!" << endl;
										cout << "Enter Again : ";
										cin >> sal;
									}
									stat = false;
									a.EditStudent(id, fn, ln, fan, bd, bm, by, cnic, phn, mail, padr, cadr, jd, jm, jy, sal);
								}
							}
							if (stat)
							{
								cout << "Student Not Found!!" << endl;
							}
							system("pause");
						}
						if (achoice == 7)
						{
							system("cls");
							bool stat = true;
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							for (int i = 0; i < a.getNumofCourses(); i++)
							{
								if (a.getCourse(id).getCourseID() == id)
								{
									a.DisplayCourseINFO(id);
									stat = false;
								}
							}
							if (stat)
							{
								cout << "Course Not Found!!" << endl;
							}
							system("pause");
						}
						if (achoice == 8)
						{
							system("cls");
							bool stat = true;
							cout << "Enter Teacher ID : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							for (int i = 0; i < a.getNumofFacuilities(); i++)
							{
								if (a.getFacuility(id).getID() == id)
								{
									a.DisplayFacuiltyINFO(id);
									stat = false;
								}
							}
							if (stat)
							{
								cout << "Facuilty Not Found!!" << endl;
							}
							system("pause");
						}
						if (achoice == 9)
						{
							system("cls");
							bool stat = true;
							cout << "Enter Student ID : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							for (int i = 0; i < a.getNumofStudents(); i++)
							{
								if (a.getStudent(id).getID() == id)
								{
									a.DisplayStudentINFO(id);
									stat = false;
								}
							}
							if (stat)
							{
								cout << "Student Not Found!!" << endl;
							}
							system("pause");
						}
						if (achoice == 10)
						{
							system("cls");
							bool stat1 = true, stat2 = true;
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							cout << "Enter Teacher ID : ";
							cin >> bd;
							while (bd <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bd;
							}
							for (int i = 0; i < a.getNumofCourses(); i++)
							{
								if (a.getCourse(id).getCourseID() == id)
								{
									stat1 = false;
									for (int j = 0; j < a.getNumofFacuilities(); j++)
									{
										if (a.getFacuility(bd).getID() == bd)
										{
											stat2 = false;
											a.AssignFacuilty(id, bd);
										}
									}
									if (stat2)
									{
										cout << "Facuilty Not Found!!" << endl;
									}
								}
							}
							if (stat1)
							{
								cout << "Course Not Found!!" << endl;
							}
							system("pause");
						}
						if (achoice == 11)
						{
							system("cls");
							a.AssignLOGINcreditals();
							cout << "LOGIC CREDITALS ASSIGNED." << endl;
							system("pause");
						}
						if (achoice == 12)
						{
							system("cls");
							bool stat = true;
							cout << "Enter CNIC# : ";
							getline(cin, cnic);
							cout << "ENTER 1 FOR TEACHER | 2 FOR STUDENT : ";
							cin >> id;
							while (id != 1 || id != 2)
							{
								cout << "INVALID!";
								cout << "Enter Again : ";
								cin >> id;
							}
							if (id == 1)
							{
								for (int i = 0; i < a.getNumofFacuilities(); i++)
								{
									int temp;
									cout << "Enter Teacher ID : ";
									cin >> temp;
									while (temp <= 0)
									{
										cout << "INVALID!";
										cout << "Enter Again : ";
										cin >> temp;
									}
									if ((a.getFacuility(temp).getCNIC() == cnic) && (a.getFacuility(temp).getID() == temp))
									{
										stat = false;
										a.RetriveForgottenPassword(cnic, id);
									}
								}
							}
							if (id == 2)
							{
								for (int i = 0; i < a.getNumofStudents(); i++)
								{
									int temp;
									cout << "Enter Student ID : ";
									cin >> temp;
									while (temp <= 0)
									{
										cout << "INVALID!";
										cout << "Enter Again : ";
										cin >> temp;
									}
									if ((a.getStudent(temp).getCNIC() == cnic) && (a.getStudent(temp).getID() == temp))
									{
										stat = false;
										a.RetriveForgottenPassword(cnic, id);
									}
								}
							}
							if (stat)
							{
								cout << "CNIC Does not Match to Anyone!" << endl;
							}
							system("pause");
						}
						if (achoice == 13)
						{
							system("cls");
							bool stat = true;
							cout << "Enter Student ID : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!";
								cout << "Enter Again : ";
								cin >> id;
							}
							for (int i = 0; i < a.getNumofStudents(); i++)
							{
								if (a.getStudent(id).getID() == id)
								{
									stat = false;
									a.ViewDMCofStudent(id);
								}
							}
							if (stat)
							{
								cout << "Student Does Not Exist!" << endl;
							}
							system("pause");
						}
						if (achoice == 14)
						{
							system("cls");
							a.DisplayAdmin();
							system("pause");
						}
						if (achoice == 15)
						{
							goto menu;
						}
						if (achoice == 0)
						{
							system("cls");
							cout << "\n\t\t=====THANKS FOR COMING=====" << endl << endl;
							exit(0);
						}
					} while (true);
				}
				else
				{
				    cout << endl << "INVALID PASSWORD!!!" << endl << endl;
					goto menu;
                }
			}
			else
			{
				cout << endl << "INVALID ID!!!" << endl << endl;
				goto menu;
			}
		}
		if (choice == 2)
		{
			int id;
			string pass;
			cout << "ENTER ID : ";
			cin >> id;
			cout << "PASSWORD : ";
			cin >> pass;
			if (a.getFacuility(id).getID() == id)
			{
				if (a.getFacuility(id).getFacuilityPassword() == pass)
				{
					Facuilty *ptr = &a.getFacuility(id);
					do
					{
						system("cls");
						int tchoice;
						cout << "\t\t\t.....WELCOME " << ptr->getFirstName() << "....." << endl << endl;
						cout << "1. VIEW COURSES." << endl;
						cout << "2. VIEW STUDENTS." << endl;
						cout << "3. MARK ATTENDANCE." << endl;
						cout << "4. CREATE ASSIGNMENT." << endl;
						cout << "5. ASSIGN MARKS." << endl;
						cout << "6. ASSIGN CGPA." << endl;
						cout << "7. ASSIGN GRADES." << endl;
						cout << "8. VIEW PROFILE." << endl;
						cout << "9. LOGOUT." << endl;
						cout << "0. EXIT." << endl;
						cout << "ENTER CHOICE : ";
						cin >> tchoice;
						while (tchoice < 0 || tchoice>9)
						{
							cout << "INVALID!!";
							cout << "ENTER AGAIN : ";
							cin >> tchoice;
						}
						if (tchoice == 1)
						{
							system("cls");
							ptr->ViewCoursesTeaching();
							system("pause");
						}
						if (tchoice == 2)
						{
							system("cls");
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0 )
							{
								cout << "INVALID!";
								cout << "Enter Again : ";
								cin >> id;
							}
							ptr->ViewStudentsInCourse(id);
							system("pause");
						}
						if (tchoice == 3)
						{
							system("cls");
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!";
								cout << "Enter Again : ";
								cin >> id;
							}
							cout << "Enter Cuurent Day :";
							cin >> jd;
							while (jd <= 0 || jd > 31)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jd;
							}
							cout << "Enter Current Month : ";
							cin >> jm;
							while (jm <= 0 || jm > 12)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jm;
							}
							cout << "Enter Current Year : ";
							cin >> jy;
							while (jy <= 2000 || jy > 2500)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jy;
							}
							ptr->MarkAttendanceforCourse(id, jd, jm, jy);
							system("pause");
						}
						if (tchoice == 4)
						{
							system("cls");
							float tmark;
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!";
								cout << "Enter Again : ";
								cin >> id;
							}
							cout << "Enter Assignment Title : ";
							getline(cin, fn);
							cout << "Enter Assignment Day :";
							cin >> jd;
							while (jd <= 0 || jd > 31)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jd;
							}
							cout << "Enter Assignment Month : ";
							cin >> jm;
							while (jm <= 0 || jm > 12)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jm;
							}
							cout << "Enter Assignment Year : ";
							cin >> jy;
							while (jy <= 2000 || jy > 2500)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jy;
							}
							cout << "Enter Assignment Total Marks : ";
							cin >> tmark;
							while (tmark<=0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> tmark;
							}
							cout << "Enter Assigment Weightage : ";
							cin >> bd;
							while (bd <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bd;
							}
							ptr->CreateAssignment(id, fn, jd, jm, jy, tmark, jd);
							system("pause");
						}
						if (tchoice == 5)
						{
							system("cls");
							cout << "Enter Course Code : ";
							cin >> bd;
							while (bd <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bd;
							}
							cout << "Enter Student ID : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							ptr->AssignMarks(bd, id);
							system("pause");
						}
						if (tchoice == 6)
						{
							system("cls");
							cout << "Enter Course Code : ";
							cin >> bd;
							while (bd <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bd;
							}
							cout << "Enter Student ID : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							ptr->AssignCGPA(bd, id);
							system("pause");
						}
						if (tchoice == 7)
						{
							system("cls");
							cout << "Enter Course Code : ";
							cin >> bd;
							while (bd <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> bd;
							}
							cout << "Enter Student ID : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							ptr->AssignGrades(bd, id);
							system("pause");
						}
						if (tchoice == 8)
						{
							system("cls");
							ptr->DisplayFacuility();
							system("pause");
						}
						if (tchoice == 9)
						{
							goto menu;
						}
						if (tchoice == 0)
						{
							system("cls");
							cout << "\n\t\t=====THANKS FOR COMING=====" << endl << endl;
							exit(0);
						}
					} while (true);
				}
				else
				{
				    cout << endl << "INVALID PASSWORD!!!" << endl << endl;
				    goto menu;
				}
			}
			else
			{
				cout << endl << "INVALID ID!!!" << endl << endl;
				goto menu;
			}
		}
		if (choice == 3)
		{
			int id;
			string pass;
			cout << "ENTER ID : ";
			cin >> id;
			cout << "PASSWORD : ";
			cin >> pass;
			if (a.getStudent(id).getID() == id)
			{
				if (a.getStudent(id).getStuPassword() == pass)
				{
					Student *ptr = &a.getStudent(id);
					do
					{
						system("cls");
						int schoice;
						cout << "\t\t\t.....WELCOME " << ptr->getFirstName() << "....." << endl << endl;
						cout << "1. ADD COURSE." << endl;
						cout << "2. DROP COURSE." << endl;
						cout << "3. VIEW COURSES ENROLLED." << endl;
						cout << "4. VIEW ATTENDANCE." << endl;
						cout << "5. VIEW ASSIGNMENT." << endl;
						cout << "6. VIEW GRADES." << endl;
						cout << "7. VIEW DMC" << endl;
						cout << "8. VIEW PROFILE." << endl;
						cout << "9. LOGOUT." << endl;
						cout << "0. EXIT." << endl;
						cout << "ENTER CHOICE : ";
						cin >> schoice;
						while (schoice < 0 || schoice>9)
						{
							cout << "INVALID!!" << endl;
							cout << "ENTER AGAIN : ";
							cin >> schoice;
						}
						if (schoice == 1)
						{
							system("cls");
							bool stat = true;
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							for (int i = 0; i < a.getNumofCourses(); i++)
							{
								if ((a.getCourse(id).getCourseID() == id) && (a.getCourse(id).getNumofStudents()<40))
								{
									a.RegisterCourse(id, ptr->getID());
									stat = false;
								}
							}
							if (stat)
							{
								cout << "Course Not Found OR Course is Full." << endl;
							}
							system("pause");
						}
						if (schoice == 2)
						{
							system("cls");
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> id;
							}
							for (int i = 0; i < a.getNumofCourses(); i++)
							{
								if (a.getCourse(id).getCourseID() == id)
								{
									a.DropCourse(id, ptr->getID());
								}
							}
							system("pause");
						}
						if (schoice == 3)
						{
							system("cls");
							cout << "\t\t====COURSES ENROLLED====" << endl << endl;
							ptr->ViewCoursesRegistered();
							system("pause");
						}
						if (schoice == 4)
						{
							system("cls");
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!";
								cout << "Enter Again : ";
								cin >> id;
							}
							cout << "Enter Monitoring Day :";
							cin >> jd;
							while (jd <= 0 || jd > 31)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jd;
							}
							cout << "Enter Monitoring Month : ";
							cin >> jm;
							while (jm <= 0 || jm > 12)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jm;
							}
							cout << "Enter Monitoring Year : ";
							cin >> jy;
							while (jy <= 2000 || jy > 2500)
							{
								cout << "INVALID!" << endl;
								cout << "Enter Again : ";
								cin >> jy;
							}
							ptr->ViewAttendance(id, jd, jm, jy);
							system("pause");
						}
						if (schoice == 5)
						{
							system("cls");
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!";
								cout << "Enter Again : ";
								cin >> id;
							}
							ptr->ViewAssignments(id);
							system("pause");
						}
						if (schoice == 6)
						{
							system("cls");
							cout << "Enter Course Code : ";
							cin >> id;
							while (id <= 0)
							{
								cout << "INVALID!";
								cout << "Enter Again : ";
								cin >> id;
							}
							ptr->viewGrade(id);
							system("pause");
						}
						if (schoice == 7)
						{
							system("cls");
							ptr->ViewDMC();
							system("pause");
						}
						if (schoice == 8)
						{
							system("cls");
							ptr->DisplayStudent();
							system("pause");
						}
						if(schoice==9)
						{
							goto menu;
					    }
						if (schoice == 0)
						{
							system("cls");
							cout << "\n\t\t=====THANKS FOR COMING=====" << endl << endl;
							exit(0);
						}
					} while (true);
				}
				else
				{
				    cout << endl << "INVALID PASSWORD!!!" << endl << endl;
				    goto menu;
				}
			}
			else
			{
				cout << endl << "INVALID ID!!!" << endl << endl;
				goto menu;
			}
		}
		if (choice == 0)
		{
			system("cls");
			cout <<endl << "             =====THANKS FOR COMING=====" << endl << endl;
			exit(0);
		}
	}while (true);

}