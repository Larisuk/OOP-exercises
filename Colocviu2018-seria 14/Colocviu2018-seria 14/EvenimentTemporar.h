#pragma once
#include<iostream>
#include "Eveniment.h"
using namespace std;
class EvenimentTemporar :
	public Eveniment
{
private:
	unsigned pretIntrare;
protected:
	void displayExtra(ostream& out) const {
		out << "Pret intrare:";
		out << pretIntrare;
		out << endl;
	};
	void readExtra(istream& in)
	{
		cout << "Pretintrare:";
		in >> pretIntrare;
	}
public:
};

