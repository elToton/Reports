#include "TaskModel.h"

TaskModel::TaskModel(string name, int id, string text)
{
	Name = name;
	ID = id;
	Text = text;
}

string TaskModel::GetName()
{
	return Name;
}

string TaskModel::GetText()
{
	return Text;
}

int TaskModel::GetID()
{
	return ID;
}

void TaskModel::SetStaff(IStaffModel* staff)
{
	Staff = staff;
}
