#include <iostream>
#include "Controler.h"

int main()
{
	IRepositoryDAL<TaskDAL> TaskRepo;
	IRepositoryDAL<IStaffDAL> StaffRepo;
	IRepositoryDAL<IReportDAL> ReportRepo;

    IService* service = new Service1(TaskRepo, StaffRepo, ReportRepo);

	Controler* controler = new Controler(service);

	TaskModel* task = new TaskModel("OOP", 1, "I want 4");
	IStaffModel* staff = new IStaffModel("Platon", 22);

	staff->AddTask(task);
	vector<TaskModel*> vec1 = staff->GetTasks();
	for (int i = 0; i < vec1.size(); i++) {
		cout << vec1[i]->GetText() << endl;
	}

	controler->AddTask(task);
	vector<TaskModel*> vec2 = controler->GetTaskText();
	for (int i = 0; i < vec2.size(); i++) {
		cout << vec2[i]->GetText() << endl;
	}
}

