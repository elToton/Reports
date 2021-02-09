#include "pch.h"
#include "IReportDAL.h"

IReportDAL::IReportDAL(int id)
{
    ID = id;
}

int IReportDAL::GetID()
{
    return 0;
}

string IReportDAL::GetDruft()
{
    return Druft;
}

string IReportDAL::GetText()
{
    return Text;
}

bool IReportDAL::IsEnded()
{
    return Ended;
}

void IReportDAL::SetEnded(bool ended)
{
    Ended = ended;
}

void IReportDAL::SetDruft(string druft)
{
    Druft = druft;
}

void IReportDAL::SetText(string text)
{
    Text = text;
}
