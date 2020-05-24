#pragma once
#include<iostream>
#include"Companie.h"
using namespace std;
class Precomanda :public Companie
{
private:
	string nume;
	struct date {
		string destinatie, sursa;
		int km1, km2;
	}locatii;
	struct d {
		int zi, luna, an;
	}data;
	struct o {
		int hour, minut;
	}ora;
public:
	Precomanda() = default;
	Precomanda(string n, string d, string s, int z, int l, int a, int h, int m,int k1,int k2) :nume(n) {
		locatii.km1 = k1;
		locatii.km2 = k2;
		locatii.sursa = s;
		locatii.destinatie = d;
		if (locatii.destinatie == "aeroport")tarifKm = tarifKm * 2;
		data.zi = z;
		data.luna = l;
		data.an = a;
		ora.hour = h;
		ora.minut = m;
	}
	
};

