#include "pch.h"
#include "TeamLead.h"

TeamLead::TeamLead(int id, string name)
{
	ID = id;
	Name = name;
}

IStaff* TeamLead::GetCoolerStaff()
{
	return this;
}

void TeamLead::AddStaff(IStaff* staff)
{
	this->Staffs.push_back(staff);
	staff->SetCoolerStaff(this);
}

void TeamLead::RemoveStaff(IStaff* staff, IStaff* coolerstaff)
{
	staff->GetCoolerStaff()->RemoveStaff(staff, coolerstaff);
}

bool TeamLead::IsCool()
{
	return true;
}

void TeamLead::MakeSprintReport(SprintReport* report)
{
	for (int i = 0; i < Tasks.size(); i++) {
		report->Edit(Tasks[i]->GetName() + "/n");
	}
	for (int i = 0; i < Staffs.size(); i++) {
		if (Staffs[i]->GetReport()->IsEnded()) report->WriteLine(Staffs[i]->GetSprintText() + "/n");
	}
	Report = report;
}

void TeamLead::MakeSprintEnded()
{
	for (int i = 0; i < Staffs.size(); i++) {
		Report->SetEnded(Staffs[i]->GetReport()->IsEnded());
	}
	if (Report->IsEnded()) {
		Report->Text = Report->GetDruft();
		//add to system
	}
}

string TeamLead::GetSprintText()
{
	return Report->GetText();
}
