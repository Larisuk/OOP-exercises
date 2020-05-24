// Colocviu2018-seria 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Muzeu.h"
#include "Eveniment.h"
#include "Vizitator.h"
#include "EvenimentTemporar.h"
#include "EvenimentSpecial.h"
#include<vector>
using namespace std;

int main()
{
    vector<Muzeu> muzee;
    int op;
    do {
        cout << "Introduceti o optiune:";
        cin >> op;
        switch (op) {
        case 1: {
            cout << "Afisarea vizitatorilor din gradul fiecarui muzeu grupati pe evenimente:";
            for (unsigned i = 0; i < muzee.size(); i++)
                cout << muzee[i];
            break;
        }
        case 2: {
            break;
        } case 3: {
            break;
        } case 4: {
            break;
        } 
        case 5: {
            cout << "Introduceti un muzeu:";
            Muzeu m;
            cin >> m;

            break;
        }

        }

    } while (op > 0 && op < 6);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu

