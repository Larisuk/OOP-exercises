                                                                                          #ifndef _EVENIMENT_H_
#define _EVENIMENT_H_

#include <iostream>
#include <string>

using namespace std;


class Eveniment {
public:
    struct Data {
        unsigned minut, ora, zi, luna, an;
    };

protected:
    string nume;
    Data data;
    string locatie;
    string ID;
    unsigned durata; // in minute
    static unsigned count;

public:
    Eveniment();
    Eveniment (const string, const string, const Data, const unsigned = 60);
    bool cautare(string);
    friend ostream& operator<< (ostream&, const Eveniment&);
    friend istream& operator>> (istream&, Eveniment&);
};


#endif // _EVENIMENT_H_
