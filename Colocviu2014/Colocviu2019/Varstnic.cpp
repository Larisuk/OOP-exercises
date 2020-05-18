#include "Varstnic.h"
#include<iostream>
using namespace std;

bool Varstnic::fumator = 0;
int Varstnic::sedentarism = -1;

void Varstnic::readExtra(istream& in)
{
	Pacient::readExtra(in);
	cout << "Fumator/nefumator:";
	string f;
	in >> f;
	if (f == "fumator")fumator = 1;
	else fumator = 0;
	cout << "Introduceti gradul de sedentarism:";
	string s;
	in >> s;
	if (s == "scazut")sedentarism = -1;
	if (s == "mediu")sedentarism = 0;
	if (s == "ridicat")sedentarism = 1;
}

void Varstnic::showExtra(ostream& out) const
{
	Pacient::showExtra(out);
	if (fumator == 0)cout << "Nefumator" << endl;
	else cout << "Fumator" << endl;
	if (sedentarism == -1)cout << "Sedentarism scazut" << endl;
	if (sedentarism == 0)cout << "Sedentarism mediu" << endl;
	if (sedentarism == 1)cout << "Sedentarism ridicat" << endl;
}