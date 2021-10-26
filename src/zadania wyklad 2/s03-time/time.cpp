#include <iostream>
#include "time.h"

using namespace std;

Time::Time(int h,int m,int s)
{
    godzina=h;
    if(godzina>23||godzina<0)
    {
        while(godzina>23||godzina<0)
        {
            cout<<"Podaj poprawna wartosc godzinowa"<<endl;
            cin>>godzina;
        }
    }
    minuta=m;
    {
        if(minuta>59|| minuta<0)
        {
            while(minuta>59 || minuta<0)
            cout<<"Podaj poprawna wartosc minutowa"<<endl;
            cin>>minuta;
        }
    }
    sekunda=s;
    {
        if(sekunda>59 || sekunda<0)
        {
            while(sekunda>59 || sekunda<0)
            cout<<"podaj poprawna wartosc sekundowa"<<endl;
            cin>>sekunda;
        }
    }
}
Time::~Time()
{
    cout<<"czas sie skonczyl"<<endl;
}
void Time::nastepna_godzina()
{
    if(godzina==23)
        godzina=0;
    else
        godzina++;
}
void Time::nastepna_minuta()
{
    if(minuta==59)
    {
        if(godzina==23)
        {
            godzina=0;
            minuta=0;
        }
        else
        {
        minuta=0;
        godzina++;
        }
    }
    else
        minuta++;
}
void Time::nastepna_sekunda()
{
   if(sekunda==59)
   {
       if(minuta==59)
       {
           if(godzina==23)
           {
               godzina=0;
               minuta=0;
               sekunda=0;
           }
           else
           {
           minuta=0;
           godzina++;
           }
       }
       else
       minuta++;
   }
   else
   sekunda++;
}
void Time::pokaz_czas()
{
    if(godzina<10)
        cout<<"0"<<godzina<<":";
    else
        cout<<godzina<<":";
    if(minuta<10)
        cout<<"0"<<minuta<<":";
    else
        cout<<minuta<<":";
    if(sekunda<10)
        cout<<"0"<<sekunda;
    else
        cout<<sekunda;
    cout<<endl;
}
//enum pora_dnia()
void Time::dodawanie()
{
    int a,b,c,licznikS,licznikM;
    licznikS=0;
    licznikM=0;
    cout<<"Podaj ilosc godzin do dodania"<<endl;
    cin>>a;
    cout<<"Podaj ilosc minut do dodania"<<endl;
    cin>>b;
    cout<<"Podaj ilosc sekund do dodania"<<endl;
    cin>>c;
    sekunda=sekunda+c;
    if(sekunda>59)
    {
        licznikS=sekunda/60;
        sekunda=sekunda%60;
    }
    minuta=minuta+licznikS+b;
    if(minuta>59)
    {
        licznikM=minuta/60;
        minuta=minuta/60;
    }
    godzina=godzina+licznikM+a;
    if(godzina>23)
        godzina=godzina%24;
    cout<<"Godzina po dodawaniu to:"<<godzina<<":"<<minuta<<":"<<sekunda<<endl;
}
bool Time::porownanie(Time const&)
{
int a=0,b=0;
int godzina2,minuta2,sekunda2;
a=godzina*3600+minuta*60+sekunda;
cout<<"Podaj godzine do porownania"<<endl;
cin>>godzina2;
b=godzina2*3600;
cout<<"Podaj minuty do porownania"<<endl;
cin>>minuta2;
b=b+minuta2*60;
cout<<"Podaj sekundy do porownania"<<endl;
cin>>sekunda2;
b=b+sekunda2;

if(a>b)
    {
        //cout<<"Podana godzina jest mniejsza"<<endl;
        return true;
    }
else
    {
        //cout<<"Podana godzina jest wieksza"<<endl;
        return false;
    }
}
bool Time::porownanie2(Time const&)
{
int a=0,b=0;
int godzina2,minuta2,sekunda2;
a=godzina*3600+minuta*60+sekunda;
cout<<"Podaj godzine do porownania"<<endl;
cin>>godzina2;
b=godzina2*3600;
cout<<"Podaj minuty do porownania"<<endl;
cin>>minuta2;
b=b+minuta2*60;
cout<<"Podaj sekundy do porownania"<<endl;
cin>>sekunda2;
b=b+sekunda2;

if(a<b)
    {
        //cout<<"Podana godzina jest mniejsza"<<endl;
        return true;
    }
else
    {
        //cout<<"Podana godzina jest wieksza"<<endl;
        return false;
    }
}
bool Time::rownosc(Time const&)
{
int godzina2,minuta2,sekunda2;
int licznik=0;
cout<<"Podaj godzine do porownania"<<endl;
cin>>godzina2;
if(godzina2>23||godzina2<0)
{
    while(godzina2>23||godzina2<0)
    {
        cout<<"Podaj poprawna wartosc godzinowa"<<endl;
        cin>>godzina2;
    }
}
if(godzina==godzina2)
    licznik++;
cout<<"Podaj minuty do porownania"<<endl;
cin>>minuta2;
if(minuta2>59|| minuta2<0)
        {
            while(minuta2>59 || minuta2<0)
            cout<<"Podaj poprawna wartosc minutowa"<<endl;
            cin>>minuta2;
        }
if(minuta==minuta2)
    licznik++;
cout<<"Podaj sekundy do porownania"<<endl;
cin>>sekunda2;
if(sekunda2>59 || sekunda2<0)
        {
            while(sekunda2>59 || sekunda2<0)
            cout<<"podaj poprawna wartosc sekundowa"<<endl;
            cin>>sekunda2;
        }
if(sekunda==sekunda2)
    licznik++;
if(licznik==3)
        return true;
else
        return false;
}
bool Time::roznosc(Time const&)
{
int godzina2,minuta2,sekunda2;
int licznik=0;
cout<<"Podaj godzine do porownania"<<endl;
cin>>godzina2;
if(godzina2>23||godzina2<0)
{
    while(godzina2>23||godzina2<0)
    {
        cout<<"Podaj poprawna wartosc godzinowa"<<endl;
        cin>>godzina2;
    }
}
if( godzina != godzina2 )
    licznik++;
cout<<"Podaj minuty do porownania"<<endl;
cin>>minuta2;
if(minuta2>59|| minuta2<0)
        {
            while(minuta2>59 || minuta2<0)
            cout<<"Podaj poprawna wartosc minutowa"<<endl;
            cin>>minuta2;
        }
if(minuta!=minuta2)
    licznik++;
cout<<"Podaj sekundy do porownania"<<endl;
cin>>sekunda2;
if(sekunda2>59 || sekunda2<0)
        {
            while(sekunda2>59 || sekunda2<0)
            cout<<"podaj poprawna wartosc sekundowa"<<endl;
            cin>>sekunda2;
        }
if(sekunda!=sekunda2)
    licznik++;
if(licznik>0)
        return true;
else
        return false;
}
