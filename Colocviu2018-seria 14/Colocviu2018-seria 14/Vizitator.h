#pragma once
#include<iostream>
#include"Muzeu.h"
using namespace std;
class Vizitator
{
private:
	string nume,categorie;
	unsigned varsta;
public:
	Vizitator() = default;
	Vizitator(string n, string c, unsigned v) :nume(n), categorie(c), varsta(v) {};
	friend istream& operator>>(istream& in, Vizitator& v) {
		cout << "Nume vizitator:";
		in >> v.nume;
		cout << "Categorie :pensionar/elev/student:";
		in >> v.categorie;
		cout << "Varsta:";
		in >> v.varsta;
		return in;
	}	
	friend ostream& operator<<(ostream& out, const Vizitator& v) {
		out << "Nume vizitator:";
		out<< v.nume<<endl;
		out << "Categorie :pensionar/elev/student:";
		out<< v.categorie<<endl;
		out << "Varsta:";
		out<< v.varsta<<endl;
		return out;
	}
};

