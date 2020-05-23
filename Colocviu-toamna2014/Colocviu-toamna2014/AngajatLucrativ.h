#pragma once
#include "Angajat.h"
class AngajatLucrativ :
	public Angajat
{
private:
	 string tip ;
	int nrCopii;
protected:
	void displayExtra(ostream& out) const {
		out << tip << endl <<"minori:"<< nrCopii << endl;
	}
	void readExtra(istream& in) {
		cout << "Nr. copii:";
		in >> nrCopii;
		calcPrima();
	}
public:
	AngajatLucrativ() = default;
	AngajatLucrativ(string n, string p, string c, int z, int l, int a, int nr) :Angajat(n, p, c, z, l, a) {
		tip = "lucrativ";
		nrCopii = nr;
		calcPrima();
	}
	void calcPrima() {
		int p = getPrima();			//0,083/luna
		int z = getZi();
		int l = getLuna();
		int a = getAn();
		if (a < 2014)
		{
			a = 2014 - a;
			p += nrCopii * a * p / 100;
			this->setPrima(p);

		}
		if (a == 2014)
		{	
			p += 1 / 10 * l * nrCopii/100;
			this->setPrima(p);
		}
		
	}
	int getMinori() { return nrCopii; }
};

