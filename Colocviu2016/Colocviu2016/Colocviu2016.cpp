// Colocviu2016.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bautura.h"
#include<set>
#include "Pizza.h"
#include "PizzaSpec.h"
#include "OfSpec.h"
#include"Ingredient.h"
#include<string>
using namespace std;
int main()
{
    Ingredient lista[5] = { Ingredient ("piept de pui", 15, 1, "kg"), Ingredient("sare",0.75, 10,"gram")
     , Ingredient("salam",1.5,5,"felii"),lista[2], Ingredient()};
    Ingredient lista2[2] = { Ingredient("ketchup", 15, 1, "ml"), Ingredient("porumb",0.75, 10,"gram") };
  //  cin >> lista[4];
    Pizza p1("Rustica", lista,  4,false);
    lista[3]=lista[3] + 3; // se adaugă 3 felii de salam la ingredient
    lista[1]++; // se adaugă un gram de sare la ingredient
    lista[0] -= 2.5; // se scade o valoare din pretul ingredientului
    Pizza p2 = p1, p3;
    for (auto ob : lista)cout << ob;
    Ingredient i1("sunca", 3, 2, "felii");
    cout << "pret p2:" << p2.pret() << endl;
    cout << p2 << endl << endl;
    p2 = p2 - lista[2]; // se scoate ingredientul respectiv din rețeta sortimentului
    p3 = p2 + i1; // se stabilește rețeta pizzei p3 din ingredientele pizzei p2 la care se adaugă
    p3.nume("Prosciuto"); // este schimbată denumirea pizzei p3
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p2.nume() << " " << p2.pret() << endl;
    cout << p3.nume() << " " << p3.pret() << endl;
    int op;
    vector<Pizza*> pizze;
    vector<OfSpec> oferte;
    Bautura b("Cola", 12);
    OfSpec of(p2, b);
    oferte.push_back(of);
    pizze.push_back(&p1);
    pizze.push_back(&p2);
    pizze.push_back(&p3);
    string s = "Margherita";
    PizzaSpec p4(s, lista, 4, false,lista2,2);
    Pizza* ob = &p4;
    pizze.push_back(ob);
    do {
        cout << "Introduceti o optiune:";
        cin >> op;
        switch (op) {
        case 1: {
            for (auto ob : lista)cout << ob << endl;
            break;
            }
        case 2: {
            for (auto ob : pizze)cout << *ob << endl;
            break;
        }
        case 3: {
            for (unsigned i = 0; i < pizze.size(); i++)
            {
                vector<Ingredient*> ingr = pizze[i]->getIngrediente();
                int nr = ingr.size();
                set<string> numeingrediente;
                for (auto ob : lista)
                {
                    numeingrediente.insert(ob.getNume());
                }
                cout << "Pentru pizza:" << pizze[i]->nume() << endl;
                for (auto ob : numeingrediente)
                {
                    int contor = 0;
                    for (int j = 0; j < nr; j++)
                        if (ob == ingr[j]->getNume())contor++;
                    if (contor == 1)cout << ob<<endl;
                    else if (contor > 1)cout << ob << " care apare de " << contor << " ori." << endl;
                }
           }
            break;
        }
        case 4: {
            for (auto ob : oferte)cout << ob << endl;
            break;
        }
        }

    } while (op > 0 && op < 5);
 

    return 0;
}

