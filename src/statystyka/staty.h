#include <iostream>

using namespace std;

class Statystyka
{
    public:
    int zawodnik;
    int druzyna;
    int liga;
    Statystyka(int=0, int=0, int=0);
    void czysc_ekran();
    int wczytaj_lige();
    int wczytaj_druzyne();
    int wczytaj_zawodnika();
    int wczytaj_pl();
    enum druzyny_pl
    {
        Liverpool=1,
        City=2,
        United=3,
        Chelsea=4,
        Leicester=5,
        Tottenham=6,
        Wolverhampton=7,
        Arsenal=8,
        Sheffield=9,
        Burnley=10,
        Southampton=11,
        Everton=12,
        Newcastle=13,
        Crystal=14,
        Brighton=15,
        Whu=16,
        Villa=17,
        Bournemouth=18,
        Watford=19,
        Norwich=20

    };
    void wczytaj_lfc();
    void wczytaj_mnc();
    void wczytaj_mnu();
    void wczytaj_cfc();
    void wczytaj_lei();
    void wczytaj_tot();
    void wczytaj_wov();
    void wczytaj_ars();
    void wczytaj_shu();
    void wczytaj_bur();
    void wczytaj_sth();
    void wczytaj_eve();
    void wczytaj_ncl();
    void wczytaj_cpl();
    void wczytaj_bri();
    void wczytaj_whu();
    void wczytaj_asv();
    void wczytaj_bou();
    void wczytaj_wat();
    void wczytaj_nor();
};
