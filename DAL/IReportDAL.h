#pragma once
#include <string>
#include "IEntityDAL.h"

using namespace std;

class IReportDAL : public IEntityDAL
{
private:
	int ID;
	string Text;
	string Druft;
	bool Ended;
public:
	IReportDAL(int id);
	int GetID();
	string GetDruft();
	string GetText();
	bool IsEnded();
	void SetEnded(bool ended);
	void SetDruft(string druft);
	void SetText(string text);
};