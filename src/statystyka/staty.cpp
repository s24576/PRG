#include <iostream>
#include <fstream>
#include <string>
#include "staty.h"

using namespace std;

Statystyka::Statystyka()
{
    //ekran wejsciowy
    //a=liga;
    //b=druzyna;
    //c=zawodnik;
    cout<<"siemanko"<<endl;
}
void Statystyka::czysc_ekran()
{
    system("cls");
}
int Statystyka::wczytaj_lige()
{
    fstream ligi;
    string menu1,menu2;
    ligi.open("ligi.txt",ios::in);
    for(int i=0;i<1;i++)
    {
        ligi>>menu1>>menu2;
        cout<<menu1<<" "<<menu2<<endl;
    }
    cin>>liga;
    cout<<liga<<endl;
    /*if(liga <= 0 && liga > 4)
    {
        while(liga <= 0 && liga > 4)
        {
            cout<<"podaj poprawna wartosc"<<endl;
            cin>>liga;
        }
    }*/
    ligi.close();
    return liga;
}

int Statystyka::wczytaj_pl()
{
    fstream premier;
    string d1,d2;
    premier.open("PL.txt",ios::in);
    for(int pl=0; pl<20; ++pl)
    {
        premier>>d1>>d2;
        cout<<d1<<" "<<d2<<endl;
    }
    premier.close();
    cin>>druzyna;
    cout<<druzyna<<endl;
    return druzyna;
}

