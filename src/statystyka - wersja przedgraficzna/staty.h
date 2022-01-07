#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;

class Uniwersalne
{
    public:
    int zawodnik=0;
    int druzyna=0;
    int liga=0;
    int wczytaj_lige();
    int num_z;
    string i_z,n_z,staty,pozycja,funkcja,format;
    string nazwa_ligi,nazwa_druzyny;
    void wyswietl_nazwe_ligi(string);
    void wyswietl_nazwe_druzyny(string);
    string imiona[11],nazwiska[11];
    string statystyki[567];
    string Sbramkarz[63],Sobroncy[4][51],Sofensywny[6][50];
    string wybierz_format();
    void wybierz_funkcje();
    void czysc_ekran();
    void wyswietl_druzyne(string [11],string [11]);
    string ustal_pozycje(int);
    void wyswietl_statystyki(string[567],string [11],string [11]);
    void pokaz_statystyki_bramkarza(string [63],string);
    void pokaz_statystyki_obroncy(string[4][51],string,int);
    void pokaz_statystyki_ofensywnego(string[6][50],string,int);
};

class PL :public Uniwersalne
{
    public:
    int wczytaj_pl();
    void wyswietl_pl(int);
    int odpal_pl();

    void wczytaj_PLmnc();
    void wczytaj_PLmnu();
    void wczytaj_PLlfc();
    void wczytaj_PLcfc();
    void wczytaj_PLlei();
    void wczytaj_PLwhu();
    void wczytaj_PLtot();
    void wczytaj_PLars();
    void wczytaj_PLleu();
    void wczytaj_PLeve();
    void wczytaj_PLasv();
    void wczytaj_PLncl();
    void wczytaj_PLwov();
    void wczytaj_PLcpl();
    void wczytaj_PLsth();
    void wczytaj_PLbri();
    void wczytaj_PLbur();
    void wczytaj_PLful();
    void wczytaj_PLwba();
    void wczytaj_PLshu();
    //void wczytaj_bou();
    //void wczytaj_wat();
    //void wczytaj_nor();
};

class SA :public PL
{
    public:
    int wczytaj_sa();
    void wyswietl_sa(int);
    int odpal_sa();

    void wczytaj_SAint();
	void wczytaj_SAmil();
    void wczytaj_SAatl();
    void wczytaj_SAjuv();
    void wczytaj_SAnap();
    void wczytaj_SAlaz();
    void wczytaj_SArom();
    void wczytaj_SAsas();
    void wczytaj_SAsam();
    void wczytaj_SAver();
    void wczytaj_SAgen();
    void wczytaj_SAbol();
    void wczytaj_SAfio();
    void wczytaj_SAudi();
    void wczytaj_SAspe();
    void wczytaj_SAcag();
    void wczytaj_SAtor();
    void wczytaj_SAben();
    void wczytaj_SAcro();
    void wczytaj_SApar();
};

class L1 :public SA
{
    public:
    int wczytaj_l1();
    void wyswietl_l1(int);
    int odpal_l1();

    void wczytaj_L1lil();
    void wczytaj_L1psg();
    void wczytaj_L1mon();
    void wczytaj_L1lyo();
    void wczytaj_L1mar();
    void wczytaj_L1ren();
    void wczytaj_L1len();
    void wczytaj_L1mot();
    void wczytaj_L1nic();
    void wczytaj_L1met();
    void wczytaj_L1eti();
    void wczytaj_L1bor();
    void wczytaj_L1ang();
    void wczytaj_L1rei();
    void wczytaj_L1str();
    void wczytaj_L1lor();
    void wczytaj_L1bre();
    void wczytaj_L1nan();
    void wczytaj_L1nim();
    void wczytaj_L1dij();
};

class BL :public L1
{
    public:
    int wczytaj_bl();
    void wyswietl_bl(int);
    int odpal_bl();

	void wczytaj_BLbay();
	void wczytaj_BLrbl();
	void wczytaj_BLbod();
	void wczytaj_BLvfl();
	void wczytaj_BLein();
	void wczytaj_BLblv();
	void wczytaj_BLuni();
	void wczytaj_BLbom();
	void wczytaj_BLvfb();
	void wczytaj_BLscf();
	void wczytaj_BLtsg();
	void wczytaj_BLfsv();
	void wczytaj_BLfca();
	void wczytaj_BLher();
	void wczytaj_BLarm();
	void wczytaj_BLodk();
	void wczytaj_BLwer();
	void wczytaj_BLsch();

};
class Wyszukiwarka :public BL
{
    public:
    string wprowadzone;
    string szukanie_wprowadz();
    int wielkosc;
    int wybor;

    int szukanie_wielkosc(string);
    vector <string> podziel(string);
    bool szukanie_pasuje(string,string,int);
    void szukanie(int,string,string);

    vector <string> szukanie_imie;
    vector <string> szukanie_nazwisko;
    vector <int> szukanie_liga;
    vector <int> szukanie_druzyna;
    vector <int> szukanie_zawodnik;

    void wyszukaj_zawodnika(string [567],int,string);
    void wyszukaj_pl(int,int,string);
    void wyszukaj_sa(int,int,string);
    void wyszukaj_l1(int,int,string);
    void wyszukaj_bl(int,int,string);
    int d_w;
};

class Quizz :public BL
{
    public:
    int licznik=0,pytanie,z_p=0,kontynuuj=1;
    int policz_pytania();
    void pytania();
    string wczytaj_pytania(int);
    int wylosuj_pytanie();
    int wylosuj_lige();
    int wylosuj_druzyne(int);
    int wylosuj_zawodnika();
    int wylosuj_defensywnego();
    int wylosuj_ofensywnego();
    string tekst;
    bool zadaj_pytanie(string,int);
    string przekaz_statystyke(int,int,int,int);
    string przekaz_pl(int,int,int);
    string przekaz_sa(int,int,int);
    string przekaz_l1(int,int,int);
    string przekaz_bl(int,int,int);
    string przekaz_zawodnika(string [567],int,int);

    string przekaz_imie(int,int,int);
    string imie_pl(int,int);
    string imie_sa(int,int);
    string imie_l1(int,int);
    string imie_bl(int,int);

    string przekaz_nazwisko(int,int,int);
    string nazwisko_pl(int,int);
    string nazwisko_sa(int,int);
    string nazwisko_l1(int,int);
    string nazwisko_bl(int,int);

    int wynik_quizzu(int);
};
