#include "Pizza.h"
#pragma warning(disable: 4996)
int Pizza :: contor = 1;

Pizza::Pizza()
{
	this->codPizza = contor;
	contor++;
}

Pizza::Pizza(string den, Ingredient I[], int nrIng, bool veg):Pizza()
{
	denPizza = den;
	nringPizza = nrIng;
	vegPizza = veg;
	for (unsigned i = 0; i < sizeof(I); i++)
	{
		ingPizza.push_back(&I[i]);
	}
	calcPret();
}

void Pizza::calcPret()
{
	double suma = 0;
	for (unsigned i = 0; i < ingPizza.size(); i++)
	{
		suma = suma + ingPizza[i]->getPret(); 
	}
	this->pretul = suma * 1.5;
}

Pizza Pizza::operator=(const Pizza& p)
{
	if (this != &p)
	{
		this->~Pizza();
		this->codPizza = p.codPizza;
		this->denPizza = p.denPizza;
		this->nringPizza = p.nringPizza;
		this->vegPizza = p.vegPizza;
		this->pretul = p.pretul;
		for (unsigned i = 0; i < p.ingPizza.size(); i++)
		{
			this->ingPizza.push_back(p.ingPizza[i]);
		}
	}
	return * this;
}

Pizza Pizza::operator+(Ingredient& i)
{
	Pizza p;
	p = *this;
	p.ingPizza.push_back(&i);
	p.calcPret();
	return p;
}

Pizza Pizza::operator -(Ingredient& i)
{
	Pizza p;
	p = *this;
	for (int j = 0; j < ingPizza.size(); j++)
	{
		cout << p.ingPizza[j];
		if (ingPizza[j] == &i)
		{
			p.ingPizza.erase(j+ p.ingPizza.begin());
			break;
		}
	}
	p.calcPret();
	return p;
}

Pizza& Pizza::nume(string c)
{
	// TODO: insert return statement here
	this->denPizza = c;
	return *this;
}

ostream& operator<<(ostream& out,const Pizza& p)
{
	out << p.denPizza<<",";
	out << p.codPizza << endl <<"Nr.ingrediente:"<< p.nringPizza<<endl<<"Pret:"<< p.pretul << endl;
	if (p.vegPizza == false)cout << "nevegetariana" << endl;
	else cout << "vegetariana";
	for (unsigned i = 0; i < p.ingPizza.size(); i++)
		out << *p.ingPizza[i] << ",";
	return out;

}
