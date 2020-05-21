#pragma once
#include "Produs.h"
#include "Comanda.h"
#include<string>
#include<iostream>
using namespace std;
class ComSpec :
	public Comanda
{
private:
	string ObsC;
	float pretSupi;
protected:
	void readExtra(istream& in) {
		cout << "Observatii:";
		cout << "Produs nou:";
		string nume;
		in >> nume;
		float pret;
		cout << "Pret:";
		in >> pret;
		Produs p(pret,nume);
		cout << "Nr.portii:";
		int nr;
		in >> nr;
		this->setNr(nr);
		pretSupi = p.getPret() * nr;
		ObsC = p.getNume() + " " + to_string(nr) + " portii";
	}
	void displayExtra(ostream& out) const{
		out << ObsC << endl << pretSupi << endl;
	}
public:
	ComSpec() = default;
	float getPretSupli() { return pretSupi; }
	float getValoareExtra() { return this->getValoare() + pretSupi; }
};

