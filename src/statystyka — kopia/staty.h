#include <iostream>
#include <string>
using namespace std;

class Uniwersalne
{
    public:
    int zawodnik=0;
    int druzyna=0;
    int liga=0;
    int wczytaj_lige();
    string i_z,n_z,staty,pozycja,format;
    string nazwa_ligi,nazwa_druzyny;
    string imiona[11],nazwiska[11];
    string statystyki[567];
    string Sbramkarz[63],Sobroncy[4][51],Staty[6][50];
    void wybierz_format();
    void czysc_ekran();
    void wyswietl_druzyne(string [11],string [11]);
    string ustal_pozycje(int);
    void wyswietl_statystyki(string[567],string [11],string [11]);
    void pokaz_statystyki_bramkarza(string [63],string);
};
class Statystyka :public Uniwersalne
{
    public:
    //Statystyka();
    int wczytaj_pl();

    void wczytaj_mnc();
    void wczytaj_mnu();
    void wczytaj_lfc();
    void wczytaj_cfc();
    void wczytaj_lei();
    void wczytaj_whu();
    void wczytaj_tot();
    void wczytaj_ars();
    void wczytaj_leu();
    void wczytaj_eve();
    void wczytaj_asv();
    void wczytaj_ncl();
    void wczytaj_wov();
    void wczytaj_cpl();
    void wczytaj_sth();
    void wczytaj_bri();
    void wczytaj_bur();
    void wczytaj_ful();
    void wczytaj_wba();
    void wczytaj_shu();
    //void wczytaj_bou();
    //void wczytaj_wat();
    //void wczytaj_nor();
};
