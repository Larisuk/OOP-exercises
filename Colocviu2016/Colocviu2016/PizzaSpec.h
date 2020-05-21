#pragma once
#include "Pizza.h"
#include<iostream>
#include<string>
using namespace std;
class PizzaSpec :
	public Pizza
{
private:
	vector<Ingredient*> ingSpecPizza;
	int nringSpecPizza;
protected:
	virtual void displayExtra(ostream& out) const {
		cout << "Numar ingrediente speciale:";
		out << nringSpecPizza;
		cout << "Ingredientele suplimentare:";
		for (int i = 0; i < nringSpecPizza; i++)
			cout << *ingSpecPizza[i];
		cout << endl;
	};
public:
	PizzaSpec() {};
	PizzaSpec(string den, Ingredient I[], int nrIng, bool veg, Ingredient I2[], int numereSpec):Pizza( den,I,nrIng,veg){
		nringSpecPizza = numereSpec;
		for (int i = 0; i < nringSpecPizza; i++)
			ingSpecPizza.push_back(&I2[i]);
	}
};

