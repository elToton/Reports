#pragma once
#include "Task.h"

using namespace std;

//class Task;

class IStaff : public IEntity
{
protected:
	vector<Task*> Tasks;
	vector<IStaff*> Staffs;
	IStaff* coolerStaff;
	string Name;
	int ID;
	int FirstTaskPerDay;
	SprintReport* Report;
public:
	string GetName();
	int GetID();
	void SetFirstDayTask(int task);
	void SetCoolerStaff(IStaff* coolerstaff);
	IStaff* GetCoolerStaff();
	void AddStaff(IStaff* staff);
	virtual void RemoveStaff(IStaff* staff, IStaff* coolerstaff) {};
	virtual bool IsCool();
	void AddTask(Task* task);
	void DeleteTask(Task* task);
	vector<IStaff*> GetAllStaffs();
	vector<Task*> GetTasks();
	void MakeDayReport(DayReport* report);
	virtual void MakeSprintReport(SprintReport* report) = 0;
	virtual void MakeSprintEnded() = 0;
	virtual string GetSprintText() = 0;
	SprintReport* GetReport();
	virtual ~IStaff() {};
};

