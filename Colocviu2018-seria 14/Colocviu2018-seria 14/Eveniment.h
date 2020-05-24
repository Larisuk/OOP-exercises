#pragma once
#include<iostream>
#include "Vizitator.h"
#include "Muzeu.h"
using namespace std;

class Eveniment
{protected:
	string titlu;
	virtual void displayExtra(ostream& out)const {};
	virtual void readExtra(istream& in) {};
	vector<Vizitator> viz;
public:
	Eveniment() = default;
	Eveniment(string t, Vizitator V[], int nr) :titlu(t)
	{
		for (unsigned i = 0; i < nr; i++)
			viz.push_back(V[i]);
	}
	friend istream& operator>>(istream& in, Eveniment& e) {
		cout << "Titlu:";
		in >> e.titlu;
		cout << "Nr.de participanti la eveniment:";
		int nr;
		in >> nr;
		while (nr)
		{
			Vizitator v;
			in >> v;
			e.viz.push_back(v);
			nr--;
		}
		e.readExtra(in);
		return in;
	}
};

