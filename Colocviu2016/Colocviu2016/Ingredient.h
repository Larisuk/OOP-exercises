#pragma once
#include<iostream>
#include<string>
using namespace std;

class Ingredient
{
private:
	double pretIng;
	string denIng;
	int cantIng;
	string masIng;
public:
	Ingredient();
	Ingredient( string, double, int, string);
	Ingredient(const Ingredient& i);
	string getNume(){ return denIng; }
	double getPret() { return pretIng; }
	Ingredient operator +(int i);
	Ingredient operator -=(double i);
	Ingredient& operator ++(int);
	Ingredient& operator=(const Ingredient& i);
	friend ostream& operator<<(ostream&, const Ingredient& i);
	friend istream& operator>>(istream&, Ingredient& i);
	void del();
	~Ingredient() {
		pretIng = 0;
		denIng = "";
		cantIng = 0;
		masIng = "";

	}
};

