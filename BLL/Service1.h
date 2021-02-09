#pragma once
#include "IService.h"


class Service1 : public IService
{
private:
	IRepositoryDAL<TaskDAL> TaskRepo;
	IRepositoryDAL<IStaffDAL> StaffRepo;
	IRepositoryDAL<IReportDAL> ReportRepo;
public:
	Service1(IRepositoryDAL<TaskDAL> taskRepo, IRepositoryDAL<IStaffDAL> staffRepo, IRepositoryDAL<IReportDAL> reportRepo);
	void AddTask(Task* obj);
	void AddStaff(IStaff* obj);
	void AddReport(IReport* obj);
	vector<Task*> GetTask();
};