#include <iostream>
using std::string;

class Adresa
{
private:
    std::string street;
    string houseNumber;
    string mailNumber;
    std::string city;
public:
    Adresa(string street, string houseNumber, string mailNumber, std::string city);

    string getAdress();

    ~Adresa();
};
