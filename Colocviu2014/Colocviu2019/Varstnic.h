#pragma once
#include "Pacient.h"
class Varstnic :
	virtual public Pacient
{
private:
	static bool fumator;
	static int sedentarism;
protected:
	virtual void readExtra(istream& in);
	virtual void showExtra(ostream& out) const;
public:

	bool getFumator() { return fumator; }
	int getSedentarism() { return sedentarism; }

};

