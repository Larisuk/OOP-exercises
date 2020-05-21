#include "Ingredient.h"

Ingredient::Ingredient()
{
	pretIng = 0;
	denIng = "";
	cantIng = 0;
	masIng = "";
}

Ingredient::Ingredient(string d, double p,int c, string m):pretIng(p),denIng(d),cantIng(c), masIng(m){}

Ingredient::Ingredient(const Ingredient& i)
{
	this->pretIng = i.pretIng;
	this->denIng = i.denIng;
	this->cantIng = i.cantIng;
	this->masIng = i.masIng;
}

Ingredient Ingredient ::operator+(int i)
{
	Ingredient alfa;
	alfa = *this;
	alfa.cantIng = cantIng + i;
	return alfa;
}

Ingredient Ingredient::operator-=(double i)
{
	this->pretIng = this->pretIng - i;
	return *this;
}

Ingredient &Ingredient::operator++(int)
{
	cantIng=cantIng+1;
	return *this;
}

Ingredient& Ingredient::operator=(const Ingredient& i)
{
	if (this != &i)
	{
		this->~Ingredient();
		this->pretIng = i.pretIng;
		this->denIng = i.denIng;
		this->cantIng = i.cantIng;
		this->masIng = i.masIng;
	}
	return *this;
}

void Ingredient::del()
{
	pretIng = 0;
	cantIng = 0;
	masIng = "";
	denIng = "";
}

ostream& operator<<(ostream& out, const Ingredient& i)
{
	if(i.denIng!="" && i.cantIng!=0 && i.masIng!="" && i.pretIng!=0)out << i.denIng << "," <<"cantitate:"<< i.cantIng << "," << i.masIng << "," << i.pretIng << endl;
	return out;
}

istream& operator>>(istream& in, Ingredient& i)
{
	cout << "Denumire ingredient";
	in >> i.denIng;
	cout << "cantIng:";
	in >> i.cantIng;
	cout << "masIng:";
	in >> i.masIng;
	cout << "Pret:";
	in >> i.pretIng;
	return in;
}
