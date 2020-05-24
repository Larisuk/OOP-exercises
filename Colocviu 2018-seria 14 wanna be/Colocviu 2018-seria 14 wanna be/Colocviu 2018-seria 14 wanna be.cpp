// Colocviu 2018-seria 14 wanna be.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Muzeu.h"
#include<vector>
using namespace std;
int main()
{

    vector<Muzeu> muzee;
    int op;
    do {
        cout << "Introduceti o optiune:";
        cin >> op;
        switch (op)
        {
        case 1: {
            for (unsigned i = 0; i < muzee.size(); i++)
                cout << muzee[i] << endl;
            break;
        }case 2: {
            unsigned poz = 0;
            for (unsigned i = 0; i < muzee.size(); i++)
            {
                float max = muzee[i].getLista().incasari();
                poz = i;
                for (unsigned j = i+1; j < muzee.size(); j++)
                {
                    if (muzee[j].getLista().incasari() < max)
                    {
                        max = muzee[j].getLista().incasari();
                        poz = j;
                    }
                }
                cout << muzee[poz] << endl;

            }
            break;
        }case 3: {
            int suma = 0;
            for (unsigned i = 0; i < muzee.size(); i++)
            {
                Lista l = muzee[i].getLista();
                suma += l.getGhid();
            }
            cout << "Nr total de ghidaje:" << suma<<endl;
            for (unsigned i = 0; i < muzee.size(); i++)
            {
                Lista l = muzee[i].getLista();
                cout << "Pentru muzeul:" << muzee[i] << endl;
                l.probl3();
            }
            break;
        }case 4: {
            for (unsigned i = 0; i < muzee.size(); i++)
            {
                if (muzee[i].getTurist())
                {
                    Lista l = muzee[i].getLista();
                    l.check();
                   
                }
               

            }
            break;
        }case 5: {
            cout << "Introduceti un muzeu." << endl;
            Muzeu m;
            cin >> m;
            muzee.push_back(m);
            break;
        }
        }

    } while (op > 0 && op < 6);
    return 0;

}
