#ifndef EVENIMENTCOLECTIV_H
#define EVENIMENTCOLECTIV_H

#include <vector>
#include "eveniment.hpp"

class EvenimentColectiv :public Eveniment
{
    protected:
    vector<string> participanti;
    public:
        EvenimentColectiv();
   friend istream& operator>>(istream&, EvenimentColectiv&);
   friend ostream& operator<<(ostream&, const EvenimentColectiv);
   int cost();


};

#endif // EVENIMENTCOLECTIV_H
