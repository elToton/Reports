#include "pch.h"
#include "DayReport.h"

//DayReport::DayReport(string text)
//{
//	Text = text;
//}

int DayReport::GetID()
{
	return ID;
}

void DayReport::Edit(string text)
{
	Text = text;
}

void DayReport::WriteLine(string text)
{
	Text += text;
}
