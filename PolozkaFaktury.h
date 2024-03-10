#include <iostream>

using std::string;

class PolozkaFaktury
{
private:
    string name;
    int price;

public:
    PolozkaFaktury(string name, int price);

    string getName();
    int getPrice();

    ~PolozkaFaktury();
};