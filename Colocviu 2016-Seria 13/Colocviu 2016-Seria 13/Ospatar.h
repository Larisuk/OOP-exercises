#pragma once
#include"Comanda.h"
#include "ComSpec.h"
#include<iostream>
#include<vector>
using namespace std;
class Ospatar
{
private:
	string Nume;
	vector<Comanda*> comenzi;
	int nrComenzi;
	char gen;
	int varsta;
public:
	Ospatar() = default;
	Ospatar(string n, Comanda c[], int nr, char g, int v) :Nume(n) {
		nrComenzi = nr;
		for (int i = 0; i < nr; i++)
			comenzi.push_back(&c[i]);
		gen = g;
		varsta = v;
	}
	~Ospatar() {
		Nume = "";
		nrComenzi = 0;
		gen = NULL;
		varsta = 0;
		for (unsigned i = 0; i < comenzi.size(); i++)
		{
			delete comenzi[i];
		}
	}
		void nume() {
			cout << Nume;
	}
		friend ostream& operator<<(ostream& out, const Ospatar& o)
		{
			out << o.Nume << endl;
			for (unsigned i = 0; i < o.comenzi.size(); i++) {
				out << *o.comenzi[i] << " ";
			}
			out << endl;
			out << o.nrComenzi << endl << o.gen << endl << o.varsta << endl;
			return out;
	}
		float getValoriComenzi(int zi,int luna,int an) {
			float suma = 0;
			for (unsigned i = 0; i < comenzi.size(); i++)
			{
				if (comenzi[i]->getAn() >= 2016 && comenzi[i]->getAn() <= an && comenzi[i]->getLuna() <= luna && comenzi[i]->getZi() <= zi)
				{
					suma += comenzi[i]->getValoare();
					if (ComSpec* h = dynamic_cast<ComSpec*>(comenzi[i])) {
						suma+=dynamic_cast<ComSpec*>(comenzi[i])->getPretSupli();
					}
				}
			}
			return suma;
	}
	
};

