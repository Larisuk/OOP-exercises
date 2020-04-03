#include "EvenimentColectiv.hpp"

 EvenimentColectiv::EvenimentColectiv(){
 this->ID = "EV-G" + to_string(count);

 }

 istream& operator>>(istream& in,EvenimentColectiv& e){
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
    int nrParticipanti;
    std::cout << "Introduceti nr.de participanti:";
    in>>nrParticipanti;
    string a;
    for(int i=0;i<nrParticipanti;i++)
    {
        in>>a;
        e.participanti.push_back(a);
    }
    return in;
}


ostream& operator<< (ostream& out, const EvenimentColectiv e) {
    out << "Nume: "<< e.nume << endl;
    out << "Ora si data: " << e.data.ora << ":" << e.data.minut << ", "
        << e.data.zi << "/" << e.data.luna << "/" << e.data.an << endl;
    out << "Locatie: " << e.locatie << endl;
    out << "ID: " << e.ID << endl;
    out << "Durata: " << e.durata << " minute" << endl;
    out << "Participanti: ";
    for(string a :e.participanti)
    {
        out<<a<<", ";
    }
    return out;
}
