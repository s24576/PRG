#include <iostream>
#include "student.h"

using namespace std;

Student::Student(string i,string n,string n_i,int s,float s_o)
{
  imie=i;
  nazwisko=n;
  numer_indeksu=n_i;
  semestr=s;
  srednia_ocen=s_o;
}
Student::~Student()
{
    cout<<"koniec"<endl;
}
void Student::dodaj_studenta()
{
cout<<"podaj imie studenta"<<endl;
cin>>imie;
cout<<"podaj nazwisko studenta"<<endl;
cin>>nazwisko;
cout<<"podaj numer indeksu studenta"<<endl;
cin>>numer_indeksu;
cout<<"podaj semestr"<<endl;
cin>>semestr;
cout<<"podaj srednia ocen"<<endl;
cin>>srednia_ocen;
}
void Student::wyswietl_studenta()
{
cout<<imie<<endl;
cout<<nazwisko<<endl;
cout<<numer_indeksu<<endl;
cout<<semestr<<endl;
cout<<srednia_ocen<<endl;
}
