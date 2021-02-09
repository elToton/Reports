#pragma once
#include <vector>
#include <stdexcept>
#include <ctime>
#include "IReportDAL.h"
#include "Enum.h"
//#include "SprintReport.h"
//#include "DayReport.h"


class IStaffDAL;

using namespace std;


#include "IEntityDAL.h"

class TaskDAL :
    public IEntityDAL
{
private:
	int ID;
	string Name;
	string Text;
	IStaffDAL* Staff;
	Conditions Condition;
	string Comment;
public:
	TaskDAL(string name, int id, string text);//add stuff
	IStaffDAL* GetStaff();
	void SetStaff(IStaffDAL* staff);
	int GetID();
	string GetName();
	string GetText();
	void SetText(string text);
	Conditions GetCondition();
	void SetCondition(Conditions condition);
	string GetComment();
	void SetComment(string comment);
};

