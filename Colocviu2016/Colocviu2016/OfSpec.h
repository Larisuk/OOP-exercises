#pragma once
#include "Pizza.h"
#include "PizzaSpec.h"
#include "Bautura.h"
class OfSpec 
{
	Pizza p;
	Bautura b;
	double pretOf;
	double castig;
public:
	OfSpec()=default;
	OfSpec(Pizza pp, Bautura bb) :p(pp), b(bb) { setPret(); }
	void setPret() {
		double pret = b.getpretBr() + p.pret();
		castig = (pret - b.getpretBr() - p.getpretPz());
		pretOf = pret - pret/5;
	}

	friend ostream& operator<<(ostream& out, const OfSpec& of) {
		out << "Oferta speciala are:" <<endl ;
		out << "Pret:" << of.pretOf << endl;
		out << "Bautura:" << of.b << endl;
		out << "Pizza:" << of.p << endl;
		out << "Cu profitul:" << of.castig << endl;
		return out;

	}
};

