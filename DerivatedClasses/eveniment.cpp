#include "eveniment.hpp"

unsigned Eveniment::count = 0;

Eveniment::Eveniment() {
    count++;
    this->ID = "EV-I" + to_string(count);
}

Eveniment::Eveniment(const string n, const string l, const Data dt, const unsigned dr) :
    Eveniment()
{
    nume = n;
    data = dt;
    locatie = l;
    durata = dr;
}

ostream& operator<< (ostream& out, const Eveniment& e) {
    out << "Nume: "<< e.nume << endl;
    out << "Ora si data: " << e.data.ora << ":" << e.data.minut << ", "
        << e.data.zi << "/" << e.data.luna << "/" << e.data.an << endl;
    out << "Locatie: " << e.locatie << endl;
    out << "ID: " << e.ID << endl;
    out << "Durata: " << e.durata << " minute" << endl;
    return out;
}

istream& operator>> (istream& in, Eveniment& e) {
    std::cout << "Introduceti numele:";
    in >> e.nume;
    std::cout << "Introduceti ora:";
    in >> e.data.ora;
    std::cout << "Introduceti minutele:";
    in >> e.data.minut;
    std::cout << "Introduceti ziua:";
    in >> e.data.zi;
    std::cout << "Introduceti luna:";
    in >> e.data.luna;
    std::cout << "Introduceti anul:";
    in >> e.data.an;
    std::cout << "Introduceti locatia:";
    in >> e.locatie;
    std::cout << "Introduceti(optional) durata:";
    in >> e.durata;
    return in;
}
bool Eveniment::cautare(string cod)
{
    if (this->ID == cod)return 1;
    return 0;
}