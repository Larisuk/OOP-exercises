#pragma once
#include "Produse.h"
#include<string.h>
class ProdusePeris :
	virtual public Produse
{
private:
	int perioadaValab;
protected:
	virtual void displayExtra(ostream& out) const {
		Produse::displayExtra(out);
		out << "Perioada de valabilitate";
		out << perioadaValab << endl;
	};
	virtual void readExtra(istream& in) {
		Produse::readExtra(in);
	};
	void readExtraLot(Produse* p) { 
									cout << "Perioada de valabilitate(zile):";
									cin >> perioadaValab;
									};
public:

	ProdusePeris() { perioadaValab = ""; }
	void setData(int s) {
		perioadaValab = s;
	}
	 string getDataExp() {
		 string d = to_string(perioadaValab) + getData().substr(0, 2);
		 return d;
		 //if(stoi(d.substr(0,2))>31)
	}
	int getValab() { return perioadaValab; }
	//void calcValab(const Lot& l);
	//string getValab();
};

