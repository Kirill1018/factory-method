#pragma once
#include "factory method.h"
class Creature : public Skeleton
{
public:
	string getName()
	{
		SetColor(1, 0);
		cout << "создание" << endl;
		return "";
	}
};