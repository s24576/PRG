#include <iostream>
#include <string>

using namespace std;

class Student
{
string imie;
string nazwisko;
string numer_indeksu;
int semestr;
float srednia_ocen;

public:
Student(string,string,string,int,float);
~Student();
void dodaj_studenta();
void wyswietl_studenta();
};
