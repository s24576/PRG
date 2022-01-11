#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "slownik.h"

using namespace std;

int main()
{
    int a;
    Slownik test;
    do
    {
      a=test.polecenie();
      if(a==1)
        test.dodaj_slowo();
      else if(a==2)
        test.usun_slowo();
      else if(a==3)
        test.wyszukaj_slowo();
      else if(a==4)
        test.wyswietl_slownik();
      else if(a==5)
        test.sortuj_slownik();
    }
    while(a!=0);
    return 0;
}
