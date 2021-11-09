#include <iostream>
#include "klak.h"
using namespace std;

/*Kalkulator::Kalkulator(int pierwsza_liczba, int druga_liczba)
{
    //cout<<"Podaj pierwsza liczbe:"<<endl;
    //cin>>pierwsza_liczba;
    cout<<"Podana liczba to: "<<pierwsza_liczba<<endl;
    //cout<<"Podaj druga liczbe:"<<endl;
    //cin>>druga_liczba;
    cout<<"Podana liczba to: "<<druga_liczba<<endl;
}
Kalkulator::~Kalkulator()
{
    cout<<"Koniec dzialan"<<endl;
}*/
void Kalkulator::wczytaj_znak()
{
    cout<<"Podaj znak dzialania jakie chcesz wykonac:"<<endl;
    cout<<endl;
    cout<<"+ -> dodawanie"<<endl;
    cout<<"- -> odejmowanie"<<endl;
    cout<<"* -> mnozenie"<<endl;
    cout<<"/ -> dzielenie calkowite"<<endl;
    cout<<"// -> dzielenie niecalkowite"<<endl;
    cout<<"% -> reszta z dzielenia"<<endl;
    cout<<"^ -> potegowanie"<<endl;
    cout<<"sqrt -> pierwiastkowanie"<<endl;
    cout<<"od -> odwrotnosc liczby"<<endl;
    cin>>znak;
}
int Kalkulator::dodawanie()
{
    cout<<"Podaj pierwsza liczbe do dodania:"<<endl;
    cin>>pierwsza_liczba;
    cout<<"Podaj druga liczbe:"<<endl;
    cin>>druga_liczba;
    cout<<"Podana liczba to: "<<druga_liczba<<endl;
    wynik = druga_liczba + pierwsza_liczba;
    cout<<pierwsza_liczba<<" + "<<druga_liczba<<" = "<<wynik<<endl;

    return wynik;
}
int Kalkulator::odejmowanie()
{
    cout<<"Podaj pierwsza liczbe do odejmowania:"<<endl;
    cin>>pierwsza_liczba;
    cout<<"Podaj druga liczbe do odejmowania:"<<endl;
    cin>>druga_liczba;
    wynik=pierwsza_liczba-druga_liczba;
    cout<<pierwsza_liczba<<" - "<<druga_liczba<<" = "<<wynik<<endl;

    return wynik;
}
int Kalkulator::mnozenie()
{
    cout<<"Podaj pierwsza liczbe do mnozenia:"<<endl;
    cin>>pierwsza_liczba;
    cout<<"Podaj druga liczbe do mnozenia:"<<endl;
    cin>>druga_liczba;
    wynik=pierwsza_liczba*druga_liczba;
    cout<<pierwsza_liczba<<" * "<<druga_liczba<<" = "<<wynik<<endl;

    return wynik;
}
int Kalkulator::dzielenie_c()
{
    cout<<"Podaj pierwsza liczbe do dzielenia:"<<endl;
    cin>>pierwsza_liczba;
    cout<<"Podaj druga liczbe do dzielenia:"<<endl;
    cin>>druga_liczba;
    int a,b;
    if(druga_liczba==0)
    {
        cout<<"Nie mozna dzielic przez 0"<<endl;
        while(druga_liczba==0)
        {
            cout<<"Podaj poprawne dane"<<endl;
            cin>>druga_liczba;
        }
    }
    a=pierwsza_liczba;
    b=druga_liczba;
    wynik=a/b;
    cout<<pierwsza_liczba<<" / "<<druga_liczba<<" = "<<wynik<<endl;

    return wynik;
}
float Kalkulator::dzielenie_nc()
{
    cout<<"Podaj pierwsza liczbe do dzielenia:"<<endl;
    cin>>pierwsza_liczba;
    cout<<"Podaj druga liczbe do dzielenia:"<<endl;
    cin>>druga_liczba;
    if(druga_liczba==0)
    {
        cout<<"Nie mozna dzielic przez 0"<<endl;
        while(druga_liczba==0)
        {
            cout<<"Podaj poprawne dane"<<endl;
            cin>>druga_liczba;
        }
    }
    wynik=pierwsza_liczba/druga_liczba;
    cout<<pierwsza_liczba<<" // "<<druga_liczba<<" = "<<wynik<<endl;

    return wynik;
}
int Kalkulator::reszta_z_dzielenia()
{
    cout<<"Podaj pierwsza liczbe do dzielenia:"<<endl;
    cin>>pierwsza_liczba;
    cout<<"Podaj druga liczbe do dzielenia:"<<endl;
    cin>>druga_liczba;
    int a,b;
    if(druga_liczba==0)
    {
        cout<<"Nie mozna dzielic przez 0"<<endl;
        while(druga_liczba==0)
        {
            cout<<"Podaj poprawne dane"<<endl;
            cin>>druga_liczba;
        }
    }
    a=pierwsza_liczba;
    b=druga_liczba;
    wynik=a%b;
    cout<<pierwsza_liczba<<" % "<<druga_liczba<<" = "<<wynik<<endl;

    return wynik;
}
int Kalkulator::potegowanie()
{
    cout<<"Podaj liczbe do spotegowania:"<<endl;
    cin>>pierwsza_liczba;
    cout<<"Podaj potege:"<<endl;
    cin>>druga_liczba;
    wynik=1;
    for(int i=1;i<=druga_liczba;i++)
        wynik=wynik*pierwsza_liczba;
    cout<<pierwsza_liczba<<" ^ "<<druga_liczba<<" = "<<wynik<<endl;

    return wynik;
}
float Kalkulator::pierwiastkowanie()
{
    cout<<"Podaj liczbe do spietwiastkowania:"<<endl;
    cin>>pierwsza_liczba;
    wynik=sqrt(pierwsza_liczba);
    cout<<"Pierwiastek pierwszej liczby to: "<<wynik<<endl;

    return wynik;
}

float Kalkulator::odwrotnosc()
{
    cout<<"Podaj liczbe do odwrocenia:"<<endl;
    cin>>pierwsza_liczba;
    wynik=1/pierwsza_liczba;
    cout<<"Odwrotnosc podanej liczby to: "<<wynik<<endl;

    return wynik;
}
