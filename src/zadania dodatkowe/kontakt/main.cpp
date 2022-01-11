#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Kontakt
{
    int numer_telefonu,wykonane_polaczenia;
    string nazwisko;
};
int polecenie()
{
    int a;
    cout<<"podaj polecenie do wykonania"<<endl;
    cout<<"0 -> wyjdz z kontaktow"<<endl;
    cout<<"1 -> wypisz wszystkie kontakty"<<endl;
    cout<<"2 -> wyszukaj kontakt po numerze telefonu"<<endl;
    cout<<"3 -> dodaj kontakt"<<endl;
    cout<<"4 -> usun kontakt"<<endl;
    cout<<"5 -> polacz z kontaktem"<<endl;
    cin>>a;
    if(a<0||a>5)
    {
        while(a<0||a>5)
        {
            cout<<"bledne polecenie"<<endl;
            cout<<"podaj poprawne polecenie do wykonania"<<endl;
            cin>>a;
        }
    }
    return a;
}

bool numer_istnieje(vector <Kontakt> kontakty, int numer)
{
    int d=kontakty.size(),licznik=0;
    Kontakt test;
    for(int i=0;i<d;i++)
    {
        test=kontakty[i];
        if(test.numer_telefonu==numer)
            licznik++;
    }
    if(licznik==0)
        return false;
    else
        return true;
}
bool nazwisko_istnieje(vector <Kontakt> kontakty, string nazwisko)
{
    int d=kontakty.size(),licznik=0;
    Kontakt test;
    for(int i=0;i<d;i++)
    {
        test=kontakty[i];
        if(test.nazwisko==nazwisko)
            licznik++;
    }
    if(licznik==0)
        return false;
    else
        return true;
}
void wypisz_kontakty(vector <Kontakt> kontakty)
{
    int d=kontakty.size();
    if(d>0)
    {
        Kontakt test;
        for(int i=0;i<d;i++)
        {
            test=kontakty[i];
            cout<<"nazwisko: "<<test.nazwisko<<endl;
            cout<<"numer telefonu: "<<test.numer_telefonu<<endl;
            cout<<"liczba polaczen: "<<test.wykonane_polaczenia<<endl;
            cout<<endl;
        }
    }
    else
        cout<<"brak kontaktow w ksiazce"<<endl;
}
Kontakt dodaj_kontakt(vector <Kontakt> kontkaty)
{
    Kontakt test;
    cout<<"podaj nazwisko"<<endl;
    cin>>test.nazwisko;
    if(nazwisko_istnieje(kontkaty,test.nazwisko)==1)
    {
        while(nazwisko_istnieje(kontkaty,test.nazwisko)==1)
            {
                cout<<"kontakt o podanym nazwisku istnieje"<<endl;
                cout<<"podaj nazwisko"<<endl;
                cin>>test.nazwisko;
            }
    }
    cout<<"podaj numer"<<endl;
    cin>>test.numer_telefonu;
    if(numer_istnieje(kontkaty,test.numer_telefonu)==1)
    {
        while(numer_istnieje(kontkaty,test.numer_telefonu)==1)
            {
                cout<<"kontakt o podanym numerze istnieje"<<endl;
                cout<<"podaj numer"<<endl;
                cin>>test.numer_telefonu;
            }
    }
    test.wykonane_polaczenia=0;
    return test;
}
void wyszukaj_numer(vector <Kontakt> kontakty)
{
    int num;
    cout<<"podaj numer do wyszukania"<<endl;
    cin>>num;
    if(numer_istnieje(kontakty,num)==1)
    {
        int d=kontakty.size();
        Kontakt test;
        for(int i=0;i<d;i++)
        {
            test=kontakty[i];
            if(test.numer_telefonu==num)
            {
                cout<<"dane szukanego kontaktu: "<<endl;
                cout<<" nazwisko: "<<test.nazwisko<<endl;
                cout<<" numer telefonu: "<<test.numer_telefonu<<endl;
                cout<<" liczba polaczen: "<<test.wykonane_polaczenia<<endl;
                cout<<endl;
            }
        }
    }
    else
        cout<<"brak kontaktu o podanym numerze"<<endl;
}
vector <Kontakt> usun_numer(vector <Kontakt> kontakty)
{
    int num;
    cout<<"podaj numer do wyszukania"<<endl;
    cin>>num;
    if(numer_istnieje(kontakty,num)==1)
    {
        int d=kontakty.size();
        Kontakt test;
        for(int i=0;i<d;i++)
        {
            test=kontakty[i];
            if(num==test.numer_telefonu)
                kontakty.erase(kontakty.begin()+i);
        }
        cout<<"usunieto kontakt o podanym numerze"<<endl;
    }
    else
        cout<<"brak kontaktu o podanym numerze"<<endl;
    return kontakty;
}
vector <Kontakt> polacz(vector <Kontakt> kontakty)
{
    string nazw;
    cout<<"podaj nazwisko do polaczenia"<<endl;
    cin>>nazw;
    if(nazwisko_istnieje(kontakty,nazw)==1)
    {
        int d=kontakty.size();
        Kontakt test;
        for(int i=0;i<d;i++)
        {
            cout<<"laczenie..."<<endl;
            test=kontakty[i];
            if(nazw==test.nazwisko)
                kontakty[i].wykonane_polaczenia++;
        }
    }
    else
        cout<<"brak kontaktu o podanej nazwie"<<endl;

    return kontakty;
}
int main()
{
    int a;
    vector < Kontakt > kontakty;
    Kontakt test;
    do
    {
        a=polecenie();

        if(a==1)
            wypisz_kontakty(kontakty);

        else if(a==2)
            wyszukaj_numer(kontakty);

        else if(a==3)
        {
            test=dodaj_kontakt(kontakty);
            kontakty.push_back(test);
        }

        else if(a==4)
            kontakty=usun_numer(kontakty);

        else if(a==5)
            kontakty=polacz(kontakty);
    }
    while(a!=0);
    return 0;
}
