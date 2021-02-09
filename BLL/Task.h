#pragma once
#include <vector>
#include <stdexcept>
#include <ctime>
#include "SprintReport.h"
#include "DayReport.h"
#include "Enum.h"

class IStaff;

using namespace std;


class Task : public IEntity
{
private:
	int ID;
	string Name;
	string Text;
	IStaff* Staff;
	Conditions Condition;
	string Comment;
public:
	Task(string name, int id, string text);
	IStaff* GetStaff();
	void SetStaff(IStaff* staff);
	int GetID();
	string GetName();
	string GetText();
	void SetText(string text);
	Conditions GetCondition();
	void SetCondition(Conditions condition);
	string GetComment();
	void SetComment(string comment);
};

