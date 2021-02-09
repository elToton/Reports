#pragma once
#include "IRepositoryDAL.h"
#include "TaskSystem.h"


class IService
{
public:
	virtual void AddTask(Task* obj) = 0;
	virtual void AddStaff(IStaff* obj) = 0;
	virtual void AddReport(IReport* obj) = 0;
	virtual vector<Task*> GetTask() = 0;
};

