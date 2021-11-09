#include <iostream>
#include <cmath>

using namespace std;

class Kalkulator
{
    public:
    float pierwsza_liczba, druga_liczba, wynik;
    string znak;
    //Kalkulator(int,int);
    //~Kalkulator();
    void wczytaj_znak();
    int dodawanie();
    int odejmowanie();
    int mnozenie();
    int dzielenie_c();
    float dzielenie_nc();
    int reszta_z_dzielenia();
    int potegowanie();
    float pierwiastkowanie();
    float odwrotnosc();
};
