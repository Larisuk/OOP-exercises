#pragma once
#include "Angajat.h"
class AngajatContract :
	public Angajat
{
private:
	struct terminData {
		int zi, luna, an;
	}sfContract;
protected:
	virtual void readExtra(istream& in) {
		cout << "Zi sfContract:";
		in >> sfContract.zi;
		cout << "Luna sfContract:";
		in >> sfContract.luna;
		cout << "An sfContract:";
		in>> sfContract.an;
		this->calcPrima();
	};
	virtual void displayExtra(ostream& out)const {
		out << sfContract.zi << "." << sfContract.luna << "." << sfContract.an << endl;
	}
public:
	AngajatContract() = default;
	void calcPrima() {
		int p = getPrima();
		if (sfContract.an == 2014)
		{
			if (sfContract.luna <12)
			{
				p = p / 2;
				this->setPrima(p);
			}
			if (sfContract.luna == 12)
			{
				if (sfContract.zi <= 31)
				{
					p = p / 2;
					this->setPrima(p);
				}
			}
		}
		if (sfContract.an < 2014)
		{
			p = p / 2;
			this->setPrima(p);
		}
		if (sfContract.an > 2014)
		{
			this->setPrima(p);
		}
	}
	int getLunaFin() { return sfContract.luna; }
	int getAnFin() { return sfContract.an; }
};

