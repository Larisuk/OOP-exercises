#pragma once
#include "Comanda.h"
class ComOnline :
	public Comanda
{
private:
	string adrLivr;
	int comLivr;   //5% din valoarea comenzii; pretprod*nrportii; >=0;
protected:
	void readExtra(istream& in) {
		in >> adrLivr;
	}
	void displayExtra(ostream& out) const {
		out << adrLivr << endl;
	}
public:
};

