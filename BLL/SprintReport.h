#pragma once
#include "IReport.h"

class SprintReport :
    public IReport
{
private:
    int ID;
    string Text;
    string Druft;
    bool Ended;
public:
    //SprintReport(string text);
    int GetID();
    void Edit(string text);
    void WriteLine(string text);
    bool IsEnded();
    void SetEnded(bool ended);
    string GetDruft();
    string GetText();
    
    friend class TeamLead;
};

