#include "Copil.h"

void Copil::readExtra(istream& in)
{
	Pacient::readExtra(in);
	cout << "Introduceti Proteina C:";
	in >>date.proteinaC;
	cout << "Numele mamei:";
	in >> numeMama;
	cout << "Prenumele mamei:";
	in >> prenumeMama;
	cout << "Numele tatalui:";
	in >> numeTata;
	cout << "Prenumele tatalui:";
	in >> prenumeTata;
	cout << "Antecedente:";
	in >> anteceDent;
}

void Copil::showExtra(ostream& out) const
{
	Pacient::showExtra(out);
	out << "Proteina C" << date.proteinaC << endl << "Antecedente:" << anteceDent << endl << "Mama:" << numeMama << " " << prenumeMama << endl << "Tatal:" << numeTata << " " << prenumeTata << endl;
}

Copil Copil::operator=(const Copil& c)
{
	this->Pacient::operator=(c);
	this->numeMama = c.numeMama;
	this->prenumeMama = c.prenumeMama;
	this->numeTata = c.numeTata;
	this->prenumeTata = c.prenumeTata;
	this->date.proteinaC = c.date.proteinaC;
	return *this;
}


