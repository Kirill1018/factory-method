#include "closure.h"
#include "cons with new name.h"
#include "conservation.h"
#include "creature.h"
#include "discovery.h"
#include "print.h"
void main()
{
	setlocale(LC_ALL, "ru");
	Creature creation;
	creation.getName();
	Discovery opening;
	opening.getName();
	Conservation saving;
	saving.getName();
	Cons_with_new_name sav_with_new_name;
	sav_with_new_name.getName();
	Print printing;
	printing.getName();
	Closure shutting;
	shutting.getName();
}