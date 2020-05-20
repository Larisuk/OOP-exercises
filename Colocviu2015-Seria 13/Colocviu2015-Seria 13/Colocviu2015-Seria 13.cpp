// Colocviu2015-Seria 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<string>
#include "Produse.h"
#include "ProdusePeris.h"
#include "ProdusePromotie.h"
#include "ProdusPerisabilPromotie.h"
using namespace std;
int main()
{
    vector<Produse*> loturi;
    vector<Produse*> prod;
 
    int op;
  
   do {
        cout << "Alege o optiune:";
        cin >> op;
        switch (op) {
        case 1:{
            cout << "Introduceti tipul produsului:normal/persisabil/normal la promotie/perisabil la promotie:";
            int op2;
            cin >> op2;
            if (op2 == 1)
            {
                Produse* p=new Produse;
                cin >> *p;
                prod.push_back(p);
            } 
            if (op2 ==2 )
            {
                Produse* p = new ProdusePeris ;
                cin >> *p;
                prod.push_back(p);
            } 
            if (op2 == 3)
            {
                Produse* p=new ProdusePromotie;         //upcasting
                cin >> *p;
                prod.push_back(p);
            }
            if (op2 == 4)
            {
                Produse* p = new ProdusPerisabilPromotie;
                cin >> *p;
                prod.push_back(p);
            }
            break;
            }
        case 2: {
            
            for (unsigned i = 0; i < prod.size(); i++)
            {
                cout<<prod[i]->getNume()<<" ";
            }
            cout << endl;
            break;
        }
        case 3: {
            cout << "Vreti sa adaugati un lot pentru produsul:";
            string nume;
            cin >> nume;  
            try {
                int ok = false;
                for (unsigned i = 0; i < prod.size(); i++)
                {
                    if (prod[i]->getNume() == nume)
                    {

                        prod[i]->readLot(*prod[i]);
                        loturi.push_back(prod[i]);
                        ok = true;
                        break;
                    }
                }
                if (ok == false)throw true;
            }
            catch (bool) {
                cout << "Produsul nu exista in depozitul magazinului.Va rugam sa il introduceti.";
                cout << endl;
            }
            break;
        }
        case 4: {
            cout << "Introduceti data 1 de intare:";
            string data;
            cin >> data;
            cout << "Introduceti data 2 de intare:";
            string data2;
            cin >> data2;
            int zi, luna, an,zi2, luna2, an2;
            string z = data.substr(0, 2);
            zi = stoi(z);
            string l = data.substr(3, 2);
            luna = stoi(l);
            string a = data.substr(6, 4);
             an = stoi(a);
             string z2 = data2.substr(0, 2);
            zi2 = stoi(z2);
            string l2 = data2.substr(3, 2);
            luna2 = stoi(l2);
            string a2 = data2.substr(6, 4);
             an2 = stoi(a2);
             for (unsigned i = 0; i < loturi.size(); i++)
             {
                 string dt = loturi[i]->getData();
                 int ziC, lunaC, anC;
                 string zL = dt.substr(0, 2);
                 ziC = stoi(zL);
                 string lL = dt.substr(3, 2);
                 lunaC = stoi(lL);
                 string aL = dt.substr(6, 4);
                 anC = stoi(aL);
                 if (anC >= an && anC <= an2)
                 {
                     if (lunaC >= luna && lunaC <= luna2)
                     {
                         if (ziC >= zi && ziC <= zi2)cout << *loturi[i];
                     }
                 }
             }
             break;
        }
        case 5: {
            cout << "Introduceti data curenta:";
            string date;
            cin >> date;
            for (unsigned i = 0; i < loturi.size(); i++)
            {
                int ok = 1;
                if (loturi[i]->getCantitate() > 0)
                {
                    if (ProdusePeris* p = dynamic_cast<ProdusePeris*>(loturi[i]))
                    {
                        if (stoi(date.substr(0, 2)) < stoi(p->getDataExp().substr(0, 2)))
                        {
                            cout << *loturi[i];
                            ok = 0;
                        }
                    }

                    if (ProdusPerisabilPromotie* d = dynamic_cast<ProdusPerisabilPromotie*>(loturi[i]))
                    {
                        if (stoi(date.substr(0, 2)) < stoi(d->getDataExp().substr(0, 2)))
                        {
                            cout << *loturi[i];
                            ok = 0;
                        }
                    }
                    if (ok == 1)cout << *loturi[i];
                }
              
            }
            break;
        }
        case 6:{

        }
        }
        
    } while (op > 0 && op < 7);
    return 0;
}

