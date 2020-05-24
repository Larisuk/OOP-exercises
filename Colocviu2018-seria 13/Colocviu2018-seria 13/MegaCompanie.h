#pragma once
#include"Companie1.h"
#include"RentaCar.h"
#include"Companie3.h"
class MegaCompanie:public Companie1,public RentaCar,public Companie3
{
private:
	string tara;
	double taxa;
};

