#pragma once
#include<iostream>
#include<vector>
#include"Vizitator.h"
#include"Eveniment.h"
#include"EvenimentTemporar.h"
#include"EvenimentSpecial.h"

using namespace std;

class Lista
{private:
	vector<Vizitator> v;
	vector<Eveniment*> eve;
public:
	Lista() = default;
	friend istream& operator>>(istream& in, Lista& l)
	{
		cout << "Introduceti nr. de evenimente pentru acest muzeu:";
		int nr1;
		in >> nr1;
		while (nr1)
		{
			int op;
			cout << "Introduceti tipul de eveniment:expozitie permanenta/eveniment temporar/eveniment special:";
			in >> op;
			/*if (op == 1)
			{
				Eveniment* e=new Eveniment;
				in >> *e;
				l.eve.push_back(e);
				nr1--;

			}
			if (op == 2)
			{
				Eveniment* e=new EvenimentTemporar;
				in >> *e;
				l.eve.push_back(e);
				nr1--;
			}
			if (op == 3)
			{
				Eveniment* e = new EvenimentSpecial;
				in >> *e;
				l.eve.push_back(e);
				nr1--;
			}*/

		}
		return in;
	}
	friend ostream& operator <<(ostream& out, const Lista& h)
	{
		out << "Pentru evenimentele:";
		for (unsigned i = 0; i < h.eve.size(); i++)
			out << h.eve[i] << endl;
		out << endl;
		return out;
	}
};

