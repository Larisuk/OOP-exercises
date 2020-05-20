#pragma once
#include "ProdusePromotie.h"
#include "ProdusePeris.h"
class ProdusPerisabilPromotie :
	  public ProdusePromotie, public ProdusePeris
{
protected:
	virtual void displayExtra(ostream& out) const {
		ProdusePromotie::displayExtra(out);
		ProdusePeris::displayExtra(out);
	};
	virtual void readExtra(istream& in) { Produse::readExtra(in); };
	void readExtraLot(Produse* p) {
		ProdusePeris::readExtraLot(p);
		ProdusePromotie::readExtraLot(p);	
	};
public:
	ProdusPerisabilPromotie() {};
};

