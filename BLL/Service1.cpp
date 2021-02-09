#include "pch.h"
#include "Service1.h"

Service1::Service1(IRepositoryDAL<TaskDAL> taskRepo, IRepositoryDAL<IStaffDAL> staffRepo, IRepositoryDAL<IReportDAL> reportRepo)
{
	TaskRepo = taskRepo;
	StaffRepo = staffRepo;
	ReportRepo = reportRepo;
}

void Service1::AddTask(Task* obj)
{
	TaskDAL* task = new TaskDAL(obj->GetName(), obj->GetID(), obj->GetText());
	TaskRepo.Create(task);
}

void Service1::AddStaff(IStaff* obj)
{
	IStaffDAL* staff = new IStaffDAL(obj->GetName(), obj->GetID());
	StaffRepo.Create(staff);
}

void Service1::AddReport(IReport* obj)
{
	IReportDAL* report = new IReportDAL(obj->GetID());
	ReportRepo.Create(report);
}

vector<Task*> Service1::GetTask()
{
	vector<Task*> tasks;
	vector<TaskDAL*> tasksDAL = TaskRepo.GetAll();
	for (int i = 0; i < tasksDAL.size(); i++) {
		Task* task = new Task(tasksDAL[i]->GetName(), tasksDAL[i]->GetID(), tasksDAL[i]->GetText());
		tasks.push_back(task);
	}
	return tasks;
}