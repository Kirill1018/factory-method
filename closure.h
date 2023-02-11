#pragma once
#include "factory method.h"
class Closure : public Skeleton
{
public:
	string getName()
	{
		SetColor(6, 0);
		cout << "закрытие" << endl;
		return "";
	}
};