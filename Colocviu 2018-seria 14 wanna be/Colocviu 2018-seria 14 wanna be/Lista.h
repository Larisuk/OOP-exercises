#pragma once
#include<iostream>
#include<vector>
#include "Eveniment.h"
#include "Expozitie.h"
#include "EvenimentTemporar.h"
#include "EvenimentSpecial.h"
using namespace std;

class Lista
{
private:
	vector<Eveniment*> eve;
	struct a {
		string data, ora, limba;
		int pers;
	}autoGhid;
	vector<a> Ghid;
	int traseuDigit;
public:
	friend istream& operator>>(istream& in,Lista &l)
	{
		cout << "Introduceti nr de evenimente:";
		int nr;
		l.traseuDigit = 0;
		in >> nr;
		while (nr)
		{
			int op;
			cout << "Introduceti tipul evenimentului:expozitie gratuita/temporar/special:";
			in >> op;
			if (op == 1)
			{
				Eveniment* e = new Expozitie;
				in >> *e;
				l.eve.push_back(e);

			}
			if (op == 2)
			{
				Eveniment* e= new EvenimentTemporar;
				in >> *e;
				l.eve.push_back(e);

			}
			if (op == 3)
			{
				Eveniment* e = new EvenimentSpecial;
				in >> *e;
				l.eve.push_back(e);
			}
			nr--;
			cout << "Autoghid:";
			bool ok;
			in >> ok;
			if (ok) {
				
					cout << "Data:";
					in >> l.autoGhid.data;
					cout << "Ora:";
					in >> l.autoGhid.ora;
					cout << "Limba:";
					while (true) {
						try {
							cout << "Nr.persoane:";
							in >> l.autoGhid.pers;
							if (l.autoGhid.pers)throw "\nNu se pot programa mai mult de 20 de pers.]n";
							else break;
						}
						catch (const char*e) {
							cout << e;
						}
					
					}
				}
			l.Ghid.push_back(l.autoGhid);
			cout << "Traseu digital?";
			bool k;
			in >> k;
			if(k)l.traseuDigit++;
		}
	
		return in;
	}
	friend ostream& operator<<(ostream& out, const Lista& l)
	{
		for (unsigned i = 0; i < l.eve.size(); i++)
			out << *l.eve[i] << endl;
		return out;
	}
	vector<Eveniment*> getEvenim() { return eve; }
	void check() {
		bool ok = true;

		for (unsigned j = 0; j < eve.size(); j++)
		{
			if (Expozitie* p = dynamic_cast<Expozitie*>(eve[j]))
			{
				ok = false;
				break;
			}
		}
		if (ok == true)
		{
			for (unsigned j = 0; j < eve.size(); j++)
			{
				if (EvenimentTemporar* p = dynamic_cast<EvenimentTemporar*>(eve[j]))
				{
					if (dynamic_cast<EvenimentTemporar*>(eve[j])->getTemp() == true && dynamic_cast<EvenimentTemporar*>(eve[j])->getLuna() == 8 && dynamic_cast<EvenimentTemporar*>(eve[j])->getAn() == 2018)
					{
						cout << *eve[j] << endl;
					}
				}
			}
		}
	}
	void probl3() {
		cout << "Muzeul are " << Ghid.size() << " cereri de ghidaje." << endl;
		cout << "Suma obtinuta: " << Ghid.size() * 100 << " lei" << endl;
		int nr = 0;
		for (unsigned j = 0; j < eve.size(); j++)
		{
			if (EvenimentSpecial* p = dynamic_cast<EvenimentSpecial*>(eve[j]))
			{
				nr++;
			}

		}
		cout << "Evenimente speciale:" << nr << endl;
		cout << "Trasee digitale:" << traseuDigit << endl;
	}
	unsigned getGhid() { return Ghid.size(); }
};

