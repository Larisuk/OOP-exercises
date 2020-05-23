#pragma once
#include "Angajat.h"
#include <iostream>
#include<string>
using namespace std;

class AngajatTesa :
	public Angajat
{
private:
	string tip;
	int weekend;
protected:
	void displayExtra(ostream& out) const {
		out << tip;
		out << "weekend:"<<weekend<< endl;
	}
	void readExtra(istream& in)
	{
		cout << "Weekendul:";
		in >> weekend;
		calcPrima();
	}
public:
	AngajatTesa() = default;
	AngajatTesa(string n, string p, string c, int z, int l, int a,int w) :Angajat( n,  p, c, z,  l, a) 
	{
		weekend = w;
		tip = "TESA";
		calcPrima();
	}
	void calcPrima() {
		int p = getPrima();
		setPrima(p);
	}
	~AngajatTesa() = default;
	int getWeek() {
		return weekend;
	}
};

