#pragma once
#include<iostream>
#include "Lista.h"
using namespace std;
class Muzeu
{
private:
	string adresa, interval;
	Lista l;						//evenimentele oferite impreuna cu vizitatorii
	bool inchiriere;
	bool servFiliale;				//pentru 0 nu ofera,pentru 1 ofera
	bool servTuristice;
	vector<string> cerFil;
	vector<string> cerTur;


public:
	Muzeu() = default;
	Muzeu(string a, string i, Lista ll,bool fil,bool T) :adresa(a), interval(i), l(ll) ,servFiliale(fil),servTuristice(T){};
	~Muzeu() = default;
	friend istream& operator>>(istream& in, Muzeu& m)
	{
		cout << "Adresa:";
		in >> m.adresa;
		cout << "Interval:";
		in >> m.interval;
		cout << "Lista:";
		cout << "Ofera servicii pt filiale:";
		in >> m.servFiliale;
		if (m.servFiliale != 0)
		{
			cout << "Introduceti nr. de servicii:";
			int nr;
			in >> nr;
			while (nr)
			{
				cout << "Introduceti serviciul:";
				string n;
				in >> n;
				m.cerFil.push_back(n);
				nr--;
			}
		}
		cout << "Ofera servicii Turistice:";
		in >> m.servTuristice;
		if (m.servTuristice != 0)
		{
			cout << "Introduceti nr. de servicii:";
			int nr;
			in >> nr;
			while (nr)
			{
				cout << "Introduceti serviciul:";
				string n;
				in >> n;
				m.cerTur.push_back(n);
				nr--;
			}
		}

		in >> m.l;
		return in;
	}
	friend ostream& operator<<(ostream& out, const Muzeu& m)
	{
		out << "Adresa:";
		out << m.adresa << endl;
		out << "Interval:";
		out << m.interval << endl;
		if (m.servFiliale == 1)
		{
			out << "Ofera servicii filiale." << endl;
			if (m.cerFil.size())
			{
				for (unsigned i = 0; i < m.cerFil.size(); i++)
					out << m.cerFil[i] << " ";
			}
		
		}
		else out << "Nu ofera serv filiale" << endl;
		if (m.servTuristice == 1)
		{
			out << "Ofera servicii turistice." << endl;
			if (m.cerTur.size())
			{
				for (unsigned i = 0; i < m.cerTur.size(); i++)
					out << m.cerTur[i] << " ";
			}
		
		}
		else out << "Nu ofera serv turistice" << endl;
		out << "Lista:";
		out << m.l<<endl;
		return out;
	}
	bool getTurist() {
		if (servTuristice && cerTur.size() != 0)return true;
		return false;
	}

	Lista getLista() { return l; }
};

