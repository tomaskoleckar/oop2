#include "PolozkaFaktury.h"

PolozkaFaktury::PolozkaFaktury(string name, int price)
{
    this->name = name;
    this->price = price;
}

string PolozkaFaktury::getName()
{
    return this->name;
}

int PolozkaFaktury::getPrice()
{
    return this->price;
}

PolozkaFaktury::~PolozkaFaktury()
{
}
