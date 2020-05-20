#include "Produse.h"

istream& operator>>(istream& in, Produse& p)
{
	cout << "Introduceti numele produsului:";
	in >> p.numeProd;
	cout << "Introduceti unitatea de masura (bucata,greutate sau volum):";
	in >> p.unitMasura;
	p.readExtra(in);
	return in;
}

ostream& operator<<(ostream& out, const Produse& p)
{
	cout << "Nume produs:";
	out << p.numeProd<<endl;
	out << " Unitate demasura:" << p.unitMasura <<endl;
	cout << "Data intrare lot:";
	out << p.dataIntrare<<endl;
	cout << "Cantitate: ";
	out << p.cantitate;
	out << endl;
	p.displayExtra(out);
	return out;
}
