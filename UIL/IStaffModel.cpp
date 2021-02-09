#include "IStaffModel.h"

IStaffModel::IStaffModel(string name, int id)
{
	Name = name;
	ID = id;
}

void IStaffModel::AddTask(TaskModel* task)
{
	Tasks.push_back(task);
	task->SetStaff(this);
}

void IStaffModel::SetCooler(IStaffModel* staff)
{
	coolerStaff = staff;
}

void IStaffModel::AddStaff(IStaffModel* staff)
{
	Staffs.push_back(staff);
}

string IStaffModel::GetName()
{
	return Name;
}

int IStaffModel::GetID()
{
	return ID;
}

vector<TaskModel*> IStaffModel::GetTasks()
{
	return Tasks;
}
