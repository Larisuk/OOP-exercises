#pragma once
#include "Pacient.h"

class Copil :
	virtual public Pacient
{private:
	string numeMama;
	string prenumeMama;
	string numeTata;
	string prenumeTata;
	string anteceDent; //se ve trece iniatala tatalui si/sau a mamei in caz de antecedent
						//in caz negativ va fi scris "NU"
	struct fisaMedicala {
		string data;
		float proteinaC;
	}date;
protected:

	void readExtra(istream& in);
	void showExtra(ostream& out) const;
public:
	Copil operator=(const Copil& c);
	float getProteina() { return date.proteinaC; }
	string getAntecedent() { return anteceDent; }
	void setData() { date.data = this->getData(); }
};

