#pragma once
#include<iostream>
#include "Eveniment.h"
#include<vector>
using namespace std;

class EvenimentSpecial:public Eveniment
{private:
	vector<string> colaboratori;
protected:
	void readExtra(istream& in) {
		cout << "Introduceti nr de colaboratori:";
		int nr;
		in >> nr;
		for (unsigned i = 0; i < nr; i++)
		{
			string n;
			cout << "Nume:";
			in >> n;
			colaboratori.push_back(n);
		}
	};
	void displayExtra(ostream& out) const {
		out << "Colaboratori:";
		for (unsigned i = 0; i < colaboratori.size(); i++)
			out << colaboratori[i] << " ";
		out << endl;
	};
public:
	EvenimentSpecial() = default;
};

