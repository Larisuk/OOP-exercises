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
};

