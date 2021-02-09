#pragma once
#include "IStaff.h"

class TeamLead :
    public IStaff
{
private:
public:
	TeamLead(int id, string name);
	IStaff* GetCoolerStaff();
	void AddStaff(IStaff* staff);
	void RemoveStaff(IStaff* staff, IStaff* coolerstaff);
	bool IsCool();
	void MakeSprintReport(SprintReport* report);
	void MakeSprintEnded();
	string GetSprintText();

};

