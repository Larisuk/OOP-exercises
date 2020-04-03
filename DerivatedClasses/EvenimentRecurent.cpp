#include "EvenimentRecurent.hpp"

EvenimentRecurent::EvenimentRecurent(){
    this->ID = "EV-IR" + to_string(count);
    recurenta = "";
}

istream& operator>>(istream& in,EvenimentRecurent& e){
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
    std::cout << "Introduceti recurenta:";
    in >> e.recurenta;

    return in;
}

ostream& operator<< (ostream& out, const EvenimentRecurent e) {
    out << "Nume: "<< e.nume << endl;
    out << "Ora si data: " << e.data.ora << ":" << e.data.minut << ", "
        << e.data.zi << "/" << e.data.luna << "/" << e.data.an << endl;
    out << "Locatie: " << e.locatie << endl;
    out << "ID: " << e.ID << endl;
    out << "Durata: " << e.durata << " minute" << endl;
    out << "Eveniment "<<e.recurenta<<endl;
    return out;
}
