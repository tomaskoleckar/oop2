#include <iostream>

class Osoba
{
private:
    std::string name;
    std::string surname;
public:
    Osoba(std::string name, std::string surname);
    std::string getFullName();

    ~Osoba();
};

