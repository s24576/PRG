#include <iostream>
#include "time.h"
#include <sstream>
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
string Time::pokaz_czas()
{
    string pokazywanie;
    string a,b,c,znak,zero;
    znak=":";
    zero="0";
    if(godzina<10)
        {
            pokazywanie=pokazywanie+zero;
            //cout<<"0"<<godzina<<":";
            stringstream ss;
            ss<<godzina;
            ss>>a;
            pokazywanie=pokazywanie+a;
            //cout<<pokazywanie<<endl;
        }
    else
        {
            //cout<<godzina<<":";
            stringstream ss;
            ss<<godzina;
            ss>>pokazywanie;
            //cout<<pokazywanie<<endl;
        }
    pokazywanie=pokazywanie+znak;
    if(minuta<10)
        {
        pokazywanie=pokazywanie+zero;
        //cout<<"0"<<minuta<<":";
        stringstream ff;
        ff<<minuta;
        ff>>b;
        pokazywanie=pokazywanie+b;
        //cout<<pokazywanie<<endl;
        }
    else
        {
        //cout<<minuta<<":";
        stringstream ff;
        ff<<minuta;
        ff>>b;
        pokazywanie=pokazywanie+b;
        //cout<<pokazywanie<<endl;
        }
    pokazywanie=pokazywanie+znak;
    if(sekunda<10)
        {
            pokazywanie=pokazywanie+zero;
            //cout<<"0"<<sekunda;
            stringstream gg;
            gg<<sekunda;
            gg>>c;
            pokazywanie=pokazywanie+c;
            //cout<<pokazywanie<<endl;
        }
    else
        {
            //cout<<sekunda;
            stringstream gg;
            gg<<sekunda;
            gg>>c;
            pokazywanie=pokazywanie+c;
            //cout<<pokazywanie<<endl;
        }
    return pokazywanie;
}

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
    //cout<<"Godzina po dodawaniu to: "<<godzina<<":"<<minuta<<":"<<sekunda<<endl;
}
void Time::odejmowanie()
{
    int a,b,c,licznikS,licznikM,ls,lm;
    licznikS=0;
    licznikM=0;
    ls=0;
    lm=0;
    cout<<"Podaj ilosc godzin do odjecia"<<endl;
    cin>>a;
    cout<<"Podaj ilosc minut do odjecia"<<endl;
    cin>>b;
    cout<<"Podaj ilosc sekund do odjecia"<<endl;
    cin>>c;
    if(3600*a+b*60+c>godzina*3600+b*60+sekunda)
        cout<<"blad danych"<<endl;
    else
    sekunda=sekunda-c;
        {
            if(sekunda<0)
            {
                while(sekunda<0)
                {
                    licznikS++;
                    sekunda++;
                }
                if(licznikS%60!=0)
                    {
                        ls=licznikS/60+1;
                        sekunda=ls*60-licznikS;
                    }
                else
                        ls=licznikS/60;
            }
            minuta=minuta-ls-b;
            if(minuta<0)
                while(minuta<0)
            {
                licznikM++;
                minuta++;
            }
            if(licznikM%60!=0)
                {
                    lm=licznikM/60+1;
                    minuta=lm*60-licznikS;
                }
            else
                lm=licznikM/60;
            godzina=godzina-lm-a;
            //cout<<"godzina po odjeciu to: "<<godzina<<":"<<minuta<<":"<<sekunda<<endl;
        }
}
bool Time::porownanie(Time)
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
bool Time::porownanie2(Time)
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
bool Time::rownosc(Time)
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
bool Time::roznosc(Time)
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
float Time::policz_minuty()
{
    float wynik;
    wynik=(sekunda+minuta*60+godzina*3600)/60;
    //cout<<"Ilosc minut to: "<<wynik<<endl;
    return wynik;
}
int Time::policz_sekundy()
{
    int wynik;
    wynik=godzina*3600+minuta*60+sekunda;
    //cout<<"Ilosc sekund to: "<<wynik<<endl;
    return wynik;
}
void Time::pokaz_pr()
{
        switch ( godzina )
    {
        //NOC
        case noc0:
        {
            cout<<"noc"<<endl;
            break;
        }
        case noc1:
        {
            cout<<"noc"<<endl;
            break;
        }
        case noc2:
        {
            cout<<"noc"<<endl;
            break;
        }
        case noc3:
        {
            cout<<"noc"<<endl;
            break;
        }
        //RANO
        case rano0:
        {
            cout<<"rano"<<endl;
            break;
        }
                case rano1:
        {
            cout<<"rano"<<endl;
            break;
        }
        case rano2:
        {
            cout<<"rano"<<endl;
            break;
        }
        case rano3:
        {
            cout<<"rano"<<endl;
            break;
        }
        case rano4:
        {
            cout<<"rano"<<endl;
            break;
        }
        case rano5:
        {
            cout<<"rano"<<endl;
            break;
        }
        case rano6:
        {
            cout<<"rano"<<endl;
            break;
        }
        //DZIEN
        case dzien0:
        {
            cout<<"dzien"<<endl;
            break;
        }
        case dzien1:
        {
            cout<<"dzien"<<endl;
            break;
        }
        case dzien2:
        {
            cout<<"dzien"<<endl;
            break;
        }
        case dzien3:
        {
            cout<<"dzien"<<endl;
            break;
        }
        case dzien4:
        {
            cout<<"dzien"<<endl;
            break;
        }
        case dzien5:
        {
            cout<<"dzien"<<endl;
            break;
        }
        case dzien6:
        {
            cout<<"dzien"<<endl;
            break;
        }

        //WIECZOR
        case wieczor0:
        {
            cout<<"wieczor"<<endl;
            break;
        }
        case wieczor1:
        {
            cout<<"wieczor"<<endl;
            break;
        }
        case wieczor2:
        {
            cout<<"wieczor"<<endl;
            break;
        }
        case wieczor3:
        {
            cout<<"wieczor"<<endl;
            break;
        }
        case wieczor4:
        {
            cout<<"wieczor"<<endl;
            break;
        }
    }
}
void Time::czas_do_polnocy()
{
    int a,b,c,licznika,licznikb,licznikc;
    a=godzina;
    b=minuta;
    c=sekunda;
    licznika=0;
    licznikb=0;
    licznikc=0;
    if(sekunda!=0)
    {
        while(c!=0)
        {
         c++;
         licznikc++;
         c=c%60;
        }
        b++;
    }
    if(minuta!=0)
    {
        while(b!=0)
        {
            b++;
            licznikb++;
            b=b%60;
        }
        a++;
    }
    licznika=24-a;
        cout<<"Do polnocy zostalo: "<< licznika <<" godzin "<< licznikb << " minut "<< licznikc <<" sekund" <<endl;
}
