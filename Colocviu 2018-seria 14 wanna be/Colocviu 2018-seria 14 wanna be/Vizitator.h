#pragma once
#include<iostream>
using namespace std;

class Vizitator
{private:
	string nume, categorie;
	unsigned varsta;
public:
	Vizitator() = default;
	Vizitator(string n,string c,unsigned v):nume(n),categorie(c),varsta(v){}
	friend istream& operator>>(istream& in, Vizitator& v) {
		cout << "Nume:";
		in >> v.nume;
		cout << "Categorie:";
		in >> v.categorie;
		cout << "Varsta:";
		in >> v.varsta;
		return in;
	}
	friend ostream& operator<<(ostream& out, const Vizitator& v)
	{
		out << "Nume:";
		out<< v.nume;
		out << "Categorie:";
		out<< v.categorie;
		out << "Varsta:";
		out<< v.varsta;
		return out;
	}
};

