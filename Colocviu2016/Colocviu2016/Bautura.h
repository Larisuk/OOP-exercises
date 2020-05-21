#pragma once
#include<string>
#include<iostream>
using namespace std;
class Bautura
{
private:
	string denBaut;
	double pretBaut;
public:
	Bautura() = default;
	Bautura(string d, double p) :denBaut(d), pretBaut(p) {};
	double getpretBr() { return pretBaut; }
	friend ostream& operator<<(ostream& out, const Bautura& of) {
		out << "Nume bautura:";
		out << of.denBaut << endl;
		out << "Pret bautura:" << of.pretBaut << endl;
		return out;
	}
};

