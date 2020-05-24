#pragma once
#include "Companie1.h"
#include "RentaCar.h"
class Companie3 :
	public Companie1
{
private:
	string localitate, judet;
	int km1, km2;
public:
	Companie3()
	{
		Companie1::CostControl(localitate,  km1, judet,km2);
	}
};

