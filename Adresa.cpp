#include "Adresa.h"
#include <string>

using std::to_string;

Adresa::Adresa(std::string street, string houseNumber, string mailNumber, std::string city)
{
    this->street = street;
    this->houseNumber = houseNumber;
    this->mailNumber = mailNumber.substr(1,mailNumber.size() - 1);
    this->city = city;
}

std::string Adresa::getAdress()
{
    return this->street + " " + this->houseNumber + "\n" + this->mailNumber + " " + this->city;
}

Adresa::~Adresa()
{
}
