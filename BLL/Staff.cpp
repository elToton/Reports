#include "pch.h"
#include "Staff.h"

Staff::Staff(int id, string name)
{
	ID = id;
	Name = name;
}

void Staff::SetCoolerStaff(IStaff* coolerstaff)
{
	this->CoolerStaff = coolerstaff;
}

IStaff* Staff::GetCoolerStaff()
{
	return this->CoolerStaff;
}

void Staff::MakeSprintReport(SprintReport* report)
{
	for (int i = 0; i < Tasks.size(); i++) {
		report->WriteLine(Tasks[i]->GetName() + "/n");
	}
	Report = report;
}

void Staff::MakeSprintEnded()
{
	Report->SetEnded(1);
	//add to system
}

string Staff::GetSprintText()
{
	return Report->GetDruft();
}
