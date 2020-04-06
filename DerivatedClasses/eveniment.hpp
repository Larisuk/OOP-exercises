                                                                                          #ifndef _EVENIMENT_H_
#define _EVENIMENT_H_

#include <iostream>
#include <string>

using namespace std;
class Eve
{
public:
    virtual int cost() = 0;
};

class Eveniment:public Eve {
public:
    struct Data {
        unsigned minut, ora, zi, luna, an;
    };

protected:
    string nume;
    Data data;
    string locatie;
    string ID;
    int c;
    unsigned durata; // in minute
    static unsigned count;

public:
    Eveniment();
    Eveniment (const string, const string, const Data, const unsigned = 60);
    bool cautare(string);
    virtual int cost();
    friend ostream& operator<< (ostream&, const Eveniment&);
    friend istream& operator>> (istream&, Eveniment&);
};


#endif // _EVENIMENT_H_
