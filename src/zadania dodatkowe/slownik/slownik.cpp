#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "slownik.h"

using namespace std;

int Slownik::polecenie()
{
    int a;

    cout<<"0 -> wyjscie z programu"<<endl;
    cout<<"1 -> dodaj slowo"<<endl;
    cout<<"2 -> usun slowo"<<endl;
    cout<<"3 -> wyszukaj slowo"<<endl;
    cout<<"4 -> wyswietl slownik"<<endl;
    cout<<"5 -> posortuj slownik alfabetycznie"<<endl;
    cin>>a;

    if(a<0 || a>5)
    {
        while(a<0 || a>5)
        {
            cout<<"blad danych podaj poprawna wartosc"<<endl;
            cin>>a;
        }
    }

    return a;
}
void Slownik::dodaj_slowo()
{
    string b;
    cout<<"podaj slowo ktore chcesz dodac"<<endl;
    cin>>b;
    if(b.empty())
    {
        while(b.empty())
        {
            cout<<"nie podano slowa"<<endl;
            cout<<"podaj slowo ktore chcesz dodac"<<endl;
            cin>>b;
        }
    }
    int c=slowa.size(),licznik=0;
    for(int i=0;i<c;i++)
    {
        if(b==slowa[i])
            licznik++;
    }
    if(licznik==0)
        {
            slowa.push_back(b);
            cout<<"slowo zostalo dodane"<<endl;
        }
    else
        cout<<"podane slowo znajduje sie juz w slowniku"<<endl;
}
void Slownik::usun_slowo()
{
    string b;
    int c=slowa.size(),licznik=0,temp;
    if(slowa.size()==0)
        cout<<"slownik jest pusty"<<endl;

    else
    {
        cout<<"podaj slowo ktore chcesz usunac"<<endl;
        cin>>b;
        if(b.empty())
        {
            while(b.empty())
            {
                cout<<"nie podano slowa"<<endl;
                cout<<"podaj slowo ktore chcesz usunac"<<endl;
                cin>>b;
            }
        }
        for(int i=0;i<c;i++)
        {
            if(b==slowa[i])
                {
                    licznik++;
                    temp=i-1;
                }
        }
        if(licznik==0)
        {
            cout<<"nie ma takiego slowa w slowniku"<<endl;
        }
        else
        {
            slowa.erase(slowa.begin()+temp);
            cout<<"podane slowo zostalo usuniete"<<endl;
        }
    }

}
void Slownik::wyszukaj_slowo()
{
    string b;
    int c=slowa.size(),licznik=0,temp;
    if(slowa.size()==0)
        cout<<"slownik jest pusty"<<endl;

    else
    {
        cout<<"podaj slowo ktore chcesz znalezc"<<endl;
        cin>>b;
        if(b.empty())
        {
            while(b.empty())
            {
                cout<<"nie podano slowa"<<endl;
                cout<<"podaj slowo ktore chcesz znalezc"<<endl;
                cin>>b;
            }
        }
        for(int i=0;i<c;i++)
        {
            if(b==slowa[i])
                {
                    licznik++;
                    cout<<slowa[i]<<endl;
                }
        }
        if(licznik==0)
            cout<<"nie ma takiego slowa w slowniku"<<endl;
    }
}
void Slownik::wyswietl_slownik()
{
    int a=slowa.size();
    if(a==0)
        cout<<"slownik jest pusty"<<endl;
    else
    {
        for(int i=0;i<a;i++)
            cout<<slowa[i]<<endl;
    }
}
void Slownik::sortuj_slownik()
{
    int a=slowa.size();
    if(a==0)
        cout<<"slownik jest pusty"<<endl;
    else
        sort( slowa.begin(), slowa.end());
}
