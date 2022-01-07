#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "staty.h"

using namespace std;

void Uniwersalne::czysc_ekran()
{
    system("cls");
}
int Uniwersalne::wczytaj_lige()
{
    fstream ligi;
    string menu1,menu2;
    ligi.open("Aligi.txt",ios::in);

    cout<<"Aby wybrac lige wpisz poprzedzajacy ja numer"<<endl;
    cout<<endl;
    for(int i=0;i<4;i++)
    {
        ligi>>menu1>>menu2;
        cout<<i+1<<". "<<menu1<<" "<<menu2<<endl;
    }

    cin>>liga;
    cout<<liga<<endl;
    ligi.close();
    czysc_ekran();
    return liga;
}
void Uniwersalne::wyswietl_druzyne(string imiona[11],string nazwiska[11])
{
    for(int i=0;i<11;i++)
    {
        cout<<i+1<<". "<<imiona[i]<<" "<<nazwiska[i]<<endl;
    }
    cout<<endl;
}
string Uniwersalne::ustal_pozycje(int zawodnik)
{
    if(zawodnik==1)
        return "bramkarz";
    else if(zawodnik>=2&&zawodnik<=5)
        return "obronca";
    else if(zawodnik>=6&&zawodnik<=9)
        return "pomocnik";
    else
        return "napastnik";
}
void Uniwersalne::wybierz_funkcje()
{
    cout<<"Wybierz z ktorej funkcji programu chcesz skorzystac"<<endl;
    cout<<"b -> baza danych ze statystykami"<<endl;
    cout<<"w -> wyszukiwarka"<<endl;
    cout<<"q -> mini-quiz"<<endl;
    cout<<"a -> wyjscie z programu"<<endl;
    cin>>funkcja;
    if(funkcja!="b"&&funkcja!="w"&&funkcja!="q"&&funkcja!="a")
    {
        while(funkcja!="b"&&funkcja!="w"&&funkcja!="q"&&funkcja!="a")
        {
            cout<<"Podano bledna funkcje"<<endl;
            cout<<"Wybierz z ktorej funkcji programu chcesz skorzystac"<<endl;
            cout<<"b -> baza danych ze statystykami"<<endl;
            cout<<"w -> wyszukiwarka zawodnikow"<<endl;
            cout<<"q -> mini-quiz"<<endl;
            cout<<"a -> wyjscie z programu"<<endl;
            cin>>funkcja;
        }
    }
    czysc_ekran();
}
string Uniwersalne::wybierz_format()
{
    cout<<"wybierz format przedstawiania statystyk"<<endl;
    cout<<"p -> pelne"<<endl;
    cout<<"k -> kluczowe dla pozycji zawodnika"<<endl;
    cout<<"o -> tylko podstawowe"<<endl;
    cin>>format;

    if(format!="p" && format!="k" && format!="o")
    {
        while(format!="p" && format!="k" && format!="o")
        {
            cout<<"podano niepoprawny format"<<endl;
            cout<<"wybierz format przedstawiania statystyk"<<endl;
            cout<<"p -> pelne"<<endl;
            cout<<"k -> kluczowe dla pozycji zawodnika"<<endl;
            cout<<"o -> tylko podstawowe dla wszystkich takie same"<<endl;
            cin>>format;
        }
    }
    czysc_ekran();
    return format;
}
void Uniwersalne::wyswietl_nazwe_ligi(string nazwa_ligi)
{
    cout<<"Wybrano: "<<nazwa_ligi<<endl;
    cout<<"Aby dokonac wyboru druzyny wpisz numer ja poprzedzajacy"<<endl;
    cout<<endl;
}
void Uniwersalne::wyswietl_nazwe_druzyny(string nazwa_druzyny)
{
    cout<<"Wybrano: "<<nazwa_druzyny<<endl;
    cout<<endl;
    cout<<endl;
}
void Uniwersalne::pokaz_statystyki_bramkarza(string Sbramkarz[63],string format)
{
    if(format=="p")
    {
        //mecze
        cout<<"Ilosc rozegranych meczow: "<<Sbramkarz[0]<<endl;
        cout<<"Od pierwszej minuty: "<<Sbramkarz[1]<<endl;
        cout<<"Ilosc minut na mecz: "<<Sbramkarz[2]<<endl;
        cout<<"Ilosc nominacji do druzyny tygodnia: "<<Sbramkarz[3]<<endl;
        cout<<endl;

        //interwencje
        cout<<"Wpuszczone bramki na mecz: "<<Sbramkarz[4]<<endl;
        cout<<"Obronione karne: "<<Sbramkarz[5]<<endl;
        cout<<"Ilosc interwencji na mecz: "<<Sbramkarz[6]<<endl;
        cout<<"Udane wyjscia na mecz: "<<Sbramkarz[7]<<endl;
        cout<<"Suma wpuszczonych bramek: "<<Sbramkarz[8]<<endl;
        cout<<"Wpuszczone bramki po strzalach z / spoza pola karnego: "<<Sbramkarz[9]<<" / "<<Sbramkarz[10]<<endl;
        cout<<"Suma interwencji: "<<Sbramkarz[11]<<endl;
        cout<<"Interwencje po strzalach z / spoza pola karnego: "<<Sbramkarz[12]<<" / "<<Sbramkarz[13]<<endl;
        //??? co to jest po angielsku saves caught ???
        cout<<"Ilosc strzalow zlapanych z powietrza: "<<Sbramkarz[14]<<endl;
        cout<<"Parady bramkarskie: "<<Sbramkarz[15]<<endl;
        cout<<endl;

        //atak
        cout<<"Strzelone bramki: "<<Sbramkarz[16]<<endl;
        cout<<"Czestotliwosc trafien: "<<Sbramkarz[17]<<endl;
        cout<<"Ilosc bramek na mecz: "<<Sbramkarz[18]<<endl;
        cout<<"Ilosc strzalow / celnych na mecz: "<<Sbramkarz[19]<<" / "<<Sbramkarz[20]<<endl;
        cout<<"Zmarnowane okazje: "<<Sbramkarz[21]<<endl;
        cout<<"Skutecznosc strzalow: "<<Sbramkarz[22]<<endl;
        cout<<"Wykorzystane karne / skutecznosc: "<<Sbramkarz[23]<<" / "<<Sbramkarz[24]<<endl;
        cout<<"Bramki z rzutow wolnych / skutecznosc: "<<Sbramkarz[25]<<" / "<<Sbramkarz[26]<<endl;
        cout<<"Bramki z / spoza pola karnego: "<<Sbramkarz[27]<<" / "<<Sbramkarz[28]<<endl;
        cout<<"Bramki strzelone glowa / lewa noga / prawa noga: "<<Sbramkarz[29]<<" / "<<Sbramkarz[30]<<" / "<<Sbramkarz[31]<<endl;
        cout<<"Wywalczone karne: "<<Sbramkarz[32]<<endl;
        cout<<endl;

        //podania
        cout<<"Asysty: "<<Sbramkarz[33]<<endl;
        cout<<"Srednia ilosc kontaktow z pilka na mecz: "<<Sbramkarz[34]<<endl;
        cout<<"Stworzone okazje: "<<Sbramkarz[35]<<endl;
        cout<<"Kluczowe podania na mecz: "<<Sbramkarz[36]<<endl;
        cout<<"Srednia ilosc celnych podan na mecz: "<<Sbramkarz[37]<<endl;
        cout<<"Skutecznosc podan na wlasnej / na polowie przeciwnika: "<<Sbramkarz[38]<<" / "<<Sbramkarz[39]<<endl;
        cout<<"Skutecznosc dlugich podan / crossow / dosrodkowan: "<<Sbramkarz[40]<<" / "<<Sbramkarz[41]<<" / "<<Sbramkarz[42]<<endl;
        cout<<endl;

        //obrona
        cout<<"Czyste konta: "<<Sbramkarz[43]<<endl;
        cout<<"Srednia ilosc przechwytow na mecz: "<<Sbramkarz[44]<<endl;
        cout<<"Srednia ilosc wykonywanych wslizgow na mecz: "<<Sbramkarz[45]<<endl;
        cout<<"Srednia ilosc odzyskanych posiadan na mecz: "<<Sbramkarz[46]<<endl;
        cout<<"Srednia ilosc przegranych pojedynkow dryblerskich na mecz: "<<Sbramkarz[47]<<endl;
        cout<<"Srednia ilosc interwencji na mecz: "<<Sbramkarz[48]<<endl;
        //pominiecie przez zbugowane pole
        cout<<"Ilosc bledow zakonczonych bramka: "<<Sbramkarz[50]<<endl;
        cout<<"Ilosc sprokurowanych karnych: "<<Sbramkarz[51]<<endl;
        cout<<endl;

        //reszta
        cout<<"Udane dryblingi na mecz: "<<Sbramkarz[52]<<endl;
        cout<<"Wygrane pojedynki / powietrzne / suma na mecz: "<<Sbramkarz[54]<<" / "<<Sbramkarz[55]<<" / "<<Sbramkarz[53]<<endl;
        cout<<"Srednia ilosc utraconych posiadan na mecz: "<<Sbramkarz[56]<<endl;
        cout<<"Srednia ilosc fauli popelnionych / wymuszonych na mecz: "<<Sbramkarz[57]<<" / "<<Sbramkarz[58]<<endl;
        cout<<"Srednia ilosc spalonych na mecz: "<<Sbramkarz[59]<<endl;
        cout<<endl;

        //kartki
        cout<<"Ilosc otrzymanych zoltych kartek w sezonie: "<<Sbramkarz[60]<<endl;
        cout<<"Ilosc otrzymanych po 2 zoltych / bezposrednich czerwonych kartek: "<<Sbramkarz[61]<<" / "<<Sbramkarz[62]<<endl;
        cout<<endl;
    }

    else if(format=="k")
    {
        cout<<"Ilosc rozegranych meczow: "<<Sbramkarz[0]<<endl;
        cout<<"Od pierwszej minuty: "<<Sbramkarz[1]<<endl;
        cout<<endl;

        cout<<"Czyste konta: "<<Sbramkarz[43]<<endl;
        cout<<"Wpuszczone bramki na mecz: "<<Sbramkarz[4]<<endl;
        cout<<"Obronione karne: "<<Sbramkarz[5]<<endl;
        cout<<"Ilosc interwencji na mecz: "<<Sbramkarz[6]<<endl;
        cout<<"Udane wyjscia na mecz: "<<Sbramkarz[7]<<endl;
        cout<<"Suma wpuszczonych bramek: "<<Sbramkarz[8]<<endl;
        cout<<"Wpuszczone bramki po strzalach z / spoza pola karnego: "<<Sbramkarz[9]<<" / "<<Sbramkarz[10]<<endl;
        cout<<"Suma interwencji: "<<Sbramkarz[11]<<endl;
        cout<<"Interwencje po strzalach z / spoza pola karnego: "<<Sbramkarz[12]<<" / "<<Sbramkarz[13]<<endl;
        cout<<"Ilosc strzalow zlapanych z powietrza: "<<Sbramkarz[14]<<endl;
        cout<<"Parady bramkarskie: "<<Sbramkarz[15]<<endl;
        cout<<endl;

        cout<<"Ilosc otrzymanych zoltych kartek w sezonie: "<<Sbramkarz[60]<<endl;
        cout<<"Ilosc otrzymanych po 2 zoltych / bezposrednich czerwonych kartek: "<<Sbramkarz[61]<<" / "<<Sbramkarz[62]<<endl;
        cout<<endl;
    }

    else if(format=="o")
    {
        cout<<"Ilosc rozegranych meczow: "<<Sbramkarz[0]<<endl;
        cout<<"Czyste konta: "<<Sbramkarz[43]<<endl;
        cout<<"Wpuszczone bramki na mecz: "<<Sbramkarz[4]<<endl;
        cout<<"Suma interwencji: "<<Sbramkarz[11]<<endl;
        cout<<endl;
    }
}
void Uniwersalne::pokaz_statystyki_obroncy(string Sobroncy[4][51], string format, int num_z)
{
    if(format=="p")
    {
        //mecze
        cout<<"Ilosc rozegranych meczow: "<<Sobroncy[num_z][0]<<endl;
        cout<<"Od pierwszej minuty: "<<Sobroncy[num_z][1]<<endl;
        cout<<"Ilosc minut na mecz: "<<Sobroncy[num_z][2]<<endl;
        cout<<"Ilosc nominacji do druzyny tygodnia: "<<Sobroncy[num_z][3]<<endl;
        cout<<endl;

        //atak
        cout<<"Strzelone bramki: "<<Sobroncy[num_z][4]<<endl;
        cout<<"Czestotliwosc trafien: "<<Sobroncy[num_z][5]<<endl;
        cout<<"Ilosc bramek na mecz: "<<Sobroncy[num_z][6]<<endl;
        cout<<"Ilosc strzalow / celnych na mecz: "<<Sobroncy[num_z][7]<<" / "<<Sobroncy[num_z][8]<<endl;
        cout<<"Zmarnowane okazje: "<<Sobroncy[num_z][9]<<endl;
        cout<<"Skutecznosc strzalow: "<<Sobroncy[num_z][10]<<endl;
        cout<<"Wykorzystane karne / skutecznosc: "<<Sobroncy[num_z][11]<<" / "<<Sobroncy[num_z][12]<<endl;
        cout<<"Bramki z rzutow wolnych / skutecznosc: "<<Sobroncy[num_z][13]<<" / "<<Sobroncy[num_z][14]<<endl;
        cout<<"Bramki z / spoza pola karnego: "<<Sobroncy[num_z][15]<<" / "<<Sobroncy[num_z][16]<<endl;
        cout<<"Bramki strzelone glowa / lewa noga / prawa noga: "<<Sobroncy[num_z][17]<<" / "<<Sobroncy[num_z][18]<<" / "<<Sobroncy[num_z][19]<<endl;
        cout<<"Wywalczone karne: "<<Sobroncy[num_z][20]<<endl;
        cout<<endl;

        //podania
        cout<<"Asysty: "<<Sobroncy[num_z][21]<<endl;
        cout<<"Srednia ilosc kontaktow z pilka na mecz: "<<Sobroncy[num_z][22]<<endl;
        cout<<"Stworzone okazje: "<<Sobroncy[num_z][23]<<endl;
        cout<<"Kluczowe podania na mecz: "<<Sobroncy[num_z][24]<<endl;
        cout<<"Srednia ilosc celnych podan na mecz: "<<Sobroncy[num_z][25]<<endl;
        cout<<"Skutecznosc podan na wlasnej / na polowie przeciwnika: "<<Sobroncy[num_z][26]<<" / "<<Sobroncy[num_z][27]<<endl;
        cout<<"Skutecznosc dlugich podan / crossow / dosrodkowan: "<<Sobroncy[num_z][28]<<" / "<<Sobroncy[num_z][29]<<" / "<<Sobroncy[num_z][30]<<endl;
        cout<<endl;

        //obrona
        cout<<"Czyste konta: "<<Sobroncy[num_z][31]<<endl;
        cout<<"Srednia ilosc przechwytow na mecz: "<<Sobroncy[num_z][32]<<endl;
        cout<<"Srednia ilosc wykonywanych wslizgow na mecz: "<<Sobroncy[num_z][33]<<endl;
        cout<<"Srednia ilosc odzyskanych posiadan na mecz: "<<Sobroncy[num_z][34]<<endl;
        cout<<"Srednia ilosc przegranych pojedynkow dryblerskich na mecz: "<<Sobroncy[num_z][35]<<endl;
        cout<<"Srednia ilosc interwencji na mecz: "<<Sobroncy[num_z][36]<<endl;
        //pominiecie przez zbugowane pole
        cout<<"Ilosc bledow zakonczonych bramka: "<<Sobroncy[num_z][38]<<endl;
        cout<<"Ilosc sprokurowanych karnych: "<<Sobroncy[num_z][39]<<endl;
        cout<<endl;

        //reszta
        cout<<"Udane dryblingi na mecz: "<<Sobroncy[num_z][40]<<endl;
        cout<<"Wygrane pojedynki / powietrzne / suma na mecz: "<<Sobroncy[num_z][42]<<" / "<<Sobroncy[num_z][43]<<" / "<<Sobroncy[num_z][41]<<endl;
        cout<<"Srednia ilosc utraconych posiadan na mecz: "<<Sobroncy[num_z][44]<<endl;
        cout<<"Srednia ilosc fauli popelnionych / wymuszonych na mecz: "<<Sobroncy[num_z][45]<<" / "<<Sobroncy[num_z][46]<<endl;
        cout<<"Srednia ilosc spalonych na mecz: "<<Sobroncy[num_z][47]<<endl;
        cout<<endl;

        //kartki
        cout<<"Ilosc otrzymanych zoltych kartek w sezonie: "<<Sobroncy[num_z][48]<<endl;
        cout<<"Ilosc otrzymanych po 2 zoltych / bezposrednich czerwonych kartek: "<<Sobroncy[num_z][49]<<" / "<<Sobroncy[num_z][50]<<endl;
        cout<<endl;
    }

    else if(format=="k")
    {
        cout<<"Ilosc rozegranych meczow: "<<Sobroncy[num_z][0]<<endl;
        cout<<"Od pierwszej minuty: "<<Sobroncy[num_z][1]<<endl;
        cout<<endl;

        cout<<"Strzelone bramki: "<<Sobroncy[num_z][4]<<endl;
        cout<<"Asysty: "<<Sobroncy[num_z][21]<<endl;
        cout<<endl;

        cout<<"Czyste konta: "<<Sobroncy[num_z][31]<<endl;
        cout<<"Srednia ilosc przechwytow na mecz: "<<Sobroncy[num_z][32]<<endl;
        cout<<"Srednia ilosc wykonywanych wslizgow na mecz: "<<Sobroncy[num_z][33]<<endl;
        cout<<"Srednia ilosc odzyskanych posiadan na mecz: "<<Sobroncy[num_z][34]<<endl;
        cout<<"Srednia ilosc przegranych pojedynkow dryblerskich na mecz: "<<Sobroncy[num_z][35]<<endl;
        cout<<"Srednia ilosc interwencji na mecz: "<<Sobroncy[num_z][36]<<endl;
        cout<<"Ilosc bledow zakonczonych bramka: "<<Sobroncy[num_z][38]<<endl;
        cout<<"Ilosc sprokurowanych karnych: "<<Sobroncy[num_z][39]<<endl;
        cout<<"Srednia ilosc fauli popelnionych / wymuszonych na mecz: "<<Sobroncy[num_z][45]<<" / "<<Sobroncy[num_z][46]<<endl;
        cout<<endl;

        cout<<"Ilosc otrzymanych zoltych kartek w sezonie: "<<Sobroncy[num_z][48]<<endl;
        cout<<"Ilosc otrzymanych po 2 zoltych / bezposrednich czerwonych kartek: "<<Sobroncy[num_z][49]<<" / "<<Sobroncy[num_z][50]<<endl;
        cout<<endl;
    }
    else if(format=="o")
    {
        cout<<"Ilosc rozegranych meczow: "<<Sobroncy[num_z][0]<<endl;
        cout<<"Czyste konta: "<<Sobroncy[num_z][31]<<endl;
        cout<<"Srednia ilosc odzyskanych posiadan na mecz: "<<Sobroncy[num_z][34]<<endl;
        cout<<"Ilosc otrzymanych zoltych kartek w sezonie: "<<Sobroncy[num_z][48]<<endl;
        cout<<"Ilosc otrzymanych po 2 zoltych / bezposrednich czerwonych kartek: "<<Sobroncy[num_z][49]<<" / "<<Sobroncy[num_z][50]<<endl;
        cout<<endl;
    }
}
void Uniwersalne::pokaz_statystyki_ofensywnego(string Sofensywnego[6][50],string format, int num_z)
{
    if(format=="p")
    {
        //mecze
        cout<<"Ilosc rozegranych meczow: "<<Sofensywnego[num_z][0]<<endl;
        cout<<"Od pierwszej minuty: "<<Sofensywnego[num_z][1]<<endl;
        cout<<"Ilosc minut na mecz: "<<Sofensywnego[num_z][2]<<endl;
        cout<<"Ilosc nominacji do druzyny tygodnia: "<<Sofensywnego[num_z][3]<<endl;
        cout<<endl;

        //atak
        cout<<"Strzelone bramki: "<<Sofensywnego[num_z][4]<<endl;
        cout<<"Czestotliwosc trafien: "<<Sofensywnego[num_z][5]<<endl;
        cout<<"Ilosc bramek na mecz: "<<Sofensywnego[num_z][6]<<endl;
        cout<<"Ilosc strzalow / celnych na mecz: "<<Sofensywnego[num_z][7]<<" / "<<Sofensywnego[num_z][8]<<endl;
        cout<<"Zmarnowane okazje: "<<Sofensywnego[num_z][9]<<endl;
        cout<<"Skutecznosc strzalow: "<<Sofensywnego[num_z][10]<<endl;
        cout<<"Wykorzystane karne / skutecznosc: "<<Sofensywnego[num_z][11]<<" / "<<Sofensywnego[num_z][12]<<endl;
        cout<<"Bramki z rzutow wolnych / skutecznosc: "<<Sofensywnego[num_z][13]<<" / "<<Sofensywnego[num_z][14]<<endl;
        cout<<"Bramki z / spoza pola karnego: "<<Sofensywnego[num_z][15]<<" / "<<Sofensywnego[num_z][16]<<endl;
        cout<<"Bramki strzelone glowa / lewa noga / prawa noga: "<<Sofensywnego[num_z][17]<<" / "<<Sofensywnego[num_z][18]<<" / "<<Sofensywnego[num_z][19]<<endl;
        cout<<"Wywalczone karne: "<<Sofensywnego[num_z][20]<<endl;
        cout<<endl;

        //podania
        cout<<"Asysty: "<<Sofensywnego[num_z][21]<<endl;
        cout<<"Srednia ilosc kontaktow z pilka na mecz: "<<Sofensywnego[num_z][22]<<endl;
        cout<<"Stworzone okazje: "<<Sofensywnego[num_z][23]<<endl;
        cout<<"Kluczowe podania na mecz: "<<Sofensywnego[num_z][24]<<endl;
        cout<<"Srednia ilosc celnych podan na mecz: "<<Sofensywnego[num_z][25]<<endl;
        cout<<"Skutecznosc podan na wlasnej / na polowie przeciwnika: "<<Sofensywnego[num_z][26]<<" / "<<Sofensywnego[num_z][27]<<endl;
        cout<<"Skutecznosc dlugich podan / crossow / dosrodkowan: "<<Sofensywnego[num_z][28]<<" / "<<Sofensywnego[num_z][29]<<" / "<<Sofensywnego[num_z][30]<<endl;
        cout<<endl;

        //obrona
        cout<<"Srednia ilosc przechwytow na mecz: "<<Sofensywnego[num_z][31]<<endl;
        cout<<"Srednia ilosc wykonywanych wslizgow na mecz: "<<Sofensywnego[num_z][32]<<endl;
        cout<<"Srednia ilosc odzyskanych posiadan na mecz: "<<Sofensywnego[num_z][33]<<endl;
        cout<<"Srednia ilosc przegranych pojedynkow dryblerskich na mecz: "<<Sofensywnego[num_z][34]<<endl;
        cout<<"Srednia ilosc interwencji na mecz: "<<Sofensywnego[num_z][35]<<endl;
        //pominiecie przez zbugowane pole
        cout<<"Ilosc bledow zakonczonych bramka: "<<Sofensywnego[num_z][37]<<endl;
        cout<<"Ilosc sprokurowanych karnych: "<<Sofensywnego[num_z][38]<<endl;
        cout<<endl;

        //reszta
        cout<<"Udane dryblingi na mecz: "<<Sofensywnego[num_z][39]<<endl;
        cout<<"Wygrane pojedynki / powietrzne / suma na mecz: "<<Sofensywnego[num_z][41]<<" / "<<Sofensywnego[num_z][42]<<" / "<<Sofensywnego[num_z][40]<<endl;
        cout<<"Srednia ilosc utraconych posiadan na mecz: "<<Sofensywnego[num_z][43]<<endl;
        cout<<"Srednia ilosc fauli popelnionych / wymuszonych na mecz: "<<Sofensywnego[num_z][44]<<" / "<<Sofensywnego[num_z][45]<<endl;
        cout<<"Srednia ilosc spalonych na mecz: "<<Sofensywnego[num_z][46]<<endl;
        cout<<endl;

        //kartki
        cout<<"Ilosc otrzymanych zoltych kartek w sezonie: "<<Sofensywnego[num_z][47]<<endl;
        cout<<"Ilosc otrzymanych po 2 zoltych / bezposrednich czerwonych kartek: "<<Sofensywnego[num_z][48]<<" / "<<Sofensywnego[num_z][49]<<endl;
        cout<<endl;
    }

    else if(format=="k")
    {
        //kluczowe statystyki dla napastnikow
        if(num_z==4 || num_z==5)
        {
            cout<<"Ilosc rozegranych meczow: "<<Sofensywnego[num_z][0]<<endl;
            cout<<"Od pierwszej minuty: "<<Sofensywnego[num_z][1]<<endl;
            cout<<endl;

            cout<<"Strzelone bramki: "<<Sofensywnego[num_z][4]<<endl;
            cout<<"Czestotliwosc trafien: "<<Sofensywnego[num_z][5]<<endl;
            cout<<"Ilosc bramek na mecz: "<<Sofensywnego[num_z][6]<<endl;
            cout<<"Ilosc strzalow / celnych na mecz: "<<Sofensywnego[num_z][7]<<" / "<<Sofensywnego[num_z][8]<<endl;
            cout<<"Zmarnowane okazje: "<<Sofensywnego[num_z][9]<<endl;
            cout<<"Skutecznosc strzalow: "<<Sofensywnego[num_z][10]<<endl;
            cout<<"Wykorzystane karne / skutecznosc: "<<Sofensywnego[num_z][11]<<" / "<<Sofensywnego[num_z][12]<<endl;
            cout<<"Bramki z rzutow wolnych / skutecznosc: "<<Sofensywnego[num_z][13]<<" / "<<Sofensywnego[num_z][14]<<endl;
            cout<<"Bramki z / spoza pola karnego: "<<Sofensywnego[num_z][15]<<" / "<<Sofensywnego[num_z][16]<<endl;
            cout<<"Bramki strzelone glowa / lewa noga / prawa noga: "<<Sofensywnego[num_z][17]<<" / "<<Sofensywnego[num_z][18]<<" / "<<Sofensywnego[num_z][19]<<endl;
            cout<<"Wywalczone karne: "<<Sofensywnego[num_z][20]<<endl;
            cout<<endl;

            cout<<"Asysty: "<<Sofensywnego[num_z][21]<<endl;
            cout<<"Srednia ilosc kontaktow z pilka na mecz: "<<Sofensywnego[num_z][22]<<endl;
            cout<<"Udane dryblingi na mecz: "<<Sofensywnego[num_z][39]<<endl;
            cout<<"Wygrane pojedynki / powietrzne / suma na mecz: "<<Sofensywnego[num_z][41]<<" / "<<Sofensywnego[num_z][42]<<" / "<<Sofensywnego[num_z][40]<<endl;
            cout<<"Srednia ilosc spalonych na mecz: "<<Sofensywnego[num_z][46]<<endl;
            cout<<endl;

            cout<<"Ilosc otrzymanych zoltych kartek w sezonie: "<<Sofensywnego[num_z][47]<<endl;
            cout<<"Ilosc otrzymanych po 2 zoltych / bezposrednich czerwonych kartek: "<<Sofensywnego[num_z][48]<<" / "<<Sofensywnego[num_z][49]<<endl;
            cout<<endl;
        }
        //kluczowe statystyki pomocnikow
        else
        {
            cout<<"Ilosc rozegranych meczow: "<<Sofensywnego[num_z][0]<<endl;
            cout<<"Od pierwszej minuty: "<<Sofensywnego[num_z][1]<<endl;
            cout<<endl;

            cout<<"Asysty: "<<Sofensywnego[num_z][21]<<endl;
            cout<<"Srednia ilosc kontaktow z pilka na mecz: "<<Sofensywnego[num_z][22]<<endl;
            cout<<"Stworzone okazje: "<<Sofensywnego[num_z][23]<<endl;
            cout<<"Kluczowe podania na mecz: "<<Sofensywnego[num_z][24]<<endl;
            cout<<"Srednia ilosc celnych podan na mecz: "<<Sofensywnego[num_z][25]<<endl;
            cout<<"Skutecznosc podan na wlasnej / na polowie przeciwnika: "<<Sofensywnego[num_z][26]<<" / "<<Sofensywnego[num_z][27]<<endl;
            cout<<"Skutecznosc dlugich podan / crossow / dosrodkowan: "<<Sofensywnego[num_z][28]<<" / "<<Sofensywnego[num_z][29]<<" / "<<Sofensywnego[num_z][30]<<endl;
            cout<<endl;

            cout<<"Strzelone bramki: "<<Sofensywnego[num_z][4]<<endl;
            cout<<"Bramki z rzutow wolnych / skutecznosc: "<<Sofensywnego[num_z][13]<<" / "<<Sofensywnego[num_z][14]<<endl;
            cout<<"Srednia ilosc kontaktow z pilka na mecz: "<<Sofensywnego[num_z][22]<<endl;
            cout<<"Udane dryblingi na mecz: "<<Sofensywnego[num_z][39]<<endl;
            cout<<"Wygrane pojedynki / powietrzne / suma na mecz: "<<Sofensywnego[num_z][41]<<" / "<<Sofensywnego[num_z][42]<<" / "<<Sofensywnego[num_z][40]<<endl;
            cout<<"Srednia ilosc spalonych na mecz: "<<Sofensywnego[num_z][46]<<endl;
            cout<<endl;

            cout<<"Srednia ilosc przechwytow na mecz: "<<Sofensywnego[num_z][31]<<endl;
            cout<<"Srednia ilosc odzyskanych posiadan na mecz: "<<Sofensywnego[num_z][33]<<endl;
            cout<<endl;

            cout<<"Ilosc otrzymanych zoltych kartek w sezonie: "<<Sofensywnego[num_z][47]<<endl;
            cout<<"Ilosc otrzymanych po 2 zoltych / bezposrednich czerwonych kartek: "<<Sofensywnego[num_z][48]<<" / "<<Sofensywnego[num_z][49]<<endl;
            cout<<endl;

        }
    }
    else if(format=="o")
    {
        //ogolne statystyki napatstnikow
        if(num_z==4 || num_z==5)
        {
            cout<<"Ilosc rozegranych meczow: "<<Sofensywnego[num_z][0]<<endl;
            cout<<"Asysty: "<<Sofensywnego[num_z][21]<<endl;
            cout<<"Kluczowe podania na mecz: "<<Sofensywnego[num_z][24]<<endl;
            cout<<"Srednia ilosc spalonych na mecz: "<<Sofensywnego[num_z][46]<<endl;
            cout<<"Stworzone okazje: "<<Sofensywnego[num_z][23]<<endl;
            cout<<endl;
        }
        //ogolne statystyki pomocnikow
        else
        {
            cout<<"Ilosc rozegranych meczow: "<<Sofensywnego[num_z][0]<<endl;
            cout<<"Asysty: "<<Sofensywnego[num_z][21]<<endl;
            cout<<"Kluczowe podania na mecz: "<<Sofensywnego[num_z][24]<<endl;
            cout<<"Stworzone okazje: "<<Sofensywnego[num_z][23]<<endl;
            cout<<"Srednia ilosc przechwytow na mecz: "<<Sofensywnego[num_z][31]<<endl;
            cout<<endl;
        }
    }
}
void Uniwersalne::wyswietl_statystyki(string statystyki[567],string imiona[11],string nazwiska[11])
{
    //wczytanie statystyk bramkarza
    for(int i=0;i<63;i++)
        Sbramkarz[i]=statystyki[i];

    //wczytanie statystyk obroncow
    for(int o=0;o<4;o++)
    {
        for(int ii=0;ii<51;ii++)
            Sobroncy[o][ii]=statystyki[o*51+63+ii];
    }

    //wczytanie statystyk zawodnikow z ofensywnych
    for(int p=0;p<6;p++)
    {
        for(int iii=0;iii<50;iii++)
            Sofensywny[p][iii]=statystyki[p*50+267+iii];
    }

    cout<<"wybierz zawodnika poprzez wpisanie numeru poprzedzajacego jego imie i nazwisko"<<endl;
    cout<<"(aby wyjsc wpisz liczbe mniejsza niz 1 lub wieksza niz 11)"<<endl;
    cin>>zawodnik;
    if(zawodnik<12&&zawodnik>0)
    {
        do
        {
            pozycja=ustal_pozycje(zawodnik);
            cout<<endl;
            cout<<"wybrany zawodnik to: "<<imiona[zawodnik-1]<<" "<<nazwiska[zawodnik-1]<<endl;
            cout<<"pozycja: "<<pozycja<<endl;
            cout<<endl;

            if(pozycja=="bramkarz")
                pokaz_statystyki_bramkarza(Sbramkarz,format);

            else if(pozycja=="obronca")
            {
                num_z=zawodnik-2;
                pokaz_statystyki_obroncy(Sobroncy,format,num_z);
            }

            else if(pozycja=="pomocnik" || pozycja=="napastnik")
            {
                num_z=zawodnik-6;
                pokaz_statystyki_ofensywnego(Sofensywny,format,num_z);
            }

            cout<<"wybierz zawodnika poprzez wpisanie numeru poprzedzajacego jego imie i nazwisko"<<endl;
            cout<<"(aby wyjsc wpisz liczbe mniejsza niz 1 lub wieksza niz 11)"<<endl;
            cout<<endl;
            cin>>zawodnik;
        }
        while(zawodnik<12&&zawodnik>0);
    }
}

