#pragma once
#include<iostream>
using namespace std;
class Produse
{private:
	string numeProd;
	string unitMasura;
	string dataIntrare;
	unsigned cantitate;
	unsigned pretUnit;
protected:
	virtual void displayExtra(ostream& out) const {};
	virtual void readExtra(istream& in){};
	virtual void readExtraLot(Produse* p) {};
public:
	Produse() {
		numeProd = "";
		unitMasura = "";
	}
	string getNume() { return numeProd; }
	string getUnitate() { return unitMasura; }

	virtual void readLot(Produse p) {
		cout << "Data intrare:";
		cin >> dataIntrare;
		cout << "Cantitate:";
		cin >> cantitate;
		readExtraLot(this);
	}
	unsigned getCantitate() {
		return cantitate;
	}
	string getData() { return dataIntrare; }
	friend istream& operator>>(istream& in, Produse& p);
	friend ostream& operator<<(ostream& out, const Produse& p);
	virtual ~Produse() {};
};

