#include <iostream>
#include "klak.h"
using namespace std;

int main()
{
    Kalkulator test;
    test.wczytaj_znak();
    int dzialania=0;
    if(test.znak=="+")
        {
            test.dodawanie();
            dzialania++;
        }
    if(test.znak=="-")
        {
            test.odejmowanie();
            dzialania++;
        }
    if(test.znak=="*")
        {
            test.mnozenie();
            dzialania++;
        }
    if(test.znak=="/")
        {
            test.dzielenie_c();
            dzialania++;
        }
    if(test.znak=="//")
        {
            test.dzielenie_nc();
            dzialania++;
        }
    if(test.znak=="%")
        {
            test.reszta_z_dzielenia();
            dzialania++;
        }
    if(test.znak=="^")
        {
            test.potegowanie();
            dzialania++;
        }
    if(test.znak=="sqrt")
        {
            test.pierwiastkowanie();
            dzialania++;
        }
    if(test.znak=="od")
        {
            test.odwrotnosc();
            dzialania++;
        }
        if(dzialania==0)
            cout<<"blad danych"<<endl;
    return 0;

}
