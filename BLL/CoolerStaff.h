#pragma once
#include "IStaff.h"
class CoolerStaff :
    public IStaff
{
private:
    IStaff* coolerStaff;
public:
    CoolerStaff(int id, string name);
    void SetCoolerStaff(IStaff* coolerstaff);
    IStaff* GetCoolerStaff();
    void AddStaff(IStaff* staff);
    void RemoveStaff(IStaff* staff, IStaff* coolerstaff);
    bool IsCool();
    void MakeSprintReport(SprintReport* report);
    void MakeSprintEnded();
    string GetSprintText();
};

