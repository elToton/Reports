#pragma once
#include "IStaff.h"

class Staff :
    public IStaff
{
private:
    IStaff* CoolerStaff;
public:
    Staff(int id, string name);
    void SetCoolerStaff(IStaff* coolerstaff);
    IStaff* GetCoolerStaff();
    void MakeSprintReport(SprintReport* report);
    void MakeSprintEnded();
    string GetSprintText();
};

