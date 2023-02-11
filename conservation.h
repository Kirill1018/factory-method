#pragma once
#include "factory method.h"
class Conservation : public Skeleton
{
public:
	string getName()
	{
		SetColor(3, 0);
		cout << "сохранение" << endl;
		return "";
	}
};