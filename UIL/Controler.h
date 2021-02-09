#pragma once
#include "IStaffModel.h"

class Controler
{
private:
	IService* Service;
public:
	Controler(IService* service);
	void AddTask(TaskModel* obj);
	vector<TaskModel*> GetTaskText();
};

