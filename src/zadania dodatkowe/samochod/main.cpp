#include <iostream>
#include "auto.h"
using namespace std;

int main()
{
    Samochod test("Mazda","Miata",1992,10000);
    test.ustal_cena_w();
    test.ustal_cena_k();
    test.wyswietl_oferte();
    Samochod test1("Toyota","Supra",1997,100000);
    test1.ustal_cena_w();
    test1.ustal_cena_k();
    test1.wyswietl_oferte();
    return 0;
}
