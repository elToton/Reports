#include "pch.h"
#include "TaskSystem.h"

Task* TaskSystem::SearchByID(int id)
{
	for (int i = 0; i < Tasks.size(); i++) {
		if (Tasks[i]->GetID() == id) return Tasks[i];
	}
}

Task* TaskSystem::SearchByTime(time_t date)
{
	return History[date];
}

vector<Task*> TaskSystem::SearchByStaff(IStaff* staff)
{
	return staff->GetTasks();
}

vector<Task*> TaskSystem::SearchByStaffChange(IStaff* staff)
{
	return ChangeHistory[staff];
}

//Task* TaskSystem::MakeTask(IStaff* staff, string name, int id, string text)
//{
//	Task* task = new Task(staff, name, id, text, Active);
//	Tasks.push_back(task);
//	CheckDate(task);
//	return task;
//}

void TaskSystem::MakeTask(Task* task)
{
	Tasks.push_back(task);
	CheckDate(task);
}

void TaskSystem::ChangeTaskCondition(Conditions condition, Task* task, IStaff* staff)
{
	task->SetCondition(condition);
	CheckDate(task);
	ChangeHistory[staff].push_back(task);
}

void TaskSystem::AddCommentToTask(string comment, Task* task, IStaff* staff)
{
	task->SetComment(comment);
	CheckDate(task);
	ChangeHistory[staff].push_back(task);
}

void TaskSystem::ChangeTaskStaff(IStaff* staff, Task* task)
{
	task->GetStaff()->DeleteTask(task);
	task->SetStaff(staff);
	CheckDate(task);
}

vector<Task*> TaskSystem::GetStaffsTasks(IStaff* staff)
{
	if (staff->IsCool() == 0) throw  invalid_argument("staff is a leaf");
	else {
		vector<Task*> tasks;
		vector<IStaff*> staffs = staff->GetAllStaffs();
		for (int i = 0; i < staffs.size(); i++) {
			tasks.insert(tasks.cend(), staffs[i]->GetTasks().begin(), staffs[i]->GetTasks().end());
		}
		return tasks;
	}
}

void TaskSystem::CheckDate(Task* task)
{
	//tm Date;
	time_t Time = time(0);
	//localtime_s(&Date, &Time);
	History[Time] = task;
}

void TaskSystem::DeleteTask(Task* task)
{
	task->GetStaff()->DeleteTask(task);
	int id = task->GetID();
	for (int i = 0; i < Tasks.size(); i++) {
		if (Tasks[i]->GetID() == id) {
			this->Tasks.erase(this->Tasks.begin() + i);
			break;
		}
	}
}