//1
void Statystyka::wczytaj_mnc()
{
    fstream mnc;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    mnc.open("city.txt",ios::in);
    for(int man_c=0;man_c<11;man_c++)
    {
        mnc>>i_z>>n_z;
        cout<<man_c+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( man_c == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( man_c > 0 && man_c < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( man_c > 4 && man_c < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( man_c == 9 || man_c == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    mnc.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
//2
void Statystyka::wczytaj_mnu()
{
    fstream mnu;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    mnu.open("united.txt",ios::in);
    for(int man_u=0;man_u<11;man_u++)
    {
        mnu>>i_z>>n_z;
        cout<<man_u+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( man_u == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( man_u > 0 && man_u < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( man_u > 4 && man_u < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( man_u == 9 || man_u == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    mnu.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
//3
void Statystyka::wczytaj_lfc()
{
    fstream lfc;
    int ob=0,po=0,na=0;
    string i_z,n_z;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    float sta[11]={0};
    lfc.open("liverpool.txt",ios::in);
    for(int liverpool=0;liverpool<11;liverpool++)
    {
        lfc>>i_z>>n_z;
        cout<<liverpool+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( liverpool == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( liverpool > 0 && liverpool < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( liverpool > 4 && liverpool < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( liverpool == 9 || liverpool == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
        lfc.close();
        //zawodnik=0;
        cout<<zawodnik<<endl;
        while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//4
void Statystyka::wczytaj_cfc()
{
    fstream cfc;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    cfc.open("chelsea.txt",ios::in);
    for(int chelsea=0;chelsea<11;chelsea++)
    {
        cfc>>i_z>>n_z;
        cout<<chelsea+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( chelsea == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( chelsea > 0 && chelsea < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( chelsea > 4 && chelsea < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( chelsea == 9 || chelsea == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    cfc.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
//5
void Statystyka::wczytaj_lei()
{
    fstream lei;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    lei.open("leicester.txt",ios::in);
    for(int leicester=0;leicester<11;leicester++)
    {
        lei>>i_z>>n_z;
        cout<<leicester+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( leicester == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( leicester > 0 && leicester < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( leicester > 4 && leicester < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( leicester == 9 || leicester == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    lei.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//6
void Statystyka::wczytaj_whu()
{
    fstream whu;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    whu.open("whu.txt",ios::in);
    for(int whun=0;whun<11;whun++)
    {
        whu>>i_z>>n_z;
        cout<<whun+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( whun == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( whun > 0 && whun < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( whun > 4 && whun < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( whun == 9 || whun == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    whu.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//7
void Statystyka::wczytaj_tot()
{
    fstream tot;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    tot.open("tottenham.txt",ios::in);
    for(int tottenham=0;tottenham<11;tottenham++)
    {
        tot>>i_z>>n_z;
        cout<<tottenham+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( tottenham == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( tottenham > 0 && tottenham < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( tottenham > 4 && tottenham < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( tottenham == 9 || tottenham == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    tot.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//8
void Statystyka::wczytaj_ars()
{
    fstream ars;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    ars.open("arsenal.txt",ios::in);
    for(int arsenal=0;arsenal<11;arsenal++)
    {
        ars>>i_z>>n_z;
        cout<<arsenal+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( arsenal == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( arsenal > 0 && arsenal < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( arsenal > 4 && arsenal < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( arsenal == 9 || arsenal == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    ars.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//9
void Statystyka::wczytaj_leu()
{
    fstream leu;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    leu.open("leeds.txt",ios::in);
    for(int leeds=0;leeds<11;leeds++)
    {
        leu>>i_z>>n_z;
        cout<<leeds+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( leeds == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( leeds > 0 && leeds < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( leeds > 4 && leeds < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( leeds == 9 || leeds == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    leu.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//10
void Statystyka::wczytaj_eve()
{
    fstream eve;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    eve.open("everton.txt",ios::in);
    for(int everton=0;everton<11;everton++)
    {
        eve>>i_z>>n_z;
        cout<<everton+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( everton == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( everton > 0 && everton < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( everton > 4 && everton < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( everton == 9 || everton == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    eve.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//11
void Statystyka::wczytaj_asv()
{
    fstream asv;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    asv.open("villa.txt",ios::in);
    for(int villa=0;villa<11;villa++)
    {
        asv>>i_z>>n_z;
        cout<<villa+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( villa == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( villa > 0 && villa < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( villa > 4 && villa < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( villa == 9 || villa == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    asv.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//12
void Statystyka::wczytaj_ncl()
{
    fstream ncl;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    ncl.open("newcastle.txt",ios::in);
    for(int newcastle=0;newcastle<11;newcastle++)
    {
        ncl>>i_z>>n_z;
        cout<<newcastle+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( newcastle == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( newcastle > 0 && newcastle < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( newcastle > 4 && newcastle < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( newcastle == 9 || newcastle == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    ncl.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//13
void Statystyka::wczytaj_wov()
{
    fstream wov;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    wov.open("wolverhampton.txt",ios::in);
    for(int wolverhampton=0;wolverhampton<11;wolverhampton++)
    {
        wov>>i_z>>n_z;
        cout<<wolverhampton+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( wolverhampton == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( wolverhampton > 0 && wolverhampton < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( wolverhampton > 4 && wolverhampton < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( wolverhampton == 9 || wolverhampton == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    wov.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//14
void Statystyka::wczytaj_cpl()
{
    fstream cpl;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    cpl.open("crystal.txt",ios::in);
    for(int crystal=0;crystal<11;crystal++)
    {
        cpl>>i_z>>n_z;
        cout<<crystal+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( crystal == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( crystal > 0 && crystal < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( crystal > 4 && crystal < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( crystal == 9 || crystal == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    cpl.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//15
void Statystyka::wczytaj_sth()
{
    fstream sth;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    sth.open("southampton.txt",ios::in);
    for(int southampton=0;southampton<11;southampton++)
    {
        sth>>i_z>>n_z;
        cout<<southampton+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( southampton == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( southampton > 0 && southampton < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( southampton > 4 && southampton < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( southampton == 9 || southampton == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    sth.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//16
void Statystyka::wczytaj_bri()
{
    fstream bri;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    bri.open("brighton.txt",ios::in);
    for(int brighton=0;brighton<11;brighton++)
    {
        bri>>i_z>>n_z;
        cout<<brighton+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( brighton == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( brighton > 0 && brighton < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( brighton > 4 && brighton < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( brighton == 9 || brighton == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    bri.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//17
void Statystyka::wczytaj_bur()
{
    fstream bur;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    bur.open("burnley.txt",ios::in);
    for(int burnley=0;burnley<11;burnley++)
    {
        bur>>i_z>>n_z;
        cout<<burnley+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( burnley == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( burnley > 0 && burnley < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( burnley > 4 && burnley < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( burnley == 9 || burnley == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    bur.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//18
void Statystyka::wczytaj_ful()
{
    fstream ful;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    ful.open("fulham.txt",ios::in);
    for(int fulham=0;fulham<11;fulham++)
    {
        ful>>i_z>>n_z;
        cout<<fulham+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( fulham == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( fulham > 0 && fulham < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( fulham > 4 && fulham < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( fulham == 9 || fulham == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    ful.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//19
void Statystyka::wczytaj_wba()
{
    fstream wba;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    wba.open("wba.txt",ios::in);
    for(int brom=0;brom<11;brom++)
    {
        wba>>i_z>>n_z;
        cout<<brom+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( brom == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( brom > 0 && brom < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( brom > 4 && brom < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( brom == 9 || brom == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    wba.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
//20
void Statystyka::wczytaj_shu()
{
    fstream shu;
    string i_z,n_z;
    int ob=0,po=0,na=0;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    shu.open("sheffield.txt",ios::in);
    for(int sheffield=0;sheffield<11;sheffield++)
    {
        shu>>i_z>>n_z;
        cout<<sheffield+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( sheffield == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( sheffield > 0 && sheffield < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( sheffield > 4 && sheffield < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( sheffield == 9 || sheffield == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    shu.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
        zawodnik=0;
}
