#include "pch.h"
#include "TaskDAL.h"

TaskDAL::TaskDAL(string name, int id, string text)
{
	Name = name;
	ID = id;
	Text = text;
	Condition = Open;
	//add stuff
}

IStaffDAL* TaskDAL::GetStaff()
{
	return Staff;
}

void TaskDAL::SetStaff(IStaffDAL* staff)
{
	Staff = staff;
}

int TaskDAL::GetID()
{
	return ID;
}

string TaskDAL::GetName()
{
	return Name;
}

string TaskDAL::GetText()
{
	return Text;
}

void TaskDAL::SetText(string text)
{
	Text = text;
}

Conditions TaskDAL::GetCondition()
{
	return Condition;
}

void TaskDAL::SetCondition(Conditions condition)
{
	Condition = condition;
}

string TaskDAL::GetComment()
{
	if (Comment == "")
		return "";
	else
		return Comment;
}

void TaskDAL::SetComment(string comment)
{
	Comment = comment;
}

