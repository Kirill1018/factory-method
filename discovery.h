#pragma once
#include "factory method.h"
class Discovery : public Skeleton
{
public:
	string getName()
	{
		SetColor(2, 0);
		cout << "��������" << endl;
		return "";
	}
};