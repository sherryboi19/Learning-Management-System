#pragma once
#include"Date.h"
class Assignment
{
private:
	string Title;
	Date DateofTest;
	float TotalMarks;
	int Weightage;
	float ObtainedMarks;
public:
	Assignment(string t = "None", int td = 0, int tm = 0, int ty = 0, float tmark = 0.0, int w = 0, float omark = 0) :Title(t), DateofTest(td, tm, ty), TotalMarks(tmark), Weightage(w), ObtainedMarks(omark)
	{
	}
	string getTitle();
	
	Date getDateofTest();

	float getTotalMarks();
	
	int getWeightage();
	
	float getObtainedMarks();
	
	void setTitle(string t);
	
	void setDateofTest(int td, int tm, int ty);

	void setTotalMarks(float tmark);
	
	void setWeightage(int w);
	
	void setObtainedMarks(float omark);
	
	void setAssignment(string t, int td, int tm, int ty, float tmark, int w);
	
	void AssignmentDetails();
	
	void DisplayAssignment();
	
	~Assignment()
	{

	}
};