#include <iostream>
#include "eveniment.hpp"
#include "EvenimentColectiv.hpp"
#include "EvenimentRecurent.hpp"
#include "EvenimentColectivRecurent.hpp"
#include <vector>
#include <iterator>
using namespace std;

int main () 
{
   
    vector<Eveniment> evI;
    vector<EvenimentRecurent> evIR;
    vector<EvenimentColectiv> evC;
    vector<EvenimentColectivRecurent> evCR;
    EvenimentRecurent e;
    cin >> e;
    evIR.push_back(e);
    int op;
    cout << "Dati optiune ";
    cin >> op;
    switch (op)
    {
    case 1:
    {
        cout << "Introduceti tipul evenimentului ";
        int tip;
        cin >> tip;
        if (tip == 1)
        {
            Eveniment a;
            cin >> a;
            evI.push_back(a);
        }
        if (tip == 2)
        {
            EvenimentRecurent er;
            cin >> er;
            evIR.push_back(er);
        }
        if (tip == 3)
        {
            EvenimentColectiv ec;
            cin >> ec;
            evC.push_back(ec);
        }

        if (tip == 4)
        {
            EvenimentColectivRecurent e;
            cin >> e;
            evCR.push_back(e);
        }

        break;
    }

    case 2:
    {
        cout << "Introduceti tipul de eveniment pentru afisarea listei:";
        int tip;
        cin >> tip;
        if (tip == 1)
        {
            for (Eveniment e : evI)
                cout << e;
        }
        if (tip == 2)
        {
            for (EvenimentRecurent e : evIR)
                cout << e;
        }
        if (tip == 3)
        {
            for (EvenimentColectiv e : evC)
                cout << e;
        }

        if (tip == 4)
        {
            for (EvenimentColectivRecurent e : evCR)
                cout << e;
        }

        break;
    }
    case 3:
    {
        cout << "Introduceti ID-ul evenimentului pe care doriti sa il stergeti:";
        string id;
        cin >> id;
        for (unsigned i = 0; i < evI.size(); i++)
            if (evI[i].cautare(id))
            {
                evI.erase(evI.begin() + i);
                break;
            }
        for (unsigned i = 0; i < evIR.size(); i++)
            if (evIR[i].cautare(id))
            {
                evIR.erase(evIR.begin() + i);
                break;
            }
        for (unsigned i = 0; i < evC.size(); i++)
            if (evC[i].cautare(id))
            {
                evC.erase(evC.begin() + i);
                break;
            }
        for (unsigned i = 0; i < evCR.size(); i++)
            if (evCR[i].cautare(id))
            {
                evCR.erase(evCR.begin() + i);
                break;
            }

        break;

    }
    }
    return 0;
}
