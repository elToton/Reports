#include "Controler.h"

Controler::Controler(IService* service)
{
	Service = service;
}

void Controler::AddTask(TaskModel* obj)
{
	Task* task = new Task(obj->GetName(), obj->GetID(), obj->GetText());
	Service->AddTask(task);
}

vector<TaskModel*> Controler::GetTaskText()
{
	vector<TaskModel*> tasksModel;
	vector<Task*> tasks = Service->GetTask();
	for (int i = 0; i < tasks.size(); i++) {
		TaskModel* task = new TaskModel(tasks[i]->GetName(), tasks[i]->GetID(), tasks[i]->GetText());
		tasksModel.push_back(task);
	}
	return tasksModel;
}


