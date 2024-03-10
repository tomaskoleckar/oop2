#include "Osoba.h"

Osoba::Osoba(std::string name, std::string surname)
{
    this->name = name;
    this->surname = surname;
}

std::string Osoba::getFullName()
{
    return this->name + " " + this->surname;
}

Osoba::~Osoba()
{
}