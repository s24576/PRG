#include <iostream>
#include "time.h"
using namespace std;

int main()
{
    int a;
    Time test(22,23,56);
    cout<<test.pokaz_czas()<<endl;

    test.nastepna_sekunda();
    cout<<test.pokaz_czas()<<endl;

    test.nastepna_minuta();
    cout<<test.pokaz_czas()<<endl;

    test.nastepna_godzina();
    cout<<test.pokaz_czas()<<endl;

    test.pokaz_pr();

    if(test.porownanie(test)==1)
    cout<<"Podana godzina jest mniejsza"<<endl;
    else
    cout<<"Podana godzina jest wieksza"<<endl;

    if(test.porownanie2(test)==1)
    cout<<"Podana godzina jest wieksza"<<endl;
    else
    cout<<"Podana godzina jest mniejsza"<<endl;

    test.dodawanie();
    cout<<test.pokaz_czas()<<endl;

    test.odejmowanie();
    cout<<test.pokaz_czas()<<endl;

    if(test.rownosc(test)==1)
    cout<<"Podana godzina jest taka sama"<<endl;
    else
    cout<<"Podane godziny sa rozne"<<endl;

    if(test.roznosc(test)==1)
    cout<<"Podane godziny sa rozne"<<endl;
    else
    cout<<"Podana godzina jest taka sama"<<endl;

    cout<<"ilosc minut: "<<test.policz_minuty()<<endl;
    cout<<"ilosc sekund: "<<test.policz_sekundy()<<endl;
    test.czas_do_polnocy();
    return 0;
}
