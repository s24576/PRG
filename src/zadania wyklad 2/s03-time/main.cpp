#include <iostream>
#include "time.h"
using namespace std;

int main()
{
    Time test(12,23,56);
    test.pokaz_czas();
    //test.nastepna_godzina();
    //test.pokaz_czas();
    //test.porownanie(test);
    Time test2(14,45,54);
    //if(test.porownanie(test)==1)
    //cout<<"Podana godzina jest mniejsza"<<endl;
    //else
    //cout<<"Podana godzina jest wieksza"<<endl;
    return 0;
}
