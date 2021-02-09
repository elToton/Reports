#include "pch.h"
#include "SprintReport.h"

//SprintReport::SprintReport(string text)
//{
//	Druft = text;
//}

int SprintReport::GetID()
{
	return ID;
}

void SprintReport::Edit(string text)
{
	Druft = text;
}

void SprintReport::WriteLine(string text)
{
	Druft += text;
}

bool SprintReport::IsEnded()
{
	return Ended;
}

void SprintReport::SetEnded(bool ended)
{
	Ended = ended;
}

string SprintReport::GetDruft()
{
	return Druft;
}

string SprintReport::GetText()
{
	return Text;
}
