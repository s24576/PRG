#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    Student ja("Kacper","Mackowiak","s24576",1,3.0);
    ja.wyswietl_studenta();

    ja.dodaj_studenta();
    ja.wyswietl_studenta();
    return 0;
}
