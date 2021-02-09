#pragma once
#include <string>
#include "IEntity.h"

using namespace std;

class IReport : public IEntity
{
public:
	virtual int GetID() = 0;
	virtual void Edit(string text) = 0;
	virtual void WriteLine(string text) = 0;
};

