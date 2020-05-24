#pragma once

class RentaCar :
{
private:
	string nume,locatie;
	const double tarifEuro=12;
	const double taxaFixa = 0.8;
	int Ls;
	struct data1 {
		int ora,minut,zi, luna, an;
	}dataPreluare;
	struct data2 {
		int ora2, minut2, zi2, luna2, an2;
	}dataPredare;
	double costFinal;
public:
	RentaCar = default;
	RentaCar(string n, int z, int l, int a, int o, int m, int z2, int l2, int a2, int o2, int m2, string loc)
	{
		nume = n;
		locatie = loc;
		dataPreluare.ora = o;
		dataPreluare.minut = m;
		dataPreluare.zi = z;
		dataPreluare.luna = l;
		dataPreluare.an = a;
		dataPredare.ora2 = o2;
		dataPredare.minut2 = m2;
		dataPredare.zi2 = z2;
		dataPredare.luna2 = l2;
		dataPredare.an2 = a2;

  }
	void Leasing()
	{
		int op;
		costFinal = 0;
		Ls = 3;
		do {
			
			cout << "Mai vreti sa introduceti?";
			cin >> op;
			cout << "Introduceti leasing extra:";
			string ch;
			cin >> ch;
			Ls++;
		} while (op != 0);
		if (Ls > 3)costFinal += taxaFixa;
		if (dataPreluare.an == dataPredare.an2)
		{
			int zile = dataPredare.zi2 - dataPreluare.zi;
			if (zile <= 6)costFinal = zile * tarifEuro;
			if (zile >= 7 && zile <= 14)
			{
				costFinal = zile * tarifEuro;;
				costFinal = costFinal - 1 / 10 * costFinal;
			}
			if (zile > 14)
			{
				costFinal = zile * tarifEuro;;
				costFinal = costFinal - 15 / 100 * costFinal;

			}
		}
	}
};

