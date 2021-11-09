#include <iostream>

using namespace std;

struct Time
{
    int godzina;
    int minuta;
    int sekunda;

    public:
    Time(int,int,int);
    ~Time();
    //podstawowe funkcje
    void nastepna_godzina();
    void nastepna_minuta();
    void nastepna_sekunda();
    string pokaz_czas();
    enum pora_dnia
    {
    //rano=(4,5,6,7,8,9,10),
    rano0=4,
    rano1=5,
    rano2=6,
    rano3=7,
    rano4=8,
    rano5=9,
    rano6=10,
    //dzien=(11,12,13,14,15,16,17),
    dzien0=11,
    dzien1=12,
    dzien2=13,
    dzien3=14,
    dzien4=15,
    dzien5=16,
    dzien6=17,
    //wieczor=(18,19,20,21,22),
    wieczor0=18,
    wieczor1=19,
    wieczor2=20,
    wieczor3=21,
    wieczor4=22,
    //noc=(23,0,1,2,3)
    noc0=23,
    noc1=0,
    noc2=1,
    noc3=2,
     };
    void pokaz_pr();
   //dzialania
    void dodawanie();
    void odejmowanie();
    bool porownanie(Time );
    bool porownanie2(Time);
    bool rownosc(Time);
    bool roznosc(Time);
    //liczenie
    int policz_sekundy();
    float policz_minuty();
    void czas_do_polnocy();
};
