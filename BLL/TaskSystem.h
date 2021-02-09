#pragma once
#include "IStaff.h"
#include <unordered_map>

class TaskSystem
{
private:
	vector<Task*> Tasks;
	unordered_map<time_t, Task*> History;
	unordered_map<IStaff*, vector<Task*>> ChangeHistory;
public:
	//add Search
	Task* SearchByID(int id);
	Task* SearchByTime(time_t date);
	vector<Task*> SearchByStaff(IStaff* staff);
	vector<Task*> SearchByStaffChange(IStaff* staff);
	//Task* MakeTask(IStaff* staff, string name, int id, string text);
	void MakeTask(Task* task);
	void ChangeTaskCondition(Conditions condition, Task* task, IStaff* staff);
	void AddCommentToTask(string comment, Task* task, IStaff* staff);
	void ChangeTaskStaff(IStaff* staff, Task* task);
	vector<Task*> GetStaffsTasks(IStaff* staff);
	void CheckDate(Task* task);
	void DeleteTask(Task* task);
};

