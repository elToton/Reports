#pragma once
#include "Service1.h"

class IStaffModel;

class TaskModel
{
private:
	int ID;
	string Name;
	string Text;
	IStaffModel* Staff;
public:
	TaskModel(string name, int id, string text);
	string GetName();
	string GetText();
	int GetID();
	void SetStaff(IStaffModel* staff);
};

