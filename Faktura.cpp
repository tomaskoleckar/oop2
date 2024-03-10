#include "Faktura.h"
#include <vector>
#include <iostream>

Faktura::Faktura(int id, Osoba *osoba, Adresa *adresa, std::vector<PolozkaFaktury> polozky)
{
    this->id = id;
    this->osoba = osoba;
    this->adresa = adresa;
    this->polozky = polozky;
}

int Faktura::getWholePrice()
{
    int result = 0;
    for(int i = 0;i<polozky.size();i++){
        result += polozky[i].getPrice();
    }
    return result;
}

void Faktura::print()
{
    using std::cout;
    using std::endl;

    cout << endl;

    cout << this->osoba->getFullName() << endl;
    cout << this->adresa->getAdress() << endl;
    for(int i = 0;i<polozky.size();i++){
        cout << polozky[i].getName() << " " << polozky[i].getPrice() << endl;
    }
    cout << "Celková cena: " << this->getWholePrice() << endl;
}

Faktura::~Faktura()
{
}
