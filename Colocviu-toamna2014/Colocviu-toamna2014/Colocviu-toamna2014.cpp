// Colocviu-toamna2014.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include "Angajat.h"
#include<string>
#include "AngajatTesa.h"
#include "AngajatLucrativ.h"
#include "AngajatContract.h"

using namespace std;
int main()
{
	int op;
	vector<Angajat*> angajati;
	string s1 = "Ionescu";
	string s2 = "Ana";
	string s3 = "Tesa";
	//AngajatLucrativ a(s1,s2, "permanent",15, 2, 2000,s3,3);
	//cout << a;
	do {
		cout << "Introduceti optiunea:";
		cin >> op;
		switch (op)
		{
		case 1: {
			for (unsigned i = 0; i < angajati.size(); i++)
				cout << *angajati[i]<<endl;
			break;
		}
		case 2: {
			for (unsigned i = 0; i < angajati.size(); i++)
			{
				if (AngajatLucrativ* a = dynamic_cast<AngajatLucrativ*>(angajati[i]))
				{
					if(dynamic_cast<AngajatLucrativ*>(angajati[i])->getMinori()>0)
						cout << *angajati[i]<<endl;
				}
			}
			break;

		}
		case 3:{
			for (unsigned i = 0; i < angajati.size(); i++)
			{
				if (AngajatTesa* a = dynamic_cast<AngajatTesa*>(angajati[i]))
				{
					if (dynamic_cast<AngajatTesa*>(angajati[i])->getWeek() ==2)
						cout << *angajati[i]<<endl;
				}
			}
			break;

		}
		case 4:{
			for (unsigned i = 0; i < angajati.size(); i++)
			{
				if (AngajatContract* a = dynamic_cast<AngajatContract*>(angajati[i]))
				{
					if (dynamic_cast<AngajatContract*>(angajati[i])->getLunaFin() >=3 && dynamic_cast<AngajatContract*>(angajati[i])->getAnFin()>=2015)
						cout << *angajati[i]<<endl;
				}
			}
			break;
		}
		case 5:{
			cout << "Introduceti angajati.";
			cout << "Specificati tipul angajatului Tesa/lucrativ/plata cu ora:";
			int op2;
			cin >> op2;
			if (op2 == 1)
			{
				Angajat* a = new AngajatTesa;
				cin >> *a;
				angajati.push_back(a);

			}
			if (op2 ==2 )
			{
				Angajat* a = new AngajatLucrativ;
				cin >> *a;
				angajati.push_back(a);

			}
			if (op2 == 3)
			{
				Angajat* a = new AngajatContract;
				cin >> *a;
				angajati.push_back(a);
			}

			break;
		}
		}

	} while (op > 0 && op < 6);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
