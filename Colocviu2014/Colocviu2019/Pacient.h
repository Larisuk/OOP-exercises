#pragma once
#include<iostream>
#include<string>
using namespace std;
class Pacient
{
private:
	string nume;
	string prenume;
	unsigned varsta;
	string adresa;
	struct fisaMedicala {
		int valoareColesterol;
		int valoareTensiune;
		string dataAnalize;
	}a;
	      
protected:
	virtual void readExtra(istream& in){}
	virtual void showExtra(ostream& out) const {}
public:
	Pacient();
	virtual ~Pacient() {};
	Pacient(string, string, unsigned, string,int,int,string);
	Pacient operator=(const Pacient&);
	virtual void setDate(string d);
	string getNume() { return nume; }
	int getColesterol() { return a.valoareColesterol; }
	int getTensiune() { return a.valoareTensiune; }
	string getData() { return a.dataAnalize; }
	unsigned getVarsta() { return varsta; }
	friend ostream& operator << (ostream&, const Pacient&);
	friend istream& operator >> (istream&, Pacient&);
};

