#pragma once
#include "factory method.h"
class Print : public Skeleton
{
public:
	string getName()
	{
		SetColor(5, 0);
		cout << "������" << endl;
		return "";
	}
};