#include <iostream>
#include "Faktura.h"
#include <vector>

using std::cout;
using std::cin;
using std::getline;

int main()
{
    std::string name,surname,street,houseNumber,mailNumber,city,faktName,faktPrice;
    std::vector<PolozkaFaktury> polozky;

    
    cout << "Jméno a příjmení : ";
    cin >> name >> surname;

    cout << "Název ulice a číslo popisné : ";
    cin >> street >> houseNumber;

    cout << "Město a PSČ : ";
    cin >> city;
    getline(cin, mailNumber);

    cout << "Položky (jméno a cena, ukončení napsáním 'thats all') : ";

    do{
        cin >> faktName >> faktPrice;
        if(faktName == "thats" && faktPrice == "all"){
            break;
        }
        
        polozky.emplace_back(faktName, std::stoi(faktPrice));

    }while(true);


    Osoba o1(name, surname); 
    Adresa adresa(street, houseNumber, mailNumber, city);

    Faktura* f1 = new Faktura(0, &o1, &adresa, polozky);


    f1->print();


    delete f1;


    return 0;
}
