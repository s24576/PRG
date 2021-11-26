#include <iostream>

using namespace std;

class Statystyka
{
    public:
    int zawodnik=0;
    int druzyna=0;
    int liga=0;
    Statystyka();
    void czysc_ekran();
    int wczytaj_lige();
    int wczytaj_druzyne();
    int wczytaj_zawodnika();
    int wczytaj_pl();
    enum druzyny_pl
    {
        City=1,
        United=2,
        Liverpool=3,
        Chelsea=4,
        Leicester=5,
        Whu=6,
        Tottenham=7,
        Arsenal=8,
        Leeds=9,
        Everton=10,
        Villa=11,
        Newcastle=12,
        Wolverhampton=13,
        Crystal=14,
        Southampton=15,
        Brighton=16,
        Burnley=17,
        Fulham=18,
        Wba=19,
        Sheffield=20,


    };
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
