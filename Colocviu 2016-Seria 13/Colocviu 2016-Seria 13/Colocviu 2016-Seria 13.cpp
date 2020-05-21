// Colocviu 2016-Seria 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include "Comanda.h"
#include "Produs.h"
#include "Ospatar.h"
using namespace std;

int main()
{
    int op;
    vector<Comanda> comand;
    vector<Ospatar> ospatari;
    do {
        cout << "Alegeti o optiune:";
        cin >> op;
        switch (op) {
            case 1: {
                int zi, luna, an;
                cout << "Introduceti ziua:";
                cin >> zi;
                cout << "Introduceti luna:";
                cin >> luna;
                cout << "Introduceti anul: ";
                cin >> an;
                for (unsigned i = 0; i < comand.size(); i++)
                {
                    if (comand[i].getZi() == zi && comand[i].getLuna() == luna && comand[i].getAn() == an)cout << comand[i];
                }
                break;
            }
            case 2: {
                int  luna=5, an=2016;

                for (unsigned i = 0; i < comand.size(); i++)
                {
                    if (comand[i].getLuna() == luna && comand[i].getAn() == an)
                    {
                        if(comand[i].getProd().getNume()=="papanasi" || comand[i].getProd().getNume() == "papanasi cu nuca de cocos")
                        cout << comand[i];
                    }
                }
                break;
            }
            case 3: {
                int luna = 5, an = 2016;
                float suma = 0;
                for (unsigned i = 0; i < comand.size(); i++)
                {
                    if (comand[i].getLuna() == luna && comand[i].getAn() == an)
                    {
                        suma += comand[i].getValoareExtra();
                    }
                }

                break;
            } 
            case 4: {
                int zi, luna, an;
                cout << "Introduceti ziua(toate datele curente):";
                cin >> zi;
                cout << "Introduceti luna:";
                cin >> luna;
                cout << "Introduceti anul: ";
                cin >> an;
                float maxim=0;
                unsigned poz=0;
                for (unsigned i = 0; i < ospatari.size(); i++)
                {
                    if (ospatari[i].getValoriComenzi(zi, luna, an) > maxim)
                    {
                        maxim = ospatari[i].getValoriComenzi(zi, luna, an);
                        poz = i;
                    }
                }
                cout << ospatari[poz] << endl;
                break;
            }


        }

    } while (op > 0 && op < 5);
}


