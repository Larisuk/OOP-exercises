#pragma once
#include<iostream>
using namespace std;
class Angajat
{
private:
	const int prima=400;
	string nume, prenume;
	string contract;
	struct d {
		int zi, luna, an;
	}data;
	int primaSpec;
protected:
	virtual void displayExtra(ostream& out) const {};
	virtual void readExtra(istream& in) {};
public:
	Angajat()=default;
	Angajat(string n, string p, string c, int z, int l, int a) :nume(n), prenume(p), contract(c) {
		data.zi = z;
		data.luna = l;
		data.an = a;
		calcPrima();
	}
	virtual void calcPrima() {  };
	void setPrima(int p) { primaSpec = p; };
	int getZi() { return data.zi; }
	int getLuna() { return data.luna; }
	int getAn() { return data.an; }
	~Angajat() = default;
	int getPrima() { return prima; }
	friend ostream& operator <<(ostream& out, const Angajat& a)
	{
		out << "Nume:";
		out<< a.nume<<endl;
		out << "Prenume:";
		out << a.prenume<<endl;
		out << "Contract:";
		out << a.contract << endl;
		out << "Data:";
		out << a.data.zi << "." << a.data.luna << "." << a.data.an << endl;
		out << a.primaSpec;
		a.displayExtra(out);
		return out;
	}
	friend istream& operator>>(istream& in, Angajat& a)
	{
		cout << "Nume:";
		in >> a.nume;
		cout << "Prenume:";
		in >> a.prenume;
		cout << "Contract:";
		in >> a.contract;
		cout << "Zi angajare:";
		in >> a.data.zi;
		cout << "Luna angajare:";
		in >> a.data.luna;
		cout << "An angajare:";
		in>> a.data.an;
		a.primaSpec = a.getPrima();
		a.readExtra(in);
		return in;
	}
};

