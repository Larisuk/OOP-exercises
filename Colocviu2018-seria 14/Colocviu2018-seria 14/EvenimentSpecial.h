#pragma once
#include<iostream>
#include "Eveniment.h"
using namespace std;

class EvenimentSpecial :public Eveniment
{
private:
	vector<string> colaboratori;
protected:
	void displayExtra(ostream& out) const {
		out << "Colaboratori:";
		for (unsigned i = 0; i < colaboratori.size(); i++)
			out << colaboratori[i] << " ";
		out << endl;
	};
	void readExtra(istream& in)
	{
		cout << "Introduceti nr. de colaboratori:";
		int nr;
		in >> nr;
		while (nr) {
			string nume;
			in >> nume;
			colaboratori.push_back(nume);
		}
	}
public:
	EvenimentSpecial() = default;
};

