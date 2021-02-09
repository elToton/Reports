#include "pch.h"
#include "IStaffDAL.h"

IStaffDAL::IStaffDAL(string name, int id)
{
	Name = name;
	ID = id;
}

string IStaffDAL::GetName()
{
	return Name;
}

int IStaffDAL::GetID()
{
	return ID;
}

void IStaffDAL::SetCoolerStaff(IStaffDAL* coolerstaff)
{
	coolerStaff = coolerstaff;
}

IStaffDAL* IStaffDAL::GetCoolerStaff()
{
	return coolerStaff;
}

void IStaffDAL::AddStaff(IStaffDAL* staff)
{
	this->Staffs.push_back(staff);
}


void IStaffDAL::AddTask(TaskDAL* task)
{
	this->Tasks.push_back(task);
}

void IStaffDAL::DeleteTask(TaskDAL* task)
{
	int id = task->GetID();
	vector<TaskDAL*> tasks = task->GetStaff()->GetTasks();
	for (int i = 0; i < tasks.size(); i++) {
		if (tasks[i]->GetID() == id) {
			this->Tasks.erase(this->Tasks.begin() + i);
			break;
		}
	}
}

vector<IStaffDAL*> IStaffDAL::GetAllStaffs()
{
	return Staffs;
}

vector<TaskDAL*> IStaffDAL::GetTasks()
{
	return Tasks;
}
