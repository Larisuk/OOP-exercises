#include "Pacient.h"
#include<iostream>

Pacient::Pacient()
{	a.valoareColesterol=0;
	a.valoareTensiune=0;
	varsta = 0;
}

Pacient::Pacient(string n, string p, unsigned v, string a,int valC,int valT,string datA):nume(n),prenume(p),varsta(v),adresa(a){}

Pacient Pacient::operator=(const Pacient&p)
{
	if (this != &p)
	{
		this->~Pacient();
		this->nume = p.nume;
		this->prenume = p.prenume;
		this->a.dataAnalize = p.a.dataAnalize;
		this->a.valoareColesterol = p.a.valoareColesterol;
		this->a.valoareTensiune = p.a.valoareTensiune;
	}
	return *this;
}

void Pacient::setDate(string d)
{
	a.dataAnalize = d;
}
istream& operator >> (istream& in, Pacient& p)
{
	cout << "Introduceti numele:";
	in >>p.nume;
	cout << "Introduceti prenumele:";
	in >> p.prenume;
	cout << "Introduceti varsta:";
	in >> p.varsta;
	cout << "Introduceti adresa:";
	in >> p.adresa;
	cout << "Introduceti valoarea tensiunii:";
	in >> p.a.valoareTensiune;
	cout << "Introduceti valoarea colesterolului:";
	in >> p.a.valoareColesterol;
	cout << "Introduceti data analizelor";
	in >> p.a.dataAnalize;
	p.readExtra(in);
	return in;
}

ostream& operator << (ostream & out, const Pacient & p)
{
	cout << "Pacientul:" << endl;
	out << p.nume << endl << p.prenume << endl << p.varsta << endl << p.adresa << endl;
	cout << "Cu fisa medicala:" << endl;
	out << "Tensiune:"<<p.a.valoareTensiune <<" mg"<<endl<<"Colesterol:"<< p.a.valoareColesterol <<" mg"<< endl;
	out <<"Date analize:"<< p.a.dataAnalize << endl;
	p.showExtra(out);
	return out;
}