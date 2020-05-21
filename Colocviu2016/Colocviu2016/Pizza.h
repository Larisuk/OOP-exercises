#pragma once
#include "Ingredient.h"
#include <iostream>
#include<vector>
using namespace std;

class Pizza
{
private:
	int codPizza;
	string denPizza;
	vector<Ingredient*> ingPizza;
	int nringPizza;
	bool vegPizza;
	static int contor;
	double pretul;
protected:
	virtual void displayExtra(ostream& out) const {};
public:
	Pizza();
	Pizza(string, Ingredient I[], int, bool);
	void calcPret();
	double pret() { return pretul; }
	vector<Ingredient*> getIngrediente() { return ingPizza; }
	void showIngr() {
		for (unsigned i = 0; i < ingPizza.size(); i++)
		{
			int contor = 1;
			for (unsigned j = i + 1; j < ingPizza.size(); j++)
			{
				if (ingPizza[i]->getNume() == ingPizza[j]->getNume())contor++;
			}
			cout << ingPizza[i]->getNume()<<",";
			if (contor >1)cout << " care apare de " << contor << " ori." << endl;
		}
	}
	string nume() { return denPizza; }
	friend ostream& operator <<(ostream&,const Pizza& p);
	Pizza operator =(const Pizza& p);
	Pizza operator +(Ingredient& i);
	Pizza operator -(Ingredient& i);
	Pizza& nume(string);
	~Pizza() {
		denPizza = "";
		codPizza = 0;
		ingPizza.clear();
		nringPizza = 0;
		pretul = 0;
	}
	double getpretPz() {
		double suma = 0;
		for (unsigned i = 0; i < ingPizza.size(); i++)
		{
			suma += ingPizza[i]->getPret();
		}
		return suma;
	}
};

