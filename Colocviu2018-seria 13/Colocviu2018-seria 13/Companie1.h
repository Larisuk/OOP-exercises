#pragma once
#include "Companie.h"
class Companie1 :
	public Companie
{
	string sofer1, sofer2;
	int nrLic;
public:
	void costControl(string s,int k1, string d,int k2) {
		pretCursa = (k2-k1) * tarifKm;
	}
	void designatedDriver(string nume1, string nume2, int nr){
		sofer1 = nume1;
		sofer2 = nume2;
		nrLic = nr;
		double cost = pretCursa + tarifFix;
}
};

