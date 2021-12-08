#include <iostream>
#include <string>

class Samochod
{
    std::string nazwa;
    std::string model;
    int rok_p;
    int przebieg;
    int cena_p;
    int cena_k;

    public:
    Samochod(std::string, std::string, int, int);
    ~Samochod();
    int ustal_cena_w();
    int ustal_cena_k();
    void wyswietl_oferte();
};