#pragma once
#include<iostream>
#include<vector>
#include "Lista.h"
#include "Vizitator.h"
using namespace std;

class Muzeu
{private:
	string adresa;
	struct i {
		int ora1, minut1, ora2, minut2;
	}interval;
	Lista l;
public:
	Muzeu() = default;
	friend istream& operator>>(istream& in, Muzeu& m)
	{
		cout << "Adresa:";
		in >> m.adresa;
		cout << "Ora 1:";
		in >> m.interval.ora1;
		cout << "Minut 1:";
		in >> m.interval.minut1;
		cout << "Ora 2:";
		in >> m.interval.ora2;
		cout << "Minut 2:";
		in >> m.interval.minut2;
		in >> m.l;
		return in;
	}
	friend ostream& operator<<(ostream& out, const Muzeu& m)
	{
		out << "Adresa:" << m.adresa << endl;
		out << "Interval:" << m.interval.ora1 << ":" << m.interval.minut1 << "-" << m.interval.ora2 << ":" << m.interval.minut2 << endl;
		out << m.l;
		return out;
	}
};

