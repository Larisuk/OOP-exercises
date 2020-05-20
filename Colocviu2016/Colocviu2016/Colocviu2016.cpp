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
    Ingredient lista[5] = { Ingredient ("piept de pui", 15, 1, "kg"), Ingredient("sare",0.75, 10,"gram"), Ingredient("salam",1.5,5,"felii"), lista[2], Ingredient()};
    Pizza p1("Rustica", lista,  4,false);
    lista[3]=lista[3] + 3; // se adaugă 3 felii de salam la ingredient
    lista[1]++; // se adaugă un gram de sare la ingredient
    lista[0] -= 2.5; // se scade o valoare din pretul ingredientului
    Pizza p2 = p1, p3;
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
    /*Ingredient lista[5] = { Ingredient(”piept de pui”, 15, 1, ”kg”), Ingredient("sare",0.75, 10,
”gram”), Ingredient(”salam”,1.5,5, ”felii”), lista[2], Ingredient() }, i1(”sunca”, 3, 2, ”felii”);
    cin& gt; &gt; lista[4]; // se citește un nou ingredient
    lista[3] = lista[3] + 3; // se adaugă 3 felii de salam la ingredient
    lista[1]++; // se adaugă un gram de sare la ingredient
    lista[0] -= 2.5; // se scade o valoare din pretul ingredientului
    lista[2].del(); //ingredientul nu mai este disponibil
    for (int i = 0; i & lt; 5; i++) cout& lt; &lt; ”Ingredient: “& lt; &lt; lista[i] & lt; &lt; endl;
    Pizza p1("Rustica", lista, 4, false); // se crează un sortiment nou de pizza
    Pizza p2 = p1, p3; // se crează două sortimente noi de pizza, dintre care unul cu aceleași
    ingrediente ca pizza p1
        p2 = p2 – lista[2]; // se scoate ingredientul respectiv din rețeta sortimentului
    p3 = p2 + i1; // se stabilește rețeta pizzei p3 din ingredientele pizzei p2 la care se adaugă
    ingredientul i1
        p3.nume(”Prosciuto”); // este schimbată denumirea pizzei p3
    cout& lt; &lt; ”Pizza ”& lt; &lt; p1.nume()& lt; &lt; ” ”& lt; &lt; p1.pret()& lt; &lt; ” lei”& lt; &lt; endl;
    cout& lt; &lt; ”Pizza ”& lt; &lt; p2.nume()& lt; &lt; ” ”& lt; &lt; p2.pret()& lt; &lt; ” lei”& lt; &lt; endl;
    cout& lt; &lt; ”Pizza ”& lt; &lt; p3.nume()& lt; &lt; ” ”& lt; &lt; p3.pret()& lt; &lt; ” lei”;*/
    return 0;
}