//PREMIER LEAGUE
int PL::wczytaj_pl()
{
    nazwa_ligi="Premier league";
    wyswietl_nazwe_ligi(nazwa_ligi);
    fstream premier;
    string d1,d2;
    premier.open("PL.txt",ios::in);
    for(int pl=0; pl<20; ++pl)
    {
        premier>>d1>>d2;
        cout<<pl+1<<". "<<d1<<" "<<d2<<endl;
    }
    premier.close();
    cin>>druzyna;
    return druzyna;
}
void PL::wyswietl_pl(int druzyna)
{
    if(druzyna==0)
    {
        cout<<"Wybrano Premier League"<<endl;
        cout<<endl;
        cout<<endl;
        wczytaj_pl();
        czysc_ekran();
    }
    else if(druzyna==1)
    {
        nazwa_druzyny="Manchester City";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLmnc();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==2)
    {
        nazwa_druzyny="Manchester United";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLmnu();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==3)
    {
        nazwa_druzyny="Liverpool";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLlfc();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==4)
    {
        nazwa_druzyny="Chelsea F.C.";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLcfc();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==5)
    {
        nazwa_druzyny="Leicester City";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLlei();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==6)
    {
        nazwa_druzyny="West Ham United";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLwhu();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==7)
    {
        nazwa_druzyny="Tottenham Hotspur";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLtot();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==8)
    {
        nazwa_druzyny="Arsenal F.C.";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLars();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==9)
    {
        nazwa_druzyny="Leeds United F.C.";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLleu();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==10)
    {
        nazwa_druzyny="Everton F.C.";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLeve();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==11)
    {
        nazwa_druzyny="Aston Villa";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLasv();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==12)
    {
        nazwa_druzyny="Newcastle United";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLncl();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==13)
    {
        nazwa_druzyny="Wolverhampton Wanderers";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLwov();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==14)
    {
        nazwa_druzyny="Crystal Palace";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLcpl();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==15)
    {
        nazwa_druzyny="Southampton F.C.";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLsth();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==16)
    {
        nazwa_druzyny="Brighton & Hove Albion";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLbri();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==17)
    {
        nazwa_druzyny="Burnley F.C.";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLbur();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==18)
    {
        nazwa_druzyny="Fulham F.C.";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLful();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==19)
    {
        nazwa_druzyny="West Bromwich Albion F.C.";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLwba();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==20)
    {
        nazwa_druzyny="Sheffield United";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_PLshu();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
}
int PL::odpal_pl()
{
    do
    {
        wczytaj_pl();
        czysc_ekran();
        wyswietl_pl(druzyna);
        czysc_ekran();
    }
    while(druzyna<21);
    liga=0;
    return liga;
}
//1
void PL::wczytaj_PLmnc()
{
    fstream mnc;
    mnc.open("PLcity.txt",ios::in);
    for(int man_c=0;man_c<11;man_c++)
    {
        mnc>>i_z>>n_z;
        imiona[man_c]=i_z;
        nazwiska[man_c]=n_z;
    }
    mnc.close();

    fstream scity;
    scity.open("sPLcity.txt",ios::in);
    for(int sman_c=0;sman_c<567;sman_c++)
    {
        scity>>staty;
        statystyki[sman_c]=staty;
    }
    scity.close();
}
//2
void PL::wczytaj_PLmnu()
{
    fstream mnu;
    mnu.open("PLunited.txt",ios::in);
    for(int man_u=0;man_u<11;man_u++)
    {
        mnu>>i_z>>n_z;
        imiona[man_u]=i_z;
        nazwiska[man_u]=n_z;
    }
    mnu.close();

    fstream smnu;
    smnu.open("sPLunited.txt",ios::in);
    for(int sman_u=0;sman_u<567;sman_u++)
    {
        smnu>>staty;
        statystyki[sman_u]=staty;
    }
    smnu.close();
}
//3
void PL::wczytaj_PLlfc()
{
    fstream lfc;
    lfc.open("PLliverpool.txt",ios::in);
    for(int liverpool=0;liverpool<11;liverpool++)
    {
        lfc>>i_z>>n_z;
        imiona[liverpool]=i_z;
        nazwiska[liverpool]=n_z;
    }
    lfc.close();

    fstream slfc;
    slfc.open("sPLliverpool.txt",ios::in);
    for(int sliverpool=0;sliverpool<567;sliverpool++)
    {
        slfc>>staty;
        statystyki[sliverpool]=staty;
    }
    slfc.close();
}
//4
void PL::wczytaj_PLcfc()
{
    fstream cfc;
    cfc.open("PLchelsea.txt",ios::in);
    for(int chelsea=0;chelsea<11;chelsea++)
    {
        cfc>>i_z>>n_z;
        imiona[chelsea]=i_z;
        nazwiska[chelsea]=n_z;
    }
    cfc.close();

    fstream scfc;
    scfc.open("sPLchelsea.txt",ios::in);
    for(int schelsea=0;schelsea<567;schelsea++)
    {
        scfc>>staty;
        statystyki[schelsea]=staty;
    }
    scfc.close();
}
//5
void PL::wczytaj_PLlei()
{
    fstream lei;
    lei.open("PLleicester.txt",ios::in);
    for(int leicester=0;leicester<11;leicester++)
    {
        lei>>i_z>>n_z;
        imiona[leicester]=i_z;
        nazwiska[leicester]=n_z;
    }
    lei.close();

    fstream slei;
    slei.open("sPLleicester.txt",ios::in);
    for(int sleicester=0;sleicester<567;sleicester++)
    {
        slei>>staty;
        statystyki[sleicester]=staty;
    }
    slei.close();
}
//6
void PL::wczytaj_PLwhu()
{
    fstream whu;
    whu.open("PLwhu.txt",ios::in);
    for(int whun=0;whun<11;whun++)
    {
        whu>>i_z>>n_z;
        imiona[whun]=i_z;
        nazwiska[whun]=n_z;
    }
    whu.close();

    fstream swhu;
    swhu.open("sPLwhu.txt",ios::in);
    for(int swhun=0;swhun<567;swhun++)
    {
        swhu>>staty;
        statystyki[swhun]=staty;
    }
    swhu.close();
}
//7
void PL::wczytaj_PLtot()
{
    fstream tot;
    tot.open("PLtottenham.txt",ios::in);
    for(int tottenham=0;tottenham<11;tottenham++)
    {
        tot>>i_z>>n_z;
        imiona[tottenham]=i_z;
        nazwiska[tottenham]=n_z;
    }
    tot.close();

    fstream stot;
    stot.open("sPLtottenham.txt",ios::in);
    for(int stottenham=0;stottenham<567;stottenham++)
    {
        stot>>staty;
        statystyki[stottenham]=staty;
    }
    stot.close();
}
//8
void PL::wczytaj_PLars()
{
    fstream ars;
    ars.open("PLarsenal.txt",ios::in);
    for(int arsenal=0;arsenal<11;arsenal++)
    {
        ars>>i_z>>n_z;
        imiona[arsenal]=i_z;
        nazwiska[arsenal]=n_z;
    }
    ars.close();

    fstream sars;
    sars.open("sPLarsenal.txt",ios::in);
    for(int sarsenal=0;sarsenal<567;sarsenal++)
    {
        sars>>staty;
        statystyki[sarsenal]=staty;
    }
    sars.close();
}
//9
void PL::wczytaj_PLleu()
{
    fstream leu;
    leu.open("PLleeds.txt",ios::in);
    for(int leeds=0;leeds<11;leeds++)
    {
        leu>>i_z>>n_z;
        imiona[leeds]=i_z;
        nazwiska[leeds]=n_z;
    }
    leu.close();

    fstream sleu;
    sleu.open("sPLleeds.txt",ios::in);
    for(int sleeds=0;sleeds<567;sleeds++)
    {
        sleu>>staty;
        statystyki[sleeds]=staty;
    }
    sleu.close();
}
//10
void PL::wczytaj_PLeve()
{
    fstream eve;
    eve.open("PLeverton.txt",ios::in);
    for(int everton=0;everton<11;everton++)
    {
        eve>>i_z>>n_z;
        imiona[everton]=i_z;
        nazwiska[everton]=n_z;
    }
    eve.close();

    fstream seve;
    seve.open("sPLeverton.txt",ios::in);
    for(int severton=0;severton<567;severton++)
    {
        seve>>staty;
        statystyki[severton]=staty;
    }
    seve.close();
}
//11
void PL::wczytaj_PLasv()
{
    fstream asv;
    asv.open("PLvilla.txt",ios::in);
    for(int villa=0;villa<11;villa++)
    {
        asv>>i_z>>n_z;
        imiona[villa]=i_z;
        nazwiska[villa]=n_z;
    }
    asv.close();

    fstream sasv;
    sasv.open("sPLvilla.txt",ios::in);
    for(int svilla=0;svilla<567;svilla++)
    {
        sasv>>staty;
        statystyki[svilla]=staty;
    }
    sasv.close();
}
//12
void PL::wczytaj_PLncl()
{
    fstream ncl;
    ncl.open("PLnewcastle.txt",ios::in);
    for(int newcastle=0;newcastle<11;newcastle++)
    {
        ncl>>i_z>>n_z;
        imiona[newcastle]=i_z;
        nazwiska[newcastle]=n_z;
    }
    ncl.close();

    fstream sncl;
    sncl.open("sPLnewcastle.txt",ios::in);
    for(int snewcastle=0;snewcastle<567;snewcastle++)
    {
        sncl>>staty;
        statystyki[snewcastle]=staty;
    }
    sncl.close();
}
//13
void PL::wczytaj_PLwov()
{
    fstream wov;
    wov.open("PLwolverhampton.txt",ios::in);
    for(int wolverhampton=0;wolverhampton<11;wolverhampton++)
    {
        wov>>i_z>>n_z;
        imiona[wolverhampton]=i_z;
        nazwiska[wolverhampton]=n_z;
    }
    wov.close();

    fstream swov;
    swov.open("sPLwolverhampton.txt",ios::in);
    for(int swolverhampton=0;swolverhampton<567;swolverhampton++)
    {
        swov>>staty;
        statystyki[swolverhampton]=staty;
    }
    swov.close();
}
//14
void PL::wczytaj_PLcpl()
{
    fstream cpl;
    cpl.open("PLcrystal.txt",ios::in);
    for(int crystal=0;crystal<11;crystal++)
    {
        cpl>>i_z>>n_z;
        imiona[crystal]=i_z;
        nazwiska[crystal]=n_z;
    }
    cpl.close();

    fstream scpl;
    scpl.open("sPLcrystal.txt",ios::in);
    for(int scrystal=0;scrystal<567;scrystal++)
    {
        scpl>>staty;
        statystyki[scrystal]=staty;
    }
    scpl.close();
}
//15
void PL::wczytaj_PLsth()
{
    fstream sth;
    sth.open("PLsouthampton.txt",ios::in);
    for(int southampton=0;southampton<11;southampton++)
    {
        sth>>i_z>>n_z;
        imiona[southampton]=i_z;
        nazwiska[southampton]=n_z;
    }
    sth.close();

    fstream ssth;
    ssth.open("sPLsouthampton.txt",ios::in);
    for(int ssouthampton=0;ssouthampton<567;ssouthampton++)
    {
        ssth>>staty;
        statystyki[ssouthampton]=staty;
    }
    ssth.close();
}
//16
void PL::wczytaj_PLbri()
{
    fstream bri;
    bri.open("PLbrighton.txt",ios::in);
    for(int brighton=0;brighton<11;brighton++)
    {
        bri>>i_z>>n_z;
        imiona[brighton]=i_z;
        nazwiska[brighton]=n_z;
    }
    bri.close();

    fstream sbri;
    sbri.open("sPLbrighton.txt",ios::in);
    for(int sbrighton=0;sbrighton<567;sbrighton++)
    {
        sbri>>staty;
        statystyki[sbrighton]=staty;
    }
    sbri.close();
}
//17
void PL::wczytaj_PLbur()
{
    fstream bur;
    bur.open("PLburnley.txt",ios::in);
    for(int burnley=0;burnley<11;burnley++)
    {
        bur>>i_z>>n_z;
        imiona[burnley]=i_z;
        nazwiska[burnley]=n_z;
    }
    bur.close();

    fstream sbur;
    sbur.open("sPLburnley.txt",ios::in);
    for(int sburnley=0;sburnley<567;sburnley++)
    {
        sbur>>staty;
        statystyki[sburnley]=staty;
    }
    sbur.close();
}
//18
void PL::wczytaj_PLful()
{
    fstream ful;
    ful.open("PLfulham.txt",ios::in);
    for(int fulham=0;fulham<11;fulham++)
    {
        ful>>i_z>>n_z;
        imiona[fulham]=i_z;
        nazwiska[fulham]=n_z;
    }
    ful.close();

    fstream sful;
    sful.open("sPLfulham.txt",ios::in);
    for(int sfulham=0;sfulham<567;sfulham++)
    {
        sful>>staty;
        statystyki[sfulham]=staty;
    }
    sful.close();
}
//19
void PL::wczytaj_PLwba()
{
    fstream wba;
    wba.open("PLwba.txt",ios::in);
    for(int brom=0;brom<11;brom++)
    {
        wba>>i_z>>n_z;
        imiona[brom]=i_z;
        nazwiska[brom]=n_z;
    }
    wba.close();

    fstream swba;
    swba.open("sPLwba.txt",ios::in);
    for(int sbrom=0;sbrom<567;sbrom++)
    {
        swba>>staty;
        statystyki[sbrom]=staty;
    }
    swba.close();
}
//20
void PL::wczytaj_PLshu()
{
    fstream shu;
    shu.open("PLsheffield.txt",ios::in);
    for(int sheffield=0;sheffield<11;sheffield++)
    {
        shu>>i_z>>n_z;
        imiona[sheffield]=i_z;
        nazwiska[sheffield]=n_z;
    }
    shu.close();

    fstream sshu;
    sshu.open("sPLsheffield.txt",ios::in);
    for(int ssheffield=0;ssheffield<567;ssheffield++)
    {
        sshu>>staty;
        statystyki[ssheffield]=staty;
    }
    sshu.close();
}

//SERIE A
int SA::wczytaj_sa()
{
    nazwa_ligi="Serie A";
    wyswietl_nazwe_ligi(nazwa_ligi);
    fstream serie;
    string d1,d2;
    serie.open("SA.txt",ios::in);
    for(int sa=0; sa<20; ++sa)
    {
        serie>>d1>>d2;
        cout<<sa+1<<". "<<d1<<" "<<d2<<endl;
    }
    serie.close();

    cin>>druzyna;

    return druzyna;
}
void SA::wyswietl_sa(int druzyna)
{
    if(druzyna==0)
    {
        wyswietl_nazwe_ligi(nazwa_ligi);
        wczytaj_sa();
        czysc_ekran();
    }
    else if(druzyna==1)
    {
        nazwa_druzyny="Inter Mediolan";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAint();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==2)
    {
        nazwa_druzyny="A.C. Milan";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAmil();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==3)
    {
        nazwa_druzyny="Atalanta Bergamo";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAatl();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==4)
    {
        nazwa_druzyny="Juventus Turyn";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAjuv();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==5)
    {
        nazwa_druzyny="SSC Napoli";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAnap();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==6)
    {
        nazwa_druzyny="S.S. Lazio";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAlaz();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==7)
    {
        nazwa_druzyny="AS Roma";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SArom();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==8)
    {
        nazwa_druzyny="US Sassuolo Calcio";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAsas();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==9)
    {
        nazwa_druzyny="UC Sampdoria";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAsam();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==10)
    {
        nazwa_druzyny="Hellas Verona";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAver();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==11)
    {
        nazwa_druzyny="Genoa CFC";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAgen();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==12)
    {
        nazwa_druzyny="Bologna FC 1909";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAbol();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==13)
    {
        nazwa_druzyny="ACF Fiorentina";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAfio();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==14)
    {
        nazwa_druzyny="Udinese Calcio";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAudi();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==15)
    {
        nazwa_druzyny="Spezia Calcio";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAspe();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==16)
    {
        nazwa_druzyny="Cagliari Calcio";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAcag();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==17)
    {
        nazwa_druzyny="Torino F.C.";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAtor();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==18)
    {
        nazwa_druzyny="Benevento Calcio";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAben();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==19)
    {
        nazwa_druzyny="F.C. Crotone";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SAcro();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==20)
    {
        nazwa_druzyny="Parma Calcio 1913";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_SApar();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
}
int SA::odpal_sa()
{
    do
    {
        wczytaj_sa();
        czysc_ekran();
        wyswietl_sa(druzyna);
        czysc_ekran();
    }
    while(druzyna<21);
    liga=0;
    return liga;
}
//1
void SA::wczytaj_SAint()
{
    fstream SAint;
    SAint.open("SAinter.txt",ios::in);
    for(int inter=0;inter<11;inter++)
    {
        SAint>>i_z>>n_z;
        imiona[inter]=i_z;
        nazwiska[inter]=n_z;
    }
    SAint.close();

    fstream sSAint;
    sSAint.open("sSAinter.txt",ios::in);
    for(int sinter=0;sinter<567;sinter++)
    {
        sSAint>>staty;
        statystyki[sinter]=staty;
    }
    sSAint.close();
}
//2
void SA::wczytaj_SAmil()
{
    fstream SAmil;
    SAmil.open("SAmilan.txt",ios::in);
    for(int milan=0;milan<11;milan++)
    {
        SAmil>>i_z>>n_z;
        imiona[milan]=i_z;
        nazwiska[milan]=n_z;
    }
    SAmil.close();

    fstream sSAmil;
    sSAmil.open("sSAmilan.txt",ios::in);
    for(int smilan=0;smilan<567;smilan++)
    {
        sSAmil>>staty;
        statystyki[smilan]=staty;
    }
    sSAmil.close();
}
//3
void SA::wczytaj_SAatl()
{
    fstream SAatl;
    SAatl.open("SAatalanta.txt",ios::in);
    for(int atalanta=0;atalanta<11;atalanta++)
    {
        SAatl>>i_z>>n_z;
        imiona[atalanta]=i_z;
        nazwiska[atalanta]=n_z;
    }
    SAatl.close();

    fstream sSAatl;
    sSAatl.open("sSAatalanta.txt",ios::in);
    for(int satalanta=0;satalanta<567;satalanta++)
    {
        sSAatl>>staty;
        statystyki[satalanta]=staty;
    }
    SAatl.close();
}
//4
void SA::wczytaj_SAjuv()
{
    fstream SAjuv;
    SAjuv.open("SAjuventus.txt",ios::in);
    for(int juventus=0;juventus<11;juventus++)
    {
        SAjuv>>i_z>>n_z;
        imiona[juventus]=i_z;
        nazwiska[juventus]=n_z;
    }
    SAjuv.close();

    fstream sSAjuv;
    sSAjuv.open("sSAjuventus.txt",ios::in);
    for(int sjuventus=0;sjuventus<567;sjuventus++)
    {
        sSAjuv>>staty;
        statystyki[sjuventus]=staty;
    }
    sSAjuv.close();
}
//5
void SA::wczytaj_SAnap()
{
    fstream SAnap;
    SAnap.open("SAnapoli.txt",ios::in);
    for(int napoli=0;napoli<11;napoli++)
    {
        SAnap>>i_z>>n_z;
        imiona[napoli]=i_z;
        nazwiska[napoli]=n_z;
    }
    SAnap.close();
    fstream sSAnap;
    sSAnap.open("sSAnapoli.txt",ios::in);
    for(int snapoli=0;snapoli<567;snapoli++)
    {
        sSAnap>>staty;
        statystyki[snapoli]=staty;
    }
    sSAnap.close();
}
//6
void SA::wczytaj_SAlaz()
{
    fstream SAlaz;
    SAlaz.open("SAlazio.txt",ios::in);
    for(int lazio=0;lazio<11;lazio++)
    {
        SAlaz>>i_z>>n_z;
        imiona[lazio]=i_z;
        nazwiska[lazio]=n_z;
    }
    SAlaz.close();

    fstream sSAlaz;
    sSAlaz.open("sSAlazio.txt",ios::in);
    for(int slazio=0;slazio<567;slazio++)
    {
        sSAlaz>>staty;
        statystyki[slazio]=staty;
    }
    sSAlaz.close();
}
//7
void SA::wczytaj_SArom()
{
    fstream SArom;
    SArom.open("SAroma.txt",ios::in);
    for(int roma=0;roma<11;roma++)
    {
        SArom>>i_z>>n_z;
        imiona[roma]=i_z;
        nazwiska[roma]=n_z;
    }
    SArom.close();

    fstream sSArom;
    sSArom.open("sSAroma.txt",ios::in);
    for(int sroma=0;sroma<567;sroma++)
    {
        sSArom>>staty;
        statystyki[sroma]=staty;
    }
    sSArom.close();
}
//8
void SA::wczytaj_SAsas()
{
    fstream SAsas;
    SAsas.open("SAsassuolo.txt",ios::in);
    for(int sassuolo=0;sassuolo<11;sassuolo++)
    {
        SAsas>>i_z>>n_z;
        imiona[sassuolo]=i_z;
        nazwiska[sassuolo]=n_z;
    }
    SAsas.close();

    fstream sSAsas;
    sSAsas.open("sSAsassuolo.txt",ios::in);
    for(int ssassuolo=0;ssassuolo<567;ssassuolo++)
    {
        sSAsas>>staty;
        statystyki[ssassuolo]=staty;
    }
    sSAsas.close();
}
//9
void SA::wczytaj_SAsam()
{
    fstream SAsam;
    SAsam.open("SAsampdoria.txt",ios::in);
    for(int sampdoria=0;sampdoria<11;sampdoria++)
    {
        SAsam>>i_z>>n_z;
        imiona[sampdoria]=i_z;
        nazwiska[sampdoria]=n_z;
    }
    SAsam.close();

    fstream sSAsam;
    sSAsam.open("sSAsampdoria.txt",ios::in);
    for(int ssampdoria=0;ssampdoria<567;ssampdoria++)
    {
        sSAsam>>staty;
        statystyki[ssampdoria]=staty;
    }
    sSAsam.close();
}
//10
void SA::wczytaj_SAver()
{
    fstream SAver;
    SAver.open("SAwerona.txt",ios::in);
    for(int werona=0;werona<11;werona++)
    {
        SAver>>i_z>>n_z;
        imiona[werona]=i_z;
        nazwiska[werona]=n_z;
    }
    SAver.close();

    fstream sSAver;
    sSAver.open("sSAwerona.txt",ios::in);
    for(int swerona=0;swerona<567;swerona++)
    {
        sSAver>>staty;
        statystyki[swerona]=staty;
    }
    sSAver.close();
}
//11
void SA::wczytaj_SAgen()
{
    fstream SAgen;
    SAgen.open("SAgenoa.txt",ios::in);
    for(int genoa=0;genoa<11;genoa++)
    {
        SAgen>>i_z>>n_z;
        imiona[genoa]=i_z;
        nazwiska[genoa]=n_z;
    }
    SAgen.close();

    fstream sSAgen;
    sSAgen.open("sSAgenoa.txt",ios::in);
    for(int sgenoa=0;sgenoa<567;sgenoa++)
    {
        sSAgen>>staty;
        statystyki[sgenoa]=staty;
    }
    sSAgen.close();
}
//12
void SA::wczytaj_SAbol()
{
    fstream SAbol;
    SAbol.open("SAbologna.txt",ios::in);
    for(int bologna=0;bologna<11;bologna++)
    {
        SAbol>>i_z>>n_z;
        imiona[bologna]=i_z;
        nazwiska[bologna]=n_z;
    }
    SAbol.close();

    fstream sSAbol;
    sSAbol.open("sSAbologna.txt",ios::in);
    for(int sbologna=0;sbologna<567;sbologna++)
    {
        sSAbol>>staty;
        statystyki[sbologna]=staty;
    }
    sSAbol.close();
}
//13
void SA::wczytaj_SAfio()
{
    fstream SAfio;
    SAfio.open("SAfiorentina.txt",ios::in);
    for(int fiorentina=0;fiorentina<11;fiorentina++)
    {
        SAfio>>i_z>>n_z;
        imiona[fiorentina]=i_z;
        nazwiska[fiorentina]=n_z;
    }
    SAfio.close();

    fstream sSAfio;
    sSAfio.open("sSAfiorentina.txt",ios::in);
    for(int sfiorentina=0;sfiorentina<567;sfiorentina++)
    {
        sSAfio>>staty;
        statystyki[sfiorentina]=staty;
    }
    sSAfio.close();
}
//14
void SA::wczytaj_SAudi()
{
    fstream SAudi;
    SAudi.open("SAudinese.txt",ios::in);
    for(int udinese=0;udinese<11;udinese++)
    {
        SAudi>>i_z>>n_z;
        imiona[udinese]=i_z;
        nazwiska[udinese]=n_z;
    }
    SAudi.close();

    fstream sSAudi;
    sSAudi.open("sSAudinese.txt",ios::in);
    for(int sudinese=0;sudinese<567;sudinese++)
    {
        sSAudi>>staty;
        statystyki[sudinese]=staty;
    }
    sSAudi.close();
}
//15
void SA::wczytaj_SAspe()
{
    fstream SAspe;
    SAspe.open("SAspezia.txt",ios::in);
    for(int spezia=0;spezia<11;spezia++)
    {
        SAspe>>i_z>>n_z;
        imiona[spezia]=i_z;
        nazwiska[spezia]=n_z;
    }
    SAspe.close();

    fstream sSAspe;
    sSAspe.open("sSAspezia.txt",ios::in);
    for(int sspezia=0;sspezia<567;sspezia++)
    {
        sSAspe>>staty;
        statystyki[sspezia]=staty;
    }
    sSAspe.close();
}
//16
void SA::wczytaj_SAcag()
{
    fstream SAcag;
    SAcag.open("SAcagliari.txt",ios::in);
    for(int cagliari=0;cagliari<11;cagliari++)
    {
        SAcag>>i_z>>n_z;
        imiona[cagliari]=i_z;
        nazwiska[cagliari]=n_z;
    }
    SAcag.close();

    fstream sSAcag;
    sSAcag.open("sSAcagliari.txt",ios::in);
    for(int scagliari=0;scagliari<567;scagliari++)
    {
        sSAcag>>staty;
        statystyki[scagliari]=staty;
    }
    sSAcag.close();
}
//17
void SA::wczytaj_SAtor()
{
    fstream SAtor;
    SAtor.open("SAtorino.txt",ios::in);
    for(int torino=0;torino<11;torino++)
    {
        SAtor>>i_z>>n_z;
        imiona[torino]=i_z;
        nazwiska[torino]=n_z;
    }
    SAtor.close();

    fstream sSAtor;
    sSAtor.open("sSAtorino.txt",ios::in);
    for(int storino=0;storino<567;storino++)
    {
        sSAtor>>staty;
        statystyki[storino]=staty;
    }
    sSAtor.close();
}
//18
void SA::wczytaj_SAben()
{
    fstream SAben;
    SAben.open("SAbenevento.txt",ios::in);
    for(int benvento=0;benvento<11;benvento++)
    {
        SAben>>i_z>>n_z;
        imiona[benvento]=i_z;
        nazwiska[benvento]=n_z;
    }
    SAben.close();

    fstream sben;
    sben.open("sSAbenevento.txt",ios::in);
    for(int sbenvento=0;sbenvento<567;sbenvento++)
    {
        sben>>staty;
        statystyki[sbenvento]=staty;
    }
}
//19
void SA::wczytaj_SAcro()
{
    fstream SAcro;
    SAcro.open("SAcrotone.txt",ios::in);
    for(int crotone=0;crotone<11;crotone++)
    {
        SAcro>>i_z>>n_z;
        imiona[crotone]=i_z;
        nazwiska[crotone]=n_z;
    }
    SAcro.close();

    fstream sSAcro;
    sSAcro.open("sSAcrotone.txt",ios::in);
    for(int scrotone=0;scrotone<567;scrotone++)
    {
        sSAcro>>staty;
        statystyki[scrotone]=staty;
    }
    sSAcro.close();
}
//20
void SA::wczytaj_SApar()
{
    fstream SApar;
    SApar.open("SAparma.txt",ios::in);
    for(int parma=0;parma<11;parma++)
    {
        SApar>>i_z>>n_z;
        imiona[parma]=i_z;
        nazwiska[parma]=n_z;
    }
    SApar.close();

    fstream sSApar;
    sSApar.open("sSAparma.txt",ios::in);
    for(int sparma=0;sparma<567;sparma++)
    {
        sSApar>>staty;
        statystyki[sparma]=staty;
    }
    SApar.close();
}

//LEAGUE 1
int L1::wczytaj_l1()
{
    nazwa_ligi = "Ligue 1 Uber Eats";
    wyswietl_nazwe_ligi(nazwa_ligi);
    fstream l1;
    string d1, d2;
    l1.open("L1.txt", ios::in);
    for (int l1ub = 0; l1ub < 20; ++l1ub)
    {
        l1 >> d1 >> d2;
        cout << l1ub + 1 << ". " << d1 << " " << d2 << endl;
    }
    l1.close();
    cin >> druzyna;
    return druzyna;
}
void L1::wyswietl_l1 (int druzyna)
{
    if (druzyna == 0)
    {
        cout << "Wybrano Ligue 1 Uber Eats" << endl;
        cout << endl;
        cout << endl;
        wczytaj_l1();
        czysc_ekran();
    }
    else if (druzyna == 1)
    {
        nazwa_druzyny="Lille OSC";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1lil();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 2)
    {
        nazwa_druzyny="Paris Saint-Germain";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1psg();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 3)
    {
        nazwa_druzyny="AS Monaco";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1mon();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 4)
    {
        nazwa_druzyny="Olympique Lyonnais";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1lyo();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 5)
    {
        nazwa_druzyny="Olympique de Marseille";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1mar();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 6)
    {
        nazwa_druzyny="Stade Rennais";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1ren();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 7)
    {
        nazwa_druzyny="RC Lens";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1len();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 8)
    {
        nazwa_druzyny="Montpellier HSC";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1mot();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 9)
    {
        nazwa_druzyny="OGC Nice";
        wyswietl_nazwe_druzyny(nazwa_druzyny);;
        wczytaj_L1nic();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 10)
    {
        nazwa_druzyny="FC Metz";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1met();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 11)
    {
        nazwa_druzyny="Saint-Étienne";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1eti();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 12)
    {
        nazwa_druzyny="Girondins Bordeaux";
        wyswietl_nazwe_druzyny(nazwa_druzyny);;
        wczytaj_L1bor();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 13)
    {
        nazwa_druzyny="Angers SCO";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1ang();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 14)
    {
        nazwa_druzyny="Stade de Reims";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1rei();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 15)
    {
        nazwa_druzyny="RC Strasbourg Alsace";
        wyswietl_nazwe_druzyny(nazwa_druzyny);;
        wczytaj_L1str();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 16)
    {
        nazwa_druzyny="FC Lorient";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1lor();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 17)
    {
        nazwa_druzyny="Stade Brestois 29";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1bre();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 18)
    {
        nazwa_druzyny="FC Nantes";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1nan();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 19)
    {
        nazwa_druzyny="Nimes Olympique";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1nim();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
    else if (druzyna == 20)
    {
        nazwa_druzyny="Dijon FCO";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_L1dij();
        wyswietl_druzyne(imiona, nazwiska);
        wyswietl_statystyki(statystyki, imiona, nazwiska);
        czysc_ekran();
        druzyna = 0;
    }
}
int L1::odpal_l1()
{
    do
    {
        wczytaj_l1();
        czysc_ekran();
        wyswietl_l1(druzyna);
        czysc_ekran();
    }
    while (druzyna < 21);
    liga = 0;
    return liga;
}
//1
void L1::wczytaj_L1lil()
{
    fstream lil;
    lil.open("L1lil.txt", ios::in);
    for (int Lille = 0; Lille < 11; Lille++)
    {
        lil >> i_z >> n_z;
        imiona[Lille] = i_z;
        nazwiska[Lille] = n_z;
    }
    lil.close();

    fstream slil;
    slil.open("sL1lil.txt", ios::in);
    for (int sLille = 0; sLille < 567; sLille++)
    {
        slil >> staty;
        statystyki[sLille] = staty;
    }
    slil.close();
}
//2
void L1::wczytaj_L1psg()
{
    fstream psg;
    psg.open("L1psg.txt", ios::in);
    for (int Paris = 0; Paris < 11; Paris++)
    {
        psg >> i_z >> n_z;
        imiona[Paris] = i_z;
        nazwiska[Paris] = n_z;
    }
    psg.close();

    fstream spsg;
    spsg.open("sL1psg.txt", ios::in);
    for (int sParis = 0; sParis < 567; sParis++)
    {
        spsg >> staty;
        statystyki[sParis] = staty;
    }
    spsg.close();
}
//3
void L1::wczytaj_L1mon()
{
    fstream mon;
    mon.open("L1mon.txt", ios::in);
    for (int Monaco = 0; Monaco < 11; Monaco++)
    {
        mon >> i_z >> n_z;
        imiona[Monaco] = i_z;
        nazwiska[Monaco] = n_z;
    }
    mon.close();

    fstream smon;
    smon.open("sL1mon.txt", ios::in);
    for (int sMonaco = 0; sMonaco < 567; sMonaco++)
    {
        smon >> staty;
        statystyki[sMonaco] = staty;
    }
    smon.close();
}
//4
void L1::wczytaj_L1lyo()
{
    fstream lyo;
    lyo.open("L1lyo.txt", ios::in);
    for (int Lyon = 0; Lyon < 11; Lyon++)
    {
        lyo >> i_z >> n_z;
        imiona[Lyon] = i_z;
        nazwiska[Lyon] = n_z;
    }
    lyo.close();

    fstream slyo;
    slyo.open("sL1lyo.txt", ios::in);
    for (int sLyon = 0; sLyon < 567; sLyon++)
    {
        slyo >> staty;
        statystyki[sLyon] = staty;
    }
    slyo.close();
}
//5
void L1::wczytaj_L1mar()
{
    fstream mar;
    mar.open("L1mar.txt", ios::in);
    for (int Marseille = 0; Marseille < 11; Marseille++)
    {
        mar >> i_z >> n_z;
        imiona[Marseille] = i_z;
        nazwiska[Marseille] = n_z;
    }
    mar.close();

    fstream smar;
    smar.open("sL1mar.txt", ios::in);
    for (int sMarseille = 0; sMarseille < 567; sMarseille++)
    {
        smar >> staty;
        statystyki[sMarseille] = staty;
    }
    smar.close();
}
//6
void L1::wczytaj_L1ren()
{
    fstream ren;
    ren.open("L1ren.txt", ios::in);
    for (int Rennais = 0; Rennais < 11; Rennais++)
    {
        ren >> i_z >> n_z;
        imiona[Rennais] = i_z;
        nazwiska[Rennais] = n_z;
    }
    ren.close();

    fstream sren;
    sren.open("sL1ren.txt", ios::in);
    for (int sRennais = 0; sRennais < 567; sRennais++)
    {
        sren >> staty;
        statystyki[sRennais] = staty;
    }
    sren.close();
}
//7
void L1::wczytaj_L1len()
{
    fstream len;
    len.open("L1len.txt", ios::in);
    for (int Lens = 0; Lens < 11; Lens++)
    {
        len >> i_z >> n_z;
        imiona[Lens] = i_z;
        nazwiska[Lens] = n_z;
    }
    len.close();

    fstream slen;
    slen.open("sL1len.txt", ios::in);
    for (int sLens = 0; sLens < 567; sLens++)
    {
        slen >> staty;
        statystyki[sLens] = staty;
    }
    slen.close();
}
//8
void L1::wczytaj_L1mot()
{
    fstream mot;
    mot.open("L1mot.txt", ios::in);
    for (int Montpellier = 0; Montpellier < 11; Montpellier++)
    {
        mot >> i_z >> n_z;
        imiona[Montpellier] = i_z;
        nazwiska[Montpellier] = n_z;
    }
    mot.close();

    fstream smot;
    smot.open("sL1mot.txt", ios::in);
    for (int sMontpellier = 0; sMontpellier < 567; sMontpellier++)
    {
        smot >> staty;
        statystyki[sMontpellier] = staty;
    }
    smot.close();
}
//9
void L1::wczytaj_L1nic()
{
    fstream nic;
    nic.open("L1nic.txt", ios::in);
    for (int Nice = 0; Nice < 11; Nice++)
    {
        nic >> i_z >> n_z;
        imiona[Nice] = i_z;
        nazwiska[Nice] = n_z;
    }
    nic.close();

    fstream snic;
    snic.open("sL1nic.txt", ios::in);
    for (int sNice = 0; sNice < 567; sNice++)
    {
        snic >> staty;
        statystyki[sNice] = staty;
    }
    snic.close();
}
//10
void L1::wczytaj_L1met()
{
    fstream met;
    met.open("L1met.txt", ios::in);
    for (int Metz = 0; Metz < 11; Metz++)
    {
        met >> i_z >> n_z;
        imiona[Metz] = i_z;
        nazwiska[Metz] = n_z;
    }
    met.close();

    fstream smet;
    smet.open("sL1met.txt", ios::in);
    for (int sMetz = 0; sMetz < 567; sMetz++)
    {
        smet >> staty;
        statystyki[sMetz] = staty;
    }
    smet.close();
}
//11
void L1::wczytaj_L1eti()
{
    fstream eti;
    eti.open("L1eti.txt", ios::in);
    for (int Etienne = 0; Etienne < 11; Etienne++)
    {
        eti >> i_z >> n_z;
        imiona[Etienne] = i_z;
        nazwiska[Etienne] = n_z;
    }
    eti.close();

    fstream seti;
    seti.open("sL1eti.txt", ios::in);
    for (int sEtienne = 0; sEtienne < 567; sEtienne++)
    {
        seti >> staty;
        statystyki[sEtienne] = staty;
    }
    seti.close();
}
//12
void L1::wczytaj_L1bor()
{
    fstream bor;
    bor.open("L1bor.txt", ios::in);
    for (int Bordeaux = 0; Bordeaux < 11; Bordeaux++)
    {
        bor >> i_z >> n_z;
        imiona[Bordeaux] = i_z;
        nazwiska[Bordeaux] = n_z;
    }
    bor.close();

    fstream sbor;
    sbor.open("sL1bor.txt", ios::in);
    for (int sBordeaux = 0; sBordeaux < 567; sBordeaux++)
    {
        sbor >> staty;
        statystyki[sBordeaux] = staty;
    }
    sbor.close();
}
//13
void L1::wczytaj_L1ang()
{
    fstream ang;
    ang.open("L1ang.txt", ios::in);
    for (int Angers = 0; Angers < 11; Angers++)
    {
        ang >> i_z >> n_z;
        imiona[Angers] = i_z;
        nazwiska[Angers] = n_z;
    }
    ang.close();

    fstream sang;
    sang.open("sL1ang.txt", ios::in);
    for (int sAngers = 0; sAngers < 567; sAngers++)
    {
        sang >> staty;
        statystyki[sAngers] = staty;
    }
    sang.close();
}
//14
void L1::wczytaj_L1rei()
{
    fstream rei;
    rei.open("L1rei.txt", ios::in);
    for (int Reims = 0; Reims < 11; Reims++)
    {
        rei >> i_z >> n_z;
        imiona[Reims] = i_z;
        nazwiska[Reims] = n_z;
    }
    rei.close();

    fstream srei;
    srei.open("sL1rei.txt", ios::in);
    for (int sReims = 0; sReims < 567; sReims++)
    {
        srei >> staty;
        statystyki[sReims] = staty;
    }
    srei.close();
}
//15
void L1::wczytaj_L1str()
{
    fstream str;
    str.open("L1str.txt", ios::in);
    for (int Strasbourg = 0; Strasbourg < 11; Strasbourg++)
    {
        str >> i_z >> n_z;
        imiona[Strasbourg] = i_z;
        nazwiska[Strasbourg] = n_z;
    }
    str.close();

    fstream sstr;
    sstr.open("sL1str.txt", ios::in);
    for (int sStrasbourg = 0; sStrasbourg < 567; sStrasbourg++)
    {
        sstr >> staty;
        statystyki[sStrasbourg] = staty;
    }
    sstr.close();
}
//16
void L1::wczytaj_L1lor()
{
    fstream lor;
    lor.open("L1lor.txt", ios::in);
    for (int Lorient = 0; Lorient < 11; Lorient++)
    {
        lor >> i_z >> n_z;
        imiona[Lorient] = i_z;
        nazwiska[Lorient] = n_z;
    }
    lor.close();

    fstream slor;
    slor.open("sL1lor.txt", ios::in);
    for (int sLorient = 0; sLorient < 567; sLorient++)
    {
        slor >> staty;
        statystyki[sLorient] = staty;
    }
    slor.close();
}
//17
void L1::wczytaj_L1bre()
{
    fstream bre;
    bre.open("L1bre.txt", ios::in);
    for (int Brestois = 0; Brestois < 11; Brestois++)
    {
        bre >> i_z >> n_z;
        imiona[Brestois] = i_z;
        nazwiska[Brestois] = n_z;
    }
    bre.close();

    fstream sbre;
    sbre.open("sL1bre.txt", ios::in);
    for (int sBrestois = 0; sBrestois < 567; sBrestois++)
    {
        sbre >> staty;
        statystyki[sBrestois] = staty;
    }
    sbre.close();
}
//18
void L1::wczytaj_L1nan()
{
    fstream nan;
    nan.open("L1nan.txt", ios::in);
    for (int Nantes = 0; Nantes < 11; Nantes++)
    {
        nan >> i_z >> n_z;
        imiona[Nantes] = i_z;
        nazwiska[Nantes] = n_z;
    }
    nan.close();

    fstream snan;
    snan.open("sL1nan.txt", ios::in);
    for (int sNantes = 0; sNantes < 567; sNantes++)
    {
        snan >> staty;
        statystyki[sNantes] = staty;
    }
    snan.close();
}
//19
void L1::wczytaj_L1nim()
{
    fstream nim;
    nim.open("L1nim.txt", ios::in);
    for (int Nimes = 0; Nimes < 11; Nimes++)
    {
        nim >> i_z >> n_z;
        imiona[Nimes] = i_z;
        nazwiska[Nimes] = n_z;
    }
    nim.close();

    fstream snim;
    snim.open("sL1nim.txt", ios::in);
    for (int sNimes = 0; sNimes < 567; sNimes++)
    {
        snim >> staty;
        statystyki[sNimes] = staty;
    }
    snim.close();
}
//20
void L1::wczytaj_L1dij()
{
    fstream dij;
    dij.open("L1dij.txt", ios::in);
    for (int Dijon = 0; Dijon < 11; Dijon++)
    {
        dij >> i_z >> n_z;
        imiona[Dijon] = i_z;
        nazwiska[Dijon] = n_z;
    }
    dij.close();

    fstream sdij;
    sdij.open("sL1dij.txt", ios::in);
    for (int sDijon = 0; sDijon < 567; sDijon++)
    {
        sdij >> staty;
        statystyki[sDijon] = staty;
    }
    sdij.close();
}

//BUNDESLIGA
int BL::wczytaj_bl()
{
    nazwa_ligi="Bundesliga";
    wyswietl_nazwe_ligi(nazwa_ligi);
    fstream bundes;
    string d1,d2;
    bundes.open("BL.txt",ios::in);
    for(int bl=0; bl<18; ++bl)
    {
        bundes>>d1>>d2;
        cout<<bl+1<<". "<<d1<<" "<<d2<<endl;
    }
    bundes.close();
    cin>>druzyna;
    return druzyna;
}
void BL::wyswietl_bl(int druzyna)
{
    if(druzyna==0)
    {
        wyswietl_nazwe_ligi(nazwa_ligi);
        wczytaj_bl();
        czysc_ekran();
    }
    else if(druzyna==1)
    {
        nazwa_druzyny="Bayern Monachium";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLbay();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==2)
    {
        nazwa_druzyny="RB Lipsk";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLrbl();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==3)
    {
        nazwa_druzyny="Borussia Dortmund";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLbod();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==4)
    {
        nazwa_druzyny="VfL Wolfsburg";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLvfl();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==5)
    {
        nazwa_druzyny="Eintracht Frankfurt";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLein();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==6)
    {
        nazwa_druzyny="Bayer Leverkusen";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLblv();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==7)
    {
        nazwa_druzyny="Union Berlin";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLuni();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==8)
    {
        nazwa_druzyny="Borussia Moenchengladbach";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLbom();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==9)
    {
        nazwa_druzyny="VfB Stuttgart";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLvfb();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==10)
    {
        nazwa_druzyny="SC Freiburg";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
		wczytaj_BLscf();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==11)
    {
        nazwa_druzyny="TSG Hoffenheim";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLtsg();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==12)
    {
        nazwa_druzyny="1. FSV Mainz 05";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLfsv();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==13)
    {
        nazwa_druzyny="FC Augsburg";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLfca();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==14)
    {
        nazwa_druzyny="Hertha BSC";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLher();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==15)
    {
        nazwa_druzyny="Arminia Bielefeld";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLarm();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==16)
    {
        nazwa_druzyny="FC Koln";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLodk();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==17)
    {
        nazwa_druzyny="Werder Brema";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLwer();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
    else if(druzyna==18)
    {
        nazwa_druzyny="FC Schalke 04";
        wyswietl_nazwe_druzyny(nazwa_druzyny);
        wczytaj_BLsch();
        wyswietl_druzyne(imiona,nazwiska);
        wyswietl_statystyki(statystyki,imiona,nazwiska);
        czysc_ekran();
        druzyna=0;
    }
}
int BL::odpal_bl()
{
    do
    {
        wczytaj_bl();
        czysc_ekran();
        wyswietl_bl(druzyna);
        czysc_ekran();
    }
    while(druzyna<19);
    liga=0;
    return liga;
}
//1
void BL::wczytaj_BLbay()
{
    fstream mon_b;
    mon_b.open("BLbayern.txt",ios::in);
    for(int bayern_m=0;bayern_m<11;bayern_m++)
    {
        mon_b>>i_z>>n_z;
        imiona[bayern_m]=i_z;
        nazwiska[bayern_m]=n_z;
    }
    mon_b.close();

    fstream smonachium;
    smonachium.open("sBLbayern.txt",ios::in);
    for(int sbayern_m=0;sbayern_m<567;sbayern_m++)
    {
        smonachium>>staty;
        statystyki[sbayern_m]=staty;
    }
    smonachium.close();
}
//2
void BL::wczytaj_BLrbl()
{
    fstream rbl;
    rbl.open("BLlipsk.txt",ios::in);
    for(int rb_l=0;rb_l<11;rb_l++)
    {
        rbl>>i_z>>n_z;
        imiona[rb_l]=i_z;
        nazwiska[rb_l]=n_z;
    }
    rbl.close();

    fstream srbl;
    srbl.open("sBLlipsk.txt",ios::in);
    for(int srb_l=0;srb_l<567;srb_l++)
    {
        srbl>>staty;
        statystyki[srb_l]=staty;
    }
    srbl.close();
}
//3
void BL::wczytaj_BLbod()
{
    fstream bod;
    bod.open("BLborussiad.txt",ios::in);
    for(int borussia_d=0;borussia_d<11;borussia_d++)
    {
        bod>>i_z>>n_z;
        imiona[borussia_d]=i_z;
        nazwiska[borussia_d]=n_z;
    }
    bod.close();

    fstream sbod;
    sbod.open("sBLborussiad.txt",ios::in);
    for(int sborussia=0;sborussia<567;sborussia++)
    {
        sbod>>staty;
        statystyki[sborussia]=staty;
    }
    sbod.close();
}
//4
void BL::wczytaj_BLvfl()
{
    fstream vfl;
    vfl.open("BLwolfsburg.txt",ios::in);
    for(int wolfsburg=0;wolfsburg<11;wolfsburg++)
    {
        vfl>>i_z>>n_z;
        imiona[wolfsburg]=i_z;
        nazwiska[wolfsburg]=n_z;
    }
    vfl.close();

    fstream svfl;
    svfl.open("sBLwolfsburg.txt",ios::in);
    for(int swolfsburg=0;swolfsburg<567;swolfsburg++)
    {
        svfl>>staty;
        statystyki[swolfsburg]=staty;
    }
    svfl.close();
}
//5
void BL::wczytaj_BLein()
{
    fstream ein;
    ein.open("BLeintracht.txt",ios::in);
    for(int eintracht=0;eintracht<11;eintracht++)
    {
        ein>>i_z>>n_z;
        imiona[eintracht]=i_z;
        nazwiska[eintracht]=n_z;
    }
    ein.close();

    fstream sein;
    sein.open("sBLeintracht.txt",ios::in);
    for(int seintracht=0;seintracht<567;seintracht++)
    {
        sein>>staty;
        statystyki[seintracht]=staty;
    }
    sein.close();
}
//6
void BL::wczytaj_BLblv()
{
    fstream bay;
    bay.open("BLbayer.txt",ios::in);
    for(int bayer=0;bayer<11;bayer++)
    {
        bay>>i_z>>n_z;
        imiona[bayer]=i_z;
        nazwiska[bayer]=n_z;
    }
    bay.close();

    fstream sbay;
    sbay.open("sBLbayer.txt",ios::in);
    for(int sbayer=0;sbayer<567;sbayer++)
    {
        sbay>>staty;
        statystyki[sbayer]=staty;
    }
    sbay.close();
}
//7
void BL::wczytaj_BLuni()
{
    fstream uni;
    uni.open("BLunion.txt",ios::in);
    for(int union_b=0;union_b<11;union_b++)
    {
        uni>>i_z>>n_z;
        imiona[union_b]=i_z;
        nazwiska[union_b]=n_z;
    }
    uni.close();

    fstream suni;
    suni.open("sBLunion.txt",ios::in);
    for(int sunion_b=0;sunion_b<567;sunion_b++)
    {
        suni>>staty;
        statystyki[sunion_b]=staty;
    }
    suni.close();
}
//8
void BL::wczytaj_BLbom()
{
    fstream bom;
    bom.open("BLbmgladbach.txt",ios::in);
    for(int monchengladbach=0;monchengladbach<11;monchengladbach++)
    {
        bom>>i_z>>n_z;
        imiona[monchengladbach]=i_z;
        nazwiska[monchengladbach]=n_z;
    }
    bom.close();

    fstream sbom;
    sbom.open("sBLbmgladbach.txt",ios::in);
    for(int smonchengladbach=0;smonchengladbach<567;smonchengladbach++)
    {
        sbom>>staty;
        statystyki[smonchengladbach]=staty;
    }
    sbom.close();
}
//9
void BL::wczytaj_BLvfb()
{
    fstream vfb;
    vfb.open("BLstuttgart.txt",ios::in);
    for(int stuttgart=0;stuttgart<11;stuttgart++)
    {
        vfb>>i_z>>n_z;
        imiona[stuttgart]=i_z;
        nazwiska[stuttgart]=n_z;
    }
    vfb.close();

    fstream svfb;
    svfb.open("sBLstuttgart.txt",ios::in);
    for(int sstuttgart=0;sstuttgart<567;sstuttgart++)
    {
        svfb>>staty;
        statystyki[sstuttgart]=staty;
    }
    svfb.close();
}
//10
void BL::wczytaj_BLscf()
{
    fstream scf;
    scf.open("BLfreiburg.txt",ios::in);
    for(int freiburg=0;freiburg<11;freiburg++)
    {
        scf>>i_z>>n_z;
        imiona[freiburg]=i_z;
        nazwiska[freiburg]=n_z;
    }
    scf.close();

    fstream sscf;
    sscf.open("sBLfreiburg.txt",ios::in);
    for(int sfreiburg=0;sfreiburg<567;sfreiburg++)
    {
        sscf>>staty;
        statystyki[sfreiburg]=staty;
    }
    sscf.close();
}
//11
void BL::wczytaj_BLtsg()
{
    fstream tsg;
    tsg.open("BLhoffenheim.txt",ios::in);
    for(int hoffenheim=0;hoffenheim<11;hoffenheim++)
    {
        tsg>>i_z>>n_z;
        imiona[hoffenheim]=i_z;
        nazwiska[hoffenheim]=n_z;
    }
    tsg.close();

    fstream stsg;
    stsg.open("sBLhoffenheim.txt",ios::in);
    for(int shoffenheim=0;shoffenheim<567;shoffenheim++)
    {
        stsg>>staty;
        statystyki[shoffenheim]=staty;
    }
    stsg.close();
}
//12
void BL::wczytaj_BLfsv()
{
    fstream fsv;
    fsv.open("BLmainz.txt",ios::in);
    for(int mainz=0;mainz<11;mainz++)
    {
        fsv>>i_z>>n_z;
        imiona[mainz]=i_z;
        nazwiska[mainz]=n_z;
    }
    fsv.close();

    fstream sfsv;
    sfsv.open("sBLmainz.txt",ios::in);
    for(int smainz=0;smainz<567;smainz++)
    {
        sfsv>>staty;
        statystyki[smainz]=staty;
    }
    sfsv.close();
}
//13
void BL::wczytaj_BLfca()
{
    fstream fca;
    fca.open("BLaugsburg.txt",ios::in);
    for(int augsburg=0;augsburg<11;augsburg++)
    {
        fca>>i_z>>n_z;
        imiona[augsburg]=i_z;
        nazwiska[augsburg]=n_z;
    }
    fca.close();

    fstream sfca;
    sfca.open("sBLaugsburg.txt",ios::in);
    for(int saugsburg=0;saugsburg<567;saugsburg++)
    {
        sfca>>staty;
        statystyki[saugsburg]=staty;
    }
    sfca.close();
}
//14
void BL::wczytaj_BLher()
{
    fstream her;
    her.open("BLhertha.txt",ios::in);
    for(int hertha=0;hertha<11;hertha++)
    {
        her>>i_z>>n_z;
        imiona[hertha]=i_z;
        nazwiska[hertha]=n_z;
    }
    her.close();

    fstream sher;
    sher.open("sBLhertha.txt",ios::in);
    for(int shertha=0;shertha<567;shertha++)
    {
        sher>>staty;
        statystyki[shertha]=staty;
    }
    sher.close();
}
//15
void BL::wczytaj_BLarm()
{
    fstream arm;
    arm.open("BLarminia.txt",ios::in);
    for(int arminia=0;arminia<11;arminia++)
    {
        arm>>i_z>>n_z;
        imiona[arminia]=i_z;
        nazwiska[arminia]=n_z;
    }
    arm.close();

    fstream sarm;
    sarm.open("sBLarminia.txt",ios::in);
    for(int sarminia=0;sarminia<567;sarminia++)
    {
        sarm>>staty;
        statystyki[sarminia]=staty;
    }
    sarm.close();
}
//16
void BL::wczytaj_BLodk()
{
    fstream odk;
    odk.open("BLkoln.txt",ios::in);
    for(int koln=0;koln<11;koln++)
    {
        odk>>i_z>>n_z;
        imiona[koln]=i_z;
        nazwiska[koln]=n_z;
    }
    odk.close();

    fstream sodk;
    sodk.open("sBLkoln.txt",ios::in);
    for(int skoln=0;skoln<567;skoln++)
    {
        sodk>>staty;
        statystyki[skoln]=staty;
    }
    sodk.close();
}
//17
void BL::wczytaj_BLwer()
{
    fstream wer;
    wer.open("BLwerder.txt",ios::in);
    for(int werder=0;werder<11;werder++)
    {
        wer>>i_z>>n_z;
        imiona[werder]=i_z;
        nazwiska[werder]=n_z;
    }
    wer.close();

    fstream swer;
    swer.open("sBLwerder.txt",ios::in);
    for(int swerder=0;swerder<567;swerder++)
    {
        swer>>staty;
        statystyki[swerder]=staty;
    }
    swer.close();
}
//18
void BL::wczytaj_BLsch()
{
    fstream ods;
    ods.open("BLschalke.txt",ios::in);
    for(int schalke=0;schalke<11;schalke++)
    {
        ods>>i_z>>n_z;
        imiona[schalke]=i_z;
        nazwiska[schalke]=n_z;
    }
    ods.close();

    fstream sods;
    sods.open("sBLschalke.txt",ios::in);
    for(int sschalke=0;sschalke<567;sschalke++)
    {
        sods>>staty;
        statystyki[sschalke]=staty;
    }
    sods.close();
}

//WYSZUKIWARKA
void Wyszukiwarka::wyszukaj_zawodnika(string statystyki [567], int zawodnik, string format)
{
    //wczytanie statystyk bramkarza
    for(int i=0;i<63;i++)
        Sbramkarz[i]=statystyki[i];

    //wczytanie statystyk obroncow
    for(int o=0;o<4;o++)
    {
        for(int ii=0;ii<51;ii++)
            Sobroncy[o][ii]=statystyki[o*51+63+ii];
    }

    //wczytanie statystyk zawodnikow z ofensywnych
    for(int p=0;p<6;p++)
    {
        for(int iii=0;iii<50;iii++)
            Sofensywny[p][iii]=statystyki[p*50+267+iii];
    }

    pozycja=ustal_pozycje(zawodnik);
    cout<<endl;
    cout<<"pozycja: "<<pozycja<<endl;
    cout<<endl;
    if(pozycja=="bramkarz")
        pokaz_statystyki_bramkarza(Sbramkarz,format);
    else if(pozycja=="obronca")
    {
        num_z=zawodnik-2;
        pokaz_statystyki_obroncy(Sobroncy,format,num_z);
    }
    else if(pozycja=="pomocnik" || pozycja=="napastnik")
    {
        num_z=zawodnik-6;
        pokaz_statystyki_ofensywnego(Sofensywny,format,num_z);
    }
}
void Wyszukiwarka::wyszukaj_pl(int druzyna, int zawodnik, string format)
{
    if(druzyna==1)
    {
        wczytaj_PLmnc();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==2)
    {
        wczytaj_PLmnu();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==3)
    {
        wczytaj_PLlfc();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==4)
    {
        wczytaj_PLcfc();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==5)
    {
        wczytaj_PLlei();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==6)
    {
        wczytaj_PLwhu();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==7)
    {
        wczytaj_PLtot();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==8)
    {
        wczytaj_PLars();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==9)
    {
        wczytaj_PLleu();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==10)
    {
        wczytaj_PLeve();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==11)
    {
        wczytaj_PLasv();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==12)
    {
        wczytaj_PLncl();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==13)
    {
        wczytaj_PLwov();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==14)
    {
        wczytaj_PLcpl();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==15)
    {
        wczytaj_PLsth();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==16)
    {
        wczytaj_PLbri();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==17)
    {
        wczytaj_PLbur();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==18)
    {
        wczytaj_PLful();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==19)
    {
        wczytaj_PLwba();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==20)
    {
        wczytaj_PLshu();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
}
void Wyszukiwarka::wyszukaj_sa(int druzyna, int zawodnik, string format)
{
    if(druzyna==1)
    {
        wczytaj_SAint();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==2)
    {
        wczytaj_SAmil();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==3)
    {
        wczytaj_SAatl();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==4)
    {
        wczytaj_SAjuv();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==5)
    {
        wczytaj_SAnap();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==6)
    {
        wczytaj_SAlaz();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==7)
    {
        wczytaj_SArom();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==8)
    {
        wczytaj_SAsas();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==9)
    {
        wczytaj_SAsam();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==10)
    {
        wczytaj_SAver();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==11)
    {
        wczytaj_SAgen();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==12)
    {
        wczytaj_SAbol();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==13)
    {
        wczytaj_SAfio();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==14)
    {
        wczytaj_SAudi();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==15)
    {
        wczytaj_SAspe();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==16)
    {
        wczytaj_SAcag();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==17)
    {
        wczytaj_SAtor();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==18)
    {
        wczytaj_SAben();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==19)
    {
        wczytaj_SAcro();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==20)
    {
        wczytaj_SApar();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
}
void Wyszukiwarka::wyszukaj_l1(int druzyna, int zawodnik, string format)
{
    if (druzyna == 1)
    {
        wczytaj_L1lil();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 2)
    {
        wczytaj_L1psg();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 3)
    {
        wczytaj_L1mon();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 4)
    {
        wczytaj_L1lyo();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 5)
    {
        wczytaj_L1mar();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 6)
    {
        wczytaj_L1ren();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 7)
    {
        wczytaj_L1len();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 8)
    {
        wczytaj_L1mot();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 9)
    {
        wczytaj_L1nic();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 10)
    {
        wczytaj_L1met();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 11)
    {
        wczytaj_L1eti();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 12)
    {
        wczytaj_L1bor();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 13)
    {
        wczytaj_L1ang();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 14)
    {
        wczytaj_L1rei();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 15)
    {
        wczytaj_L1str();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 16)
    {
        wczytaj_L1lor();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 17)
    {
        wczytaj_L1bre();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 18)
    {
        wczytaj_L1nan();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 19)
    {
        wczytaj_L1nim();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if (druzyna == 20)
    {
        wczytaj_L1dij();
        wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
}
void Wyszukiwarka::wyszukaj_bl(int druzyna, int zawodnik, string format)
{
    if(druzyna==1)
    {
        wczytaj_BLbay();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==2)
    {
        wczytaj_BLrbl();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==3)
    {
        wczytaj_BLbod();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==4)
    {
        wczytaj_BLvfl();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==5)
    {
        wczytaj_BLein();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==6)
    {
        wczytaj_BLblv();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==7)
    {
        wczytaj_BLuni();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==8)
    {
        wczytaj_BLbom();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==9)
    {
        wczytaj_BLvfb();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==10)
    {
		wczytaj_BLscf();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==11)
    {
        wczytaj_BLtsg();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==12)
    {
        wczytaj_BLfsv();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==13)
    {
        wczytaj_BLfca();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==14)
    {
        wczytaj_BLher();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==15)
    {
        wczytaj_BLarm();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==16)
    {
        wczytaj_BLodk();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==17)
    {
        wczytaj_BLwer();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
    else if(druzyna==18)
    {
        wczytaj_BLsch();
		wyszukaj_zawodnika(statystyki, zawodnik, format);
    }
}
vector <string> Wyszukiwarka::podziel (string fraza)
{
    int dlugosc=fraza.size();
    string oddzielone;
    vector <string> podzielone;

    for(int i=0;i<dlugosc;i++)
    {
        if(fraza[i]==' ')
        {
            podzielone.push_back(oddzielone);
            oddzielone.clear();
        }
        else
            oddzielone=oddzielone+fraza[i];
    }
    if(!oddzielone.empty())
        podzielone.push_back(oddzielone);

    return podzielone;
}
string Wyszukiwarka::szukanie_wprowadz()
{
    cout<<"Podaj fraze do wyszukania:"<<"              (aby wyjsc z wyszukiwarki wpisz 0)"<<endl;
    cin.ignore();
    getline(cin,wprowadzone);

    czysc_ekran();

    return wprowadzone;
}
int Wyszukiwarka::szukanie_wielkosc(string wprowadzone)
{
    vector <string> temp;

    temp=podziel(wprowadzone);
    wielkosc=temp.size();

    return wielkosc;
}
bool Wyszukiwarka::szukanie_pasuje(string wprowadzone, string przekazane, int df)
{
    int licznik=0;

    for(int i=0;i<df;i++)
    {
        if(wprowadzone[i]==przekazane[i])
            licznik++;
    }

    if(licznik==df)
        return true;

    else
        return false;
}
void Wyszukiwarka::szukanie(int wielkosc, string wprowadzone, string format)
{
    if(wielkosc==0||wielkosc>2)
        cout<<"blad danych"<<endl;

    else if(wielkosc==1)
    {
        fstream wszyscy;
        int d1,d2,df=wprowadzone.size();
        wszyscy.open("Awszyscy.txt",ios::in);
        while(!wszyscy.eof())
        {
            wszyscy>>i_z>>n_z>>liga>>druzyna>>zawodnik;
            d1=i_z.size();
            d2=n_z.size();
            if(d1==df)
            {
                if(szukanie_pasuje(wprowadzone,i_z,df)==1)
                {
                    szukanie_imie.push_back(i_z);
                    szukanie_nazwisko.push_back(n_z);
                    szukanie_liga.push_back(liga);
                    szukanie_druzyna.push_back(druzyna);
                    szukanie_zawodnik.push_back(zawodnik);
                }
            }
            else if(d2==df)
            {
                if(szukanie_pasuje(wprowadzone,n_z,df)==1)
                {
                    szukanie_imie.push_back(i_z);
                    szukanie_nazwisko.push_back(n_z);
                    szukanie_liga.push_back(liga);
                    szukanie_druzyna.push_back(druzyna);
                    szukanie_zawodnik.push_back(zawodnik);
                }
            }
        }
        wszyscy.close();
    }

    else if(wielkosc==2)
    {
        fstream wszyscy;
        int d1,d2,dl=wprowadzone.size(),df1,df2;
        string podzielone1,podzielone2,temp;

        for(int i=0;i<dl;i++)
        {
            if(wprowadzone[i]==' ')
            {
                podzielone1=temp;
                temp.clear();
            }
            else
                temp=temp+wprowadzone[i];
        }
        podzielone2=temp;

        df1=podzielone1.size();
        df2=podzielone2.size();

        wszyscy.open("Awszyscy.txt",ios::in);
        while(!wszyscy.eof())
        {
            wszyscy>>i_z>>n_z>>liga>>druzyna>>zawodnik;
            d1=i_z.size();
            d2=n_z.size();

            if((d1==df1)&&(d2==df2))
            {
                if((szukanie_pasuje(podzielone1,i_z,d1)==1)&&(szukanie_pasuje(podzielone2,n_z,d2)==1))
                {
                    szukanie_imie.push_back(i_z);
                    szukanie_nazwisko.push_back(n_z);
                    szukanie_liga.push_back(liga);
                    szukanie_druzyna.push_back(druzyna);
                    szukanie_zawodnik.push_back(zawodnik);
                }
            }
        }
        wszyscy.close();
    }

    d_w=szukanie_imie.size();

    if(d_w==0)
    {
        cout<<"Brak dopasowan w bazie danych"<<endl;
        cout<<endl;
        cout<<"Aby wyszukac ponownie wpisz dowolna liczbe"<<endl;
        cin>>wybor;
        czysc_ekran();
    }

    if(d_w==1)
    {
        cout<<"Wyszukany zawodnik: "<<endl;
        cout<<szukanie_imie[0]<<" "<<szukanie_nazwisko[0]<<endl;
        cout<<endl;
        cout<<"Aby przejsc do statystyk zawodnika wpisz 1"<<endl;
        cout<<"Aby wyszukac ponownie wpisz 0"<<endl;
        cin>>wybor;
        czysc_ekran();
        if(wybor==1)
        {
            cout<<"Wyszukany zawodnik: "<<endl;
            cout<<szukanie_imie[wybor-1]<<" "<<szukanie_nazwisko[wybor-1]<<endl;
            liga=szukanie_liga[wybor-1];
            druzyna=szukanie_druzyna[wybor-1];
            zawodnik=szukanie_zawodnik[wybor-1];

            if(liga==1)
                wyszukaj_pl(druzyna,zawodnik,format);
            else if(liga==2)
                wyszukaj_sa(druzyna,zawodnik,format);
            else if(liga==3)
                wyszukaj_l1(druzyna,zawodnik,format);
            else if(liga==4)
                wyszukaj_bl(druzyna,zawodnik,format);
        }
    }

    if(d_w>1)
    {
        cout<<endl;
        cout<<"Otrzymane wyniki:"<<endl;
        for(int i=0;i<d_w;i++)
            cout<<i+1<<". "<<szukanie_imie[i]<<" "<<szukanie_nazwisko[i]<<endl;
        cout<<endl;

        cout<<"Aby wybrac zawodnika wpisz numer poprzedzajacy jego imie i nazwisko"<<endl;
        cout<<"Aby wyszukac ponownie wpisz 0"<<endl;
        cin>>wybor;
        czysc_ekran();
        if(wybor!=0 && wybor<=d_w)
        {
            cout<<"Wyszukany zawodnik: "<<endl;
            cout<<szukanie_imie[wybor-1]<<" "<<szukanie_nazwisko[wybor-1]<<endl;
            liga=szukanie_liga[wybor-1];
            druzyna=szukanie_druzyna[wybor-1];
            zawodnik=szukanie_zawodnik[wybor-1];

            if(liga==1)
                wyszukaj_pl(druzyna,zawodnik,format);
            else if(liga==2)
                wyszukaj_sa(druzyna,zawodnik,format);
            else if(liga==3)
                wyszukaj_l1(druzyna,zawodnik,format);
            else if(liga==4)
                wyszukaj_bl(druzyna,zawodnik,format);
        }
    }

    wprowadzone.clear();
    szukanie_imie.clear();
    szukanie_nazwisko.clear();
    szukanie_liga.clear();
    szukanie_druzyna.clear();
    szukanie_zawodnik.clear();
}

//QUIZZ
int Quizz::policz_pytania()
{
    fstream pytania;
    int licz=0;
    string a;
    pytania.open("Apytania.txt",ios::in);
    while(!pytania.eof())
    {
        pytania>>a;
        if(a=="?")
            licz++;
    }
    pytania.close();
    return licz;
}
string Quizz::wczytaj_pytania(int a)
{
    fstream pytania;
    int licz=0;
    string pyt,wczytaj;
    pytania.open("Apytania.txt",ios::in);
    while(!pytania.eof())
    {
        pytania>>pyt;
        if(pyt=="?")
            licz++;
        if(licz==a&&pyt!="?")
            wczytaj=wczytaj+pyt+" ";
        if(licz>a)
            break;
    }
    return wczytaj;
}
int Quizz::wylosuj_pytanie()
{
    pytanie=rand()%licznik;

    return pytanie;
}
int Quizz::wylosuj_lige()
{
    liga=rand()%4+1;
    return liga;
}
int Quizz::wylosuj_druzyne(int liga)
{
    if(liga==4)
        druzyna=rand()%18+1;
    else
        druzyna=rand()%20+1;

    return druzyna;
}
int Quizz::wylosuj_zawodnika()
{
    zawodnik=rand()%11+1;

    return zawodnik;
}
int Quizz::wylosuj_defensywnego()
{
    zawodnik=rand()%5+1;

    return zawodnik;
}
int Quizz::wylosuj_ofensywnego()
{
    zawodnik=rand()%6+6;

    return zawodnik;
}
bool Quizz::zadaj_pytanie(string tekst,int pytanie)
{
    string odp,udzielone,im,nz;

    //warunki losowania
    if(pytanie==0)
    {
        liga=wylosuj_lige();
        druzyna=wylosuj_druzyne(liga);
        zawodnik=wylosuj_defensywnego();
    }
    else if((pytanie==1)||(pytanie==2))
    {
        liga=wylosuj_lige();
        druzyna=wylosuj_druzyne(liga);
        zawodnik=wylosuj_ofensywnego();
    }
    else
    {
        liga=wylosuj_lige();
        druzyna=wylosuj_druzyne(liga);
        zawodnik=wylosuj_zawodnika();
    }

    //test
    //cout<<liga<<endl;
    //cout<<druzyna<<endl;
    //cout<<zawodnik<<endl;

    //pobieranie
    odp=przekaz_statystyke(liga,druzyna,zawodnik,pytanie);
    im=przekaz_imie(liga,druzyna,zawodnik);
    nz=przekaz_nazwisko(liga,druzyna,zawodnik);

    cout<<tekst<<im<<" "<<nz<<" ?"<<endl;
    cout<<odp<<endl;
    cout<<"Twoja odpowiedz:"<<endl;
    cin>>udzielone;

    if(udzielone==odp)
        return true;

    else
        return false;
}
string Quizz::przekaz_statystyke(int liga,int druzyna,int zawodnik,int pytanie)
{
    if(liga==1)
        return przekaz_pl(druzyna,zawodnik,pytanie);
    else if(liga==2)
        return przekaz_sa(druzyna,zawodnik,pytanie);
    else if(liga==3)
        return przekaz_l1(druzyna,zawodnik,pytanie);
    else
        return przekaz_bl(druzyna,zawodnik,pytanie);
}
string Quizz::przekaz_pl(int druzyna, int zawodnik, int pytanie)
{
    if(druzyna==1)
    {
        wczytaj_PLmnc();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==2)
    {
        wczytaj_PLmnu();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==3)
    {
        wczytaj_PLlfc();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==4)
    {
        wczytaj_PLcfc();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==5)
    {
        wczytaj_PLlei();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==6)
    {
        wczytaj_PLwhu();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==7)
    {
        wczytaj_PLtot();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==8)
    {
        wczytaj_PLars();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==9)
    {
        wczytaj_PLleu();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==10)
    {
        wczytaj_PLeve();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==11)
    {
        wczytaj_PLasv();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==12)
    {
        wczytaj_PLncl();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==13)
    {
        wczytaj_PLwov();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==14)
    {
        wczytaj_PLcpl();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==15)
    {
        wczytaj_PLsth();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==16)
    {
        wczytaj_PLbri();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==17)
    {
        wczytaj_PLbur();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==18)
    {
        wczytaj_PLful();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==19)
    {
        wczytaj_PLwba();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else
    {
        wczytaj_PLshu();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
}
string Quizz::przekaz_sa(int druzyna, int zawodnik, int pytanie)
{
    if(druzyna==1)
    {
        wczytaj_SAint();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==2)
    {
        wczytaj_SAmil();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==3)
    {
        wczytaj_SAatl();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==4)
    {
        wczytaj_SAjuv();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==5)
    {
        wczytaj_SAnap();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==6)
    {
        wczytaj_SAlaz();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==7)
    {
        wczytaj_SArom();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==8)
    {
        wczytaj_SAsas();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==9)
    {
        wczytaj_SAsam();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==10)
    {
        wczytaj_SAver();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==11)
    {
        wczytaj_SAgen();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==12)
    {
        wczytaj_SAbol();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==13)
    {
        wczytaj_SAfio();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==14)
    {
        wczytaj_SAudi();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==15)
    {
        wczytaj_SAspe();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==16)
    {
        wczytaj_SAcag();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==17)
    {
        wczytaj_SAtor();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==18)
    {
        wczytaj_SAben();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==19)
    {
        wczytaj_SAcro();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else
    {
        wczytaj_SApar();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
}
string Quizz::przekaz_l1(int druzyna,int zawodnik,int pytanie)
{
    if (druzyna == 1)
    {
        wczytaj_L1lil();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 2)
    {
        wczytaj_L1psg();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 3)
    {
        wczytaj_L1mon();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 4)
    {
        wczytaj_L1lyo();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 5)
    {
        wczytaj_L1mar();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 6)
    {
        wczytaj_L1ren();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 7)
    {
        wczytaj_L1len();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 8)
    {
        wczytaj_L1mot();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 9)
    {
        wczytaj_L1nic();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 10)
    {
        wczytaj_L1met();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 11)
    {
        wczytaj_L1eti();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 12)
    {
        wczytaj_L1bor();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 13)
    {
        wczytaj_L1ang();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 14)
    {
        wczytaj_L1rei();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 15)
    {
        wczytaj_L1str();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 16)
    {
        wczytaj_L1lor();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 17)
    {
        wczytaj_L1bre();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 18)
    {
        wczytaj_L1nan();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if (druzyna == 19)
    {
        wczytaj_L1nim();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else
    {
        wczytaj_L1dij();
        return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
}
string Quizz::przekaz_bl(int druzyna,int zawodnik,int pytanie)
{
    if(druzyna==1)
    {
        wczytaj_BLbay();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==2)
    {
        wczytaj_BLrbl();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==3)
    {
        wczytaj_BLbod();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==4)
    {
        wczytaj_BLvfl();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==5)
    {
        wczytaj_BLein();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==6)
    {
        wczytaj_BLblv();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==7)
    {
        wczytaj_BLuni();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==8)
    {
        wczytaj_BLbom();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==9)
    {
        wczytaj_BLvfb();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==10)
    {
		wczytaj_BLscf();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==11)
    {
        wczytaj_BLtsg();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==12)
    {
        wczytaj_BLfsv();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==13)
    {
        wczytaj_BLfca();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==14)
    {
        wczytaj_BLher();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==15)
    {
        wczytaj_BLarm();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==16)
    {
        wczytaj_BLodk();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else if(druzyna==17)
    {
        wczytaj_BLwer();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
    else
    {
        wczytaj_BLsch();
		return przekaz_zawodnika(statystyki,zawodnik,pytanie);
    }
}
string Quizz::przekaz_zawodnika(string statystyki[567], int zawodnik, int pytanie)
{
    //wczytanie statystyk bramkarza
    for(int i=0;i<63;i++)
        Sbramkarz[i]=statystyki[i];

    //wczytanie statystyk obroncow
    for(int o=0;o<4;o++)
    {
        for(int ii=0;ii<51;ii++)
            Sobroncy[o][ii]=statystyki[o*51+63+ii];
    }

    //wczytanie statystyk zawodnikow z ofensywnych
    for(int p=0;p<6;p++)
    {
        for(int iii=0;iii<50;iii++)
            Sofensywny[p][iii]=statystyki[p*50+267+iii];
    }

    pozycja=ustal_pozycje(zawodnik);
    if(pozycja=="bramkarz")
    {
        //czyste konta
        if(pytanie==0)
            return Sbramkarz[43];
        //czerwone
        else if(pytanie==3)
            return Sbramkarz[62];
        //zolte
        else if(pytanie==4)
            return Sbramkarz[60];
        //wsytepy
        //else if(pytanie==5)
        else
            return  Sbramkarz[0];
    }
    else if(pozycja=="obronca")
    {
        num_z=zawodnik-2;

        //czyste konta
        if(pytanie==0)
            return Sobroncy[num_z][31];
        //czerwone
        else if(pytanie==3)
            return Sobroncy[num_z][50];
        //zolte
        else if(pytanie==4)
            return Sobroncy[num_z][48];
        //wystepy
        //else if(pytanie==5)
        else
            return Sobroncy[num_z][0];
    }
    else
    {
        num_z=zawodnik-6;

        //asysty
        if(pytanie==1)
            return Sofensywny[num_z][21];
        //bramki
        else if(pytanie==2)
            return Sofensywny[num_z][4];
        //czerwone
        else if(pytanie==3)
            return Sofensywny[num_z][49];
        //zolte
        else if(pytanie==4)
            return Sofensywny[num_z][47];
        //wystepy
        //else if(pytanie==5)
        else
            return Sofensywny[num_z][0];
    }
}
string Quizz::przekaz_imie(int liga,int druzyna,int zawodnik)
{
    if(liga==1)
        return imie_pl(druzyna,zawodnik);
    else if(liga==2)
        return imie_sa(druzyna,zawodnik);
    else if(liga==3)
        return imie_l1(druzyna,zawodnik);
    else
        return imie_bl(druzyna,zawodnik);
}
string Quizz::imie_pl(int druzyna, int zawodnik)
{
    if(druzyna==1)
    {
        wczytaj_PLmnc();
        return imiona[zawodnik-1];
    }
    else if(druzyna==2)
    {
        wczytaj_PLmnu();
        return imiona[zawodnik-1];
    }
    else if(druzyna==3)
    {
        wczytaj_PLlfc();
        return imiona[zawodnik-1];
    }
    else if(druzyna==4)
    {
        wczytaj_PLcfc();
        return imiona[zawodnik-1];
    }
    else if(druzyna==5)
    {
        wczytaj_PLlei();
        return imiona[zawodnik-1];
    }
    else if(druzyna==6)
    {
        wczytaj_PLwhu();
        return imiona[zawodnik-1];
    }
    else if(druzyna==7)
    {
        wczytaj_PLtot();
        return imiona[zawodnik-1];
    }
    else if(druzyna==8)
    {
        wczytaj_PLars();
        return imiona[zawodnik-1];
    }
    else if(druzyna==9)
    {
        wczytaj_PLleu();
        return imiona[zawodnik-1];
    }
    else if(druzyna==10)
    {
        wczytaj_PLeve();
        return imiona[zawodnik-1];
    }
    else if(druzyna==11)
    {
        wczytaj_PLasv();
        return imiona[zawodnik-1];
    }
    else if(druzyna==12)
    {
        wczytaj_PLncl();
        return imiona[zawodnik-1];
    }
    else if(druzyna==13)
    {
        wczytaj_PLwov();
        return imiona[zawodnik-1];
    }
    else if(druzyna==14)
    {
        wczytaj_PLcpl();
        return imiona[zawodnik-1];
    }
    else if(druzyna==15)
    {
        wczytaj_PLsth();
        return imiona[zawodnik-1];
    }
    else if(druzyna==16)
    {
        wczytaj_PLbri();
        return imiona[zawodnik-1];
    }
    else if(druzyna==17)
    {
        wczytaj_PLbur();
        return imiona[zawodnik-1];
    }
    else if(druzyna==18)
    {
        wczytaj_PLful();
        return imiona[zawodnik-1];
    }
    else if(druzyna==19)
    {
        wczytaj_PLwba();
        return imiona[zawodnik-1];
    }
    else
    {
        wczytaj_PLshu();
        return imiona[zawodnik-1];
    }
}
string Quizz::imie_sa(int druzyna, int zawodnik)
{
    if(druzyna==1)
    {
        wczytaj_SAint();
        return imiona[zawodnik-1];
    }
    else if(druzyna==2)
    {
        wczytaj_SAmil();
        return imiona[zawodnik-1];
    }
    else if(druzyna==3)
    {
        wczytaj_SAatl();
        return imiona[zawodnik-1];
    }
    else if(druzyna==4)
    {
        wczytaj_SAjuv();
        return imiona[zawodnik-1];
    }
    else if(druzyna==5)
    {
        wczytaj_SAnap();
        return imiona[zawodnik-1];
    }
    else if(druzyna==6)
    {
        wczytaj_SAlaz();
        return imiona[zawodnik-1];
    }
    else if(druzyna==7)
    {
        wczytaj_SArom();
        return imiona[zawodnik-1];
    }
    else if(druzyna==8)
    {
        wczytaj_SAsas();
        return imiona[zawodnik-1];
    }
    else if(druzyna==9)
    {
        wczytaj_SAsam();
        return imiona[zawodnik-1];
    }
    else if(druzyna==10)
    {
        wczytaj_SAver();
        return imiona[zawodnik-1];
    }
    else if(druzyna==11)
    {
        wczytaj_SAgen();
        return imiona[zawodnik-1];
    }
    else if(druzyna==12)
    {
        wczytaj_SAbol();
        return imiona[zawodnik-1];
    }
    else if(druzyna==13)
    {
        wczytaj_SAfio();
        return imiona[zawodnik-1];
    }
    else if(druzyna==14)
    {
        wczytaj_SAudi();
        return imiona[zawodnik-1];
    }
    else if(druzyna==15)
    {
        wczytaj_SAspe();
        return imiona[zawodnik-1];
    }
    else if(druzyna==16)
    {
        wczytaj_SAcag();
        return imiona[zawodnik-1];
    }
    else if(druzyna==17)
    {
        wczytaj_SAtor();
        return imiona[zawodnik-1];
    }
    else if(druzyna==18)
    {
        wczytaj_SAben();
        return imiona[zawodnik-1];
    }
    else if(druzyna==19)
    {
        wczytaj_SAcro();
        return imiona[zawodnik-1];
    }
    else
    {
        wczytaj_SApar();
        return imiona[zawodnik-1];
    }
}
string Quizz::imie_l1(int druzyna, int zawodnik)
{
    if (druzyna == 1)
    {
        wczytaj_L1lil();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 2)
    {
        wczytaj_L1psg();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 3)
    {
        wczytaj_L1mon();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 4)
    {
        wczytaj_L1lyo();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 5)
    {
        wczytaj_L1mar();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 6)
    {
        wczytaj_L1ren();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 7)
    {
        wczytaj_L1len();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 8)
    {
        wczytaj_L1mot();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 9)
    {
        wczytaj_L1nic();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 10)
    {
        wczytaj_L1met();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 11)
    {
        wczytaj_L1eti();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 12)
    {
        wczytaj_L1bor();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 13)
    {
        wczytaj_L1ang();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 14)
    {
        wczytaj_L1rei();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 15)
    {
        wczytaj_L1str();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 16)
    {
        wczytaj_L1lor();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 17)
    {
        wczytaj_L1bre();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 18)
    {
        wczytaj_L1nan();
        return imiona[zawodnik-1];
    }
    else if (druzyna == 19)
    {
        wczytaj_L1nim();
        return imiona[zawodnik-1];
    }
    else
    {
        wczytaj_L1dij();
        return imiona[zawodnik-1];
    }
}
string Quizz::imie_bl(int druzyna, int zawodnik)
{
    if(druzyna==1)
    {
        wczytaj_BLbay();
		return imiona[zawodnik-1];
    }
    else if(druzyna==2)
    {
        wczytaj_BLrbl();
		return imiona[zawodnik-1];
    }
    else if(druzyna==3)
    {
        wczytaj_BLbod();
		return imiona[zawodnik-1];
    }
    else if(druzyna==4)
    {
        wczytaj_BLvfl();
		return imiona[zawodnik-1];
    }
    else if(druzyna==5)
    {
        wczytaj_BLein();
		return imiona[zawodnik-1];
    }
    else if(druzyna==6)
    {
        wczytaj_BLblv();
		return imiona[zawodnik-1];
    }
    else if(druzyna==7)
    {
        wczytaj_BLuni();
		return imiona[zawodnik-1];
    }
    else if(druzyna==8)
    {
        wczytaj_BLbom();
		return imiona[zawodnik-1];
    }
    else if(druzyna==9)
    {
        wczytaj_BLvfb();
		return imiona[zawodnik-1];
    }
    else if(druzyna==10)
    {
		wczytaj_BLscf();
		return imiona[zawodnik-1];
    }
    else if(druzyna==11)
    {
        wczytaj_BLtsg();
		return imiona[zawodnik-1];
    }
    else if(druzyna==12)
    {
        wczytaj_BLfsv();
		return imiona[zawodnik-1];
    }
    else if(druzyna==13)
    {
        wczytaj_BLfca();
		return imiona[zawodnik-1];
    }
    else if(druzyna==14)
    {
        wczytaj_BLher();
		return imiona[zawodnik-1];
    }
    else if(druzyna==15)
    {
        wczytaj_BLarm();
		return imiona[zawodnik-1];
    }
    else if(druzyna==16)
    {
        wczytaj_BLodk();
		return imiona[zawodnik-1];
    }
    else if(druzyna==17)
    {
        wczytaj_BLwer();
		return imiona[zawodnik-1];
    }
    else
    {
        wczytaj_BLsch();
		return imiona[zawodnik-1];
    }
}
string Quizz::przekaz_nazwisko(int liga,int druzyna,int zawodnik)
{
    if(liga==1)
    return nazwisko_pl(druzyna,zawodnik);
    else if(liga==2)
    return nazwisko_sa(druzyna,zawodnik);
    else if(liga==3)
    return nazwisko_l1(druzyna,zawodnik);
    else
    return nazwisko_bl(druzyna,zawodnik);
}
string Quizz::nazwisko_pl(int druzyna, int zawodnik)
{
    if(druzyna==1)
    {
        wczytaj_PLmnc();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==2)
    {
        wczytaj_PLmnu();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==3)
    {
        wczytaj_PLlfc();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==4)
    {
        wczytaj_PLcfc();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==5)
    {
        wczytaj_PLlei();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==6)
    {
        wczytaj_PLwhu();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==7)
    {
        wczytaj_PLtot();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==8)
    {
        wczytaj_PLars();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==9)
    {
        wczytaj_PLleu();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==10)
    {
        wczytaj_PLeve();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==11)
    {
        wczytaj_PLasv();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==12)
    {
        wczytaj_PLncl();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==13)
    {
        wczytaj_PLwov();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==14)
    {
        wczytaj_PLcpl();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==15)
    {
        wczytaj_PLsth();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==16)
    {
        wczytaj_PLbri();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==17)
    {
        wczytaj_PLbur();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==18)
    {
        wczytaj_PLful();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==19)
    {
        wczytaj_PLwba();
        return nazwiska[zawodnik-1];
    }
    else
    {
        wczytaj_PLshu();
        return nazwiska[zawodnik-1];
    }
}
string Quizz::nazwisko_sa(int druzyna,int zawodnik)
{
    if(druzyna==1)
    {
        wczytaj_SAint();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==2)
    {
        wczytaj_SAmil();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==3)
    {
        wczytaj_SAatl();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==4)
    {
        wczytaj_SAjuv();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==5)
    {
        wczytaj_SAnap();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==6)
    {
        wczytaj_SAlaz();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==7)
    {
        wczytaj_SArom();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==8)
    {
        wczytaj_SAsas();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==9)
    {
        wczytaj_SAsam();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==10)
    {
        wczytaj_SAver();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==11)
    {
        wczytaj_SAgen();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==12)
    {
        wczytaj_SAbol();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==13)
    {
        wczytaj_SAfio();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==14)
    {
        wczytaj_SAudi();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==15)
    {
        wczytaj_SAspe();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==16)
    {
        wczytaj_SAcag();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==17)
    {
        wczytaj_SAtor();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==18)
    {
        wczytaj_SAben();
        return nazwiska[zawodnik-1];
    }
    else if(druzyna==19)
    {
        wczytaj_SAcro();
        return nazwiska[zawodnik-1];
    }
    else
    {
        wczytaj_SApar();
        return nazwiska[zawodnik-1];
    }
}
string Quizz::nazwisko_l1(int druzyna,int zawodnik)
{
    if (druzyna == 1)
    {
        wczytaj_L1lil();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 2)
    {
        wczytaj_L1psg();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 3)
    {
        wczytaj_L1mon();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 4)
    {
        wczytaj_L1lyo();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 5)
    {
        wczytaj_L1mar();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 6)
    {
        wczytaj_L1ren();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 7)
    {
        wczytaj_L1len();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 8)
    {
        wczytaj_L1mot();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 9)
    {
        wczytaj_L1nic();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 10)
    {
        wczytaj_L1met();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 11)
    {
        wczytaj_L1eti();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 12)
    {
        wczytaj_L1bor();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 13)
    {
        wczytaj_L1ang();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 14)
    {
        wczytaj_L1rei();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 15)
    {
        wczytaj_L1str();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 16)
    {
        wczytaj_L1lor();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 17)
    {
        wczytaj_L1bre();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 18)
    {
        wczytaj_L1nan();
        return nazwiska[zawodnik-1];
    }
    else if (druzyna == 19)
    {
        wczytaj_L1nim();
        return nazwiska[zawodnik-1];
    }
    else
    {
        wczytaj_L1dij();
        return nazwiska[zawodnik-1];
    }
}
string Quizz::nazwisko_bl(int druzyna,int zawodnik)
{
    if(druzyna==1)
    {
        wczytaj_BLbay();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==2)
    {
        wczytaj_BLrbl();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==3)
    {
        wczytaj_BLbod();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==4)
    {
        wczytaj_BLvfl();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==5)
    {
        wczytaj_BLein();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==6)
    {
        wczytaj_BLblv();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==7)
    {
        wczytaj_BLuni();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==8)
    {
        wczytaj_BLbom();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==9)
    {
        wczytaj_BLvfb();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==10)
    {
		wczytaj_BLscf();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==11)
    {
        wczytaj_BLtsg();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==12)
    {
        wczytaj_BLfsv();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==13)
    {
        wczytaj_BLfca();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==14)
    {
        wczytaj_BLher();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==15)
    {
        wczytaj_BLarm();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==16)
    {
        wczytaj_BLodk();
		return nazwiska[zawodnik-1];
    }
    else if(druzyna==17)
    {
        wczytaj_BLwer();
		return nazwiska[zawodnik-1];
    }
    else
    {
        wczytaj_BLsch();
		return nazwiska[zawodnik-1];
    }
}

int Quizz::wynik_quizzu(int wynik)
{
    int a;
    cout<<"Udalo ci sie odgadnac "<<wynik<<" na 3 statystyki"<<endl;
    cout<<endl;
    cout<<"Aby wziac udzial w quizzie ponownie wybierz 1"<<endl;
    cout<<"Aby wyjsc wpisz 0"<<endl;
    cin>>a;
    if((a!=0)&&(a!=1))
    {
        while((a!=0)&&(a!=1))
        {
            cout<<"Podano bledne polecenie"<<endl;
            cout<<"Aby wziac udzial w quizzie wybierz 1"<<endl;
            cout<<"Aby wyjsc wpisz 0"<<endl;
            cin>>a;
        }
    }
    return a;
}
