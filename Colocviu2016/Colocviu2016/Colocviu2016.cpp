// Colocviu2016.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bautura.h"
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
    cin >> lista[4];
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

            break;
        }
        case 4: {
            break;
        }
        }

    } while (op > 0 && op < 5);
    /*Ingredient lista[5] = { Ingredient(”piept de pui”, 15, 1, ”kg”), Ingredient("sare",0.75, 10,
”gram”), Ingredient(”salam”,1.5,5, ”felii”), lista[2], Ingredient() }, i1(”sunca”, 3, 2, ”felii”);
    cin& gt; &gt; lista[4]; // se citește un nou ingredient
  
    for (int i = 0; i & lt; 5; i++) cout& lt; &lt; ”Ingredient: “& lt; &lt; lista[i] & lt; &lt; endl;
*/

    
    return 0;
}

