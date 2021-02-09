#include "pch.h"
#include "IStaff.h"


string IStaff::GetName()
{
	return Name;
}

int IStaff::GetID()
{
	return ID;
}

void IStaff::SetFirstDayTask(int task)
{
	FirstTaskPerDay = task;
}

void IStaff::SetCoolerStaff(IStaff* coolerstaff)
{
	coolerStaff = coolerstaff;
}

IStaff* IStaff::GetCoolerStaff()
{
	return coolerStaff;
}

void IStaff::AddStaff(IStaff* staff)
{
	this->Staffs.push_back(staff);
}


bool IStaff::IsCool()
{
	return false;
}

void IStaff::AddTask(Task* task)
{
	this->Tasks.push_back(task);
}

void IStaff::DeleteTask(Task* task)
{
	int id = task->GetID();
	vector<Task*> tasks = task->GetStaff()->GetTasks();
	for (int i = 0; i < tasks.size(); i++) {
		if (tasks[i]->GetID() == id) {
			this->Tasks.erase(this->Tasks.begin() + i);
			break;
		}
	}
}

vector<IStaff*> IStaff::GetAllStaffs()
{
	return Staffs;
}

vector<Task*> IStaff::GetTasks()
{
	return Tasks;
}

SprintReport* IStaff::GetReport()
{
	return Report;
}



