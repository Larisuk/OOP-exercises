#pragma once
#include "Produse.h"
class ProdusePromotie :
	virtual public Produse
{
	unsigned procent;
protected:
	virtual void displayExtra(ostream& out) const {
		Produse::displayExtra(out);
		out << "Discount:";
		out << procent;
	};
	virtual void readExtra(istream& in) { Produse::readExtra(in); };
	void readExtraLot(Produse* p) {
		cout << "Procent discount:";
		cin >> procent;
	};
public:
	ProdusePromotie() { procent = 0; }
	void readLot() { 

		cout << "Procent discount:";
		cin >> procent; }
	void setProcent(unsigned p) { procent = p; }
	//unsigned getProcent() { return procent; }
	//void calcProcent(const Lot& l);
};

