#ifndef _EVENIMENTCOLECTIVRECURENT_H_
#define _EVENIMENTCOLECTIVRECURENT_H_

#include<string>
#include<vector>
#include "eveniment.hpp"


class EvenimentColectivRecurent :public Eveniment
{
protected:
	string recurenta;
	vector<string> participanti;
public:
	EvenimentColectivRecurent();
	friend istream& operator>>(istream&, EvenimentColectivRecurent&);
	friend ostream& operator<<(ostream&, const EvenimentColectivRecurent);
	int cost();
};
#endif