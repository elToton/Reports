#pragma once
#include "IReport.h"

class DayReport :
    public IReport
{
private:
    string Text;
    int ID;
public:
    //DayReport(string text);
    int GetID();
    void Edit(string text);
    void WriteLine(string text);
};

