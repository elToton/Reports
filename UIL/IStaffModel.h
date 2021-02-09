#pragma once
#include "TaskModel.h"

class IStaffModel
{
private:
	vector<TaskModel*> Tasks;
	vector<IStaffModel*> Staffs;
	IStaffModel* coolerStaff;
	string Name;
	int ID;
public:
	IStaffModel(string name, int id);
	void AddTask(TaskModel* task);
	void SetCooler(IStaffModel* staff);
	void AddStaff(IStaffModel* staff);
	string GetName();
	int GetID();
	vector<TaskModel*> GetTasks();
};

