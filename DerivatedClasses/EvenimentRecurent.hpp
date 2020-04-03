#ifndef _EVENIMENTR_H_
#define _EVENIMENTR_H_

#include <iostream>
#include <string>
#include"eveniment.hpp"

using namespace std;

class EvenimentRecurent: public Eveniment{
    string recurenta;
public:
    EvenimentRecurent();
    friend istream& operator>>(istream&, EvenimentRecurent&);
    friend ostream& operator<<(ostream&, const EvenimentRecurent);
};



#endif
