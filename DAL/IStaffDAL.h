#pragma once
#include "TaskDAL.h"

using namespace std;

//class TaskBLL;

class IStaffDAL : public IEntityDAL
{
protected:
	vector<TaskDAL*> Tasks;
	vector<IStaffDAL*> Staffs;
	IStaffDAL* coolerStaff;
	string Name;
	int ID;
	IReportDAL* Report;
public:
	IStaffDAL(string name, int id);
	string GetName();
	int GetID();
	void SetCoolerStaff(IStaffDAL* coolerstaff);
	IStaffDAL* GetCoolerStaff();
	void AddStaff(IStaffDAL* staff);
	void AddTask(TaskDAL* task);
	void DeleteTask(TaskDAL* task);
	vector<IStaffDAL*> GetAllStaffs();
	vector<TaskDAL*> GetTasks();
};

