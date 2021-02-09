#include "pch.h"
#include "CoolerStaff.h"

CoolerStaff::CoolerStaff(int id, string name)
{
	ID = id;
	Name = name;
}

void CoolerStaff::SetCoolerStaff(IStaff* coolerstaff)
{
	this->coolerStaff = coolerstaff;
}

IStaff* CoolerStaff::GetCoolerStaff()
{
	return this->coolerStaff;
}

void CoolerStaff::AddStaff(IStaff* staff)
{
	this->Staffs.push_back(staff);
	staff->SetCoolerStaff(this);
}

void CoolerStaff::RemoveStaff(IStaff* staff, IStaff* coolerstaff)
{
	string name = staff->GetName();
	for (int i = 0; i < Staffs.size(); i++) {
		if (Staffs[i]->GetName() == name) {
			this->Staffs.erase(Staffs.begin() + i);
			break;
		}
	}
	staff->SetCoolerStaff(coolerstaff);
}

bool CoolerStaff::IsCool()
{
	return true;
}

void CoolerStaff::MakeSprintReport(SprintReport* report)
{
	for (int i = 0; i < Tasks.size(); i++) {
		report->Edit(Tasks[i]->GetName() + "/n");
	}
	for (int i = 0; i < Staffs.size(); i++) {
		if (Staffs[i]->GetReport()->IsEnded()) report->WriteLine(Staffs[i]->GetSprintText() + "/n");
	}
	Report = report;
}

void CoolerStaff::MakeSprintEnded()
{
	Report->SetEnded(1);
	//add to system
}

string CoolerStaff::GetSprintText()
{
	return Report->GetDruft();
}
