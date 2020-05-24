#pragma once
#include<iostream>
#include<vector>
#include"Vizitator.h"
using namespace std;
class Eveniment
{
protected:
	string titlu;
	vector<Vizitator> vizitatori;
	virtual void readExtra(istream& in) {};
	virtual void displayExtra(ostream& out) const {};
public:
	Eveniment() = default;
	Eveniment(string t):titlu(t){}
	friend istream& operator>>(istream& in, Eveniment& e)
	{
		cout << "Titlu:";
		in >> e.titlu;
		cout << "Introduceti nr.de vizitatori:";
		int nr;
		cin >> nr;
		for (unsigned i = 0; i < nr; i++)
		{
			Vizitator v;
			cin >> v;
			e.vizitatori.push_back(v);

		}
		e.readExtra(in);
		return in;
	}
	friend ostream& operator<<(ostream& out, const Eveniment& e)
	{
		out << "Titlu:" << e.titlu << endl;
		out << "Vizitatori:";
		for (unsigned i = 0; i < e.vizitatori.size(); i++)
			out << e.vizitatori[i] << endl;
		e.displayExtra(out);
		return out;
	}

};

