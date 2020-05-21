#pragma once
#include<iostream>
using namespace std;
class Produs
{
private:
	float pretProd;
	string denProd;
public:
	Produs() { pretProd = 0; denProd = ""; }
	Produs(float p, string d) :pretProd(p), denProd(d) {};
	~Produs() = default;
	friend iostream& operator>>(iostream& in, Produs& p) {
		cout << "Nume produs:";
		in >> p.denProd;
		cout << "Pret:";
		in >> p.pretProd;
		return in;
	}
	friend ostream& operator<<(ostream& out, const Produs& c) {
		out << c.denProd << " " << c.pretProd << " " << endl;
		return out;
	}
	string getNume() { return denProd; }
	float getPret(){return pretProd;}
};

