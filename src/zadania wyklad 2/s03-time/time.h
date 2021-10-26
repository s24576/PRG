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
    void nastepna_godzina();
    void nastepna_minuta();
    void nastepna_sekunda();
    void pokaz_czas();
    //to_string() const;
    //pora dania tu musi byc
    // ??? co to jest auto operator+ (Time const&) const -> Time;
    //void operator-(int h,int m,int s);
    void dodawanie();
    void odejmowanie();
    bool porownanie(Time const&);
    bool porownanie2(Time const&);
    bool rownosc(Time const&);
    bool roznosc(Time const&);
};
