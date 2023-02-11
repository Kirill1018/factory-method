#pragma once
#include "factory method.h"
class Cons_with_new_name : public Skeleton
{
public:
	string getName()
	{
		SetColor(4, 0);
		cout << "сохранение под новым именем" << endl;
		return "";
	}
};