#pragma once
#include"Produs.h"
#include<iostream>
using namespace std;
class Comanda
{
private:
	static int id;
	int Num;
	Produs Prod;
	int NrPortii;
	struct d {
		int zi, luna, an;
	}data;
protected:
	virtual void readExtra(istream& in) {};
	virtual void displayExtra(ostream& out) const{};
public:
	Comanda() {
		id++;
		this->Num = id;
	}
	Comanda(Produs p, int z, int l, int a,int nr) :Comanda(){
		Prod = p;
		data.zi = z;
		data.luna = l;
		NrPortii = nr;
	}
	Comanda operator+(int i)
	{
		Comanda* p = this;
		p->NrPortii = p->NrPortii + i;
		return *p;
	}
	Comanda operator++(int)
	{
		this->NrPortii++;
		return *this;
	}
	void del() {
		this->~Comanda();
	}
	friend iostream& operator>>(iostream& in, Comanda& c)
	{
		cout << "Introduceti numele:";
		in >> c.Prod;
		cout << "Nr.portii:";
		in >> c.NrPortii;
		cout << "Zi:";
		in >> c.data.zi;
		cout << "Luna:";
		in >> c.data.luna;
		cout << "An:";
		in >> c.data.an;
		c.readExtra(in);
		return in;
	}
	friend ostream& operator<<(ostream& out, const Comanda& c)
	{
		out << c.Prod << " " << c.NrPortii << " " << c.data.zi << " " << c.data.luna << " " << c.data.an << " "<<endl;
		c.displayExtra(out);
		return out;
	}
	Comanda operator=(const Comanda& c)
	{
		if (this != &c)
		{
			id++;
			this->~Comanda();
			this->Num = id;
			this->Prod = c.Prod;
			this->NrPortii = c.NrPortii;
			this->data.zi = c.data.zi;
			this->data.luna = c.data.luna;
			this->data.an = c.data.an;
		}
		return *this;
	}
	Produs getProd() { return Prod; }
	int getZi() { return data.zi; }
	int getLuna() { return data.luna; }
	int getAn() { return data.an; }
	float getValoare() {
		return Prod.getPret();
	}
	virtual float getValoareExtra() { return Prod.getPret(); };
	void setNr(int nr) { NrPortii = nr; }
	~Comanda()=default;
};


