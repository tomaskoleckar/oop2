#include <iostream>
#include "Osoba.h"
#include "Adresa.h"
#include "PolozkaFaktury.h"
#include <vector>


class Faktura
{
private:
    int id;
    Osoba * osoba;
    Adresa * adresa;
    std::vector<PolozkaFaktury> polozky;
public:
    Faktura(int id,Osoba * osoba, Adresa * adresa, std::vector<PolozkaFaktury> polozky);

    int getWholePrice();

    void print();

    ~Faktura();
};

