// Colocviu2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include "Pacient.h"
#include"Copil.h"
#include "Varstnic.h"
#include<exception>
using namespace std;
int main()
{
    vector<Pacient*> pacienti;
    cout << "Introduceti numarul de pacienti:";
    int nr;
    cin >> nr;
    while (nr)
    {
        int varsta;
        cout << "Introduceti varsta pacientului:";
        cin >> varsta;
        if (varsta >= 40) {
            Varstnic* p=new Varstnic;
            cin >> *p;
            pacienti.push_back(p);
        }
        if (varsta < 18)
        {
            Copil* c = new Copil;
            cin >> *c;
            pacienti.push_back(c);
        }
        if(varsta>=18 && varsta<40) {
            Pacient* p=new Pacient;
            cin >> *p;
            pacienti.push_back(p);
        }
        cout << endl;
        nr--;
    }
    int op;
    do {
        cout << "Introduceti o optiune (1-4) :";
        cin >> op;
        switch (op)
        {
        case 1:
        {
            //cerinta 1
            for (unsigned i = 0; i < pacienti.size(); i++)
            {
                cout << *pacienti[i] << endl;
            }

            break;
        }
        case 2:
        {
            //cerinta2
            for (unsigned i = 0; i < pacienti.size(); i++)
            {
                if (pacienti[i]->getVarsta() >= 40)
                {
                    int contor = 0;
                    if (pacienti[i]->getColesterol() > 240)contor++;
                    if (pacienti[i]->getTensiune() > 139)contor++;
                    if (dynamic_cast<Varstnic*>(pacienti[i])->getFumator() == 1)contor++;
                    if (dynamic_cast<Varstnic*>(pacienti[i])->getSedentarism() == 1)contor++;
                    if(contor>=2) cout << *pacienti[i] << endl;
                }
                else if (pacienti[i]->getVarsta() >= 18)
                {
                    int contor = 0;
                    if (pacienti[i]->getColesterol() > 240)contor++;
                    if (pacienti[i]->getTensiune() > 139)contor++;
                    if (contor >= 2) cout << *pacienti[i] << endl;
                }
            }
            break;
        }
        case 3:
        {
            //cerinta 3
            for (unsigned i = 0; i < pacienti.size(); i++)
            {
                if (pacienti[i]->getVarsta()<18)
                {
                    int contor = 0;
                    if (dynamic_cast<Copil*>(pacienti[i])->getAntecedent() != "NU")contor++;
                    if (dynamic_cast<Copil*>(pacienti[i])->getTensiune() > 139)contor++;
                    if (dynamic_cast<Copil*>(pacienti[i])->getColesterol() >= 240)contor++;
                    if (dynamic_cast<Copil*>(pacienti[i])->getProteina() > 0.60)contor++;
                    cout << dynamic_cast<Copil*>(pacienti[i])->getProteina();
                    if(contor>=2)cout << *pacienti[i];
                }
            }

            break;
        }
        case 4:
        {
           //cerinta 4
            cout << "Introduceti numele pacientului:";
            string n;
            cin >> n;
            try {
                for (unsigned i = 0; i < pacienti.size(); i++)
                {
                    if (pacienti[i]->getNume() == n)
                    {
                        cout << *pacienti[i];
                        throw 0;
                        break;
                    }
                }
            }
            catch (int ok)
            {
                if(ok!=0)cout << "Ati introdus un nume gresit";
            }
           
            break;
        }
        }
    } while (op > 0 && op < 5);

    return 0;
}

