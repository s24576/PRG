#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Slownik
{
    public:
    vector <string> slowa;
    int licznik=0;
    int polecenie();
    void dodaj_slowo();
    void usun_slowo();
    void wyszukaj_slowo();
    void wyswietl_slownik();
    void sortuj_slownik();
};
