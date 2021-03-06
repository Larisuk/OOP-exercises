#pragma once
#include "Eveniment.h"
#include<iostream>
using namespace std;

class EvenimentTemporar :
	public Eveniment
{
private:
	double pretIntrare;
	bool disponibil;
	struct d {
		int zi, luna, an;
	}data;
protected:
	void readExtra(istream& in) {
		cout << "Pret intrare:";
		in >> pretIntrare;
		cout << "Disponibil?";
		in >> disponibil;
		if (disponibil)
		{
			cout << "Precizati data:";
			in >> data.zi >> data.luna >> data.an;
		}
	};
	void displayExtra(ostream& out) const {
		out << "Pret intrare:";
		 out<<pretIntrare<<"lei"<<endl;
	};
public:
	EvenimentTemporar() { pretIntrare = 0; }
	EvenimentTemporar(double p):pretIntrare(p){}
	int getLuna() { return data.luna; }
	int getAn() { return data.an; }
	bool getTemp() { return disponibil; }
	double getCost() {
		double suma = 0;
		for (unsigned i = 0; i < vizitatori.size(); i++)
		{
			if (vizitatori[i].getVarsta() <= 7)suma +=0;
			if (vizitatori[i].getCategorie() == "student" || vizitatori[i].getCategorie() == "elev")suma += (pretIntrare - pretIntrare * 75 / 100);
			if (vizitatori[i].getCategorie() == "pensionar")suma += pretIntrare * 1 / 2;
		}
		return suma;
	}

};

