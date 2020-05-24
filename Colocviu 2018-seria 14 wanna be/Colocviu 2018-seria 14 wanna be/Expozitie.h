#pragma once
#include "Eveniment.h"
class Expozitie :
	public Eveniment
{
protected:
	virtual void readExtra(istream& in) {};
	virtual void displayExtra(ostream& out) const {};
public:
	Expozitie() = default;
};

