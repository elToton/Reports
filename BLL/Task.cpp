#include "pch.h"
#include "Task.h"

Task::Task(string name, int id, string text)
{
	Name = name;
	ID = id;
	Text = text;
	Condition = Open;
	//add stuff
}

IStaff* Task::GetStaff()
{
	return Staff;
}

void Task::SetStaff(IStaff* staff)
{
	Staff = staff;
}

int Task::GetID()
{
	return ID;
}

string Task::GetName()
{
	return Name;
}

string Task::GetText()
{
	return Text;
}

void Task::SetText(string text)
{
	Text = text;
}

Conditions Task::GetCondition()
{
	return Condition;
}

void Task::SetCondition(Conditions condition)
{
	Condition = condition;
}

string Task::GetComment()
{
	if (Comment == "")
		return "";
	else 
		return Comment;
}

void Task::SetComment(string comment)
{
	Comment = comment;
}
