#include <iostream>
#include <fstream>
#include <string>
#include "staty.h"

using namespace std;

/*Statystyka::Statystyka()
{
    //ekran wejsciowy
    //a=liga;
    //b=druzyna;
    //c=zawodnik;
    cout<<"siemanko"<<endl;
}*/

void Uniwersalne::czysc_ekran()
{
    system("cls");
}

int Uniwersalne::wczytaj_lige()
{
    fstream ligi;
    string menu1,menu2;
    ligi.open("ligi.txt",ios::in);
    for(int i=0;i<2;i++)
    {
        ligi>>menu1>>menu2;
        cout<<i+1<<". "<<menu1<<" "<<menu2<<endl;
    }
    cin>>liga;
    cout<<liga<<endl;
    ligi.close();
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
    if(zawodnik>=2&&zawodnik<=5)
        return "obronca";
    if(zawodnik>=6&&zawodnik<=9)
        return "pomocnik";
    if(zawodnik==10||zawodnik==11)
        return "napastnik";
}

void Uniwersalne::wybierz_format()
{
    cout<<"wybierz format przedstawiania statystyk"<<endl;
    cout<<"p -> pe³ne"<<endl;
    cout<<"k -> kluczowe dla pozycji zawodnika"<<endl;
    cout<<"o -> tylko podstawowe dla wszystkich takie same"<<endl;
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
            Sobroncy[o][ii]=statystyki[o*51+63];
    }

    //wczytanie statystyk zawodnikow z ofensywnych
    for(int p=0;p<6;p++)
    {
        for(int iii=0;iii<50;iii++)
            Staty[p][iii]=statystyki[p*50+267];
    }

    //wymagane przed bledem wpisania 0!!!
    zawodnik=1;

    cout<<"wybierz zawodnika poprzez wpisanie numeru poprzedzajacego jego imie i nazwisko (aby wyjsc wpisz liczbe wieksza niz 11)"<<endl;
    while(zawodnik<12&&zawodnik>0)
          {
                cin>>zawodnik;
                pozycja=ustal_pozycje(zawodnik);
                cout<<"wybrany zawodnik to: "<<imiona[zawodnik-1]<<" "<<nazwiska[zawodnik-1]<<endl;
                cout<<"pozycja: "<<pozycja<<endl;

                if(pozycja=="bramkarz")
                pokaz_statystyki_bramkarza(Sbramkarz,format);

          }
}
//PREMIER LEAGUE
int Statystyka::wczytaj_pl()
{
    nazwa_ligi="Premier league";
    fstream premier;
    string d1,d2,cyf;
    premier.open("PL.txt",ios::in);
    for(int pl=0; pl<20; ++pl)
    {
        premier>>d1>>d2;
        cout<<pl+1<<". "<<d1<<" "<<d2<<endl;
    }
    premier.close();
    cin>>druzyna;
    cout<<druzyna<<endl;
    return druzyna;
}

//1
void Statystyka::wczytaj_mnc()
{
    //int ob=0,po=0,na=0;
    //string bramkarz;
    //string obroncy[4];
    //string pomocnicy[4];
    //string napastnicy[2];
    nazwa_druzyny="Manchester City";
    fstream mnc;
    mnc.open("city.txt",ios::in);
    for(int man_c=0;man_c<11;man_c++)
    {
        mnc>>i_z>>n_z;
        imiona[man_c]=i_z;
        nazwiska[man_c]=n_z;
    }
    mnc.close();

    fstream scity;
    scity.open("scity.txt",ios::in);
    for(int sman_c=0;sman_c<567;sman_c++)
    {
        scity>>staty;
        statystyki[sman_c]=staty;
    }
    wyswietl_druzyne(imiona,nazwiska);
    wyswietl_statystyki(statystyki,imiona,nazwiska);
}
//2
void Statystyka::wczytaj_mnu()
{
    fstream mnu;
    mnu.open("united.txt",ios::in);
    for(int man_u=0;man_u<11;man_u++)
    {
        mnu>>i_z>>n_z;
        imiona[man_u]=i_z;
        nazwiska[man_u]=n_z;
    }
    mnu.close();

    fstream smnu;
    smnu.open("sunited.txt",ios::in);
    for(int sman_u=0;sman_u<567;sman_u++)
    {
        smnu>>staty;
        statystyki[sman_u]=staty;
    }
    mnu.close();
}
//3
void Statystyka::wczytaj_lfc()
{
    fstream lfc;
    lfc.open("liverpool.txt",ios::in);
    for(int liverpool=0;liverpool<11;liverpool++)
    {
        lfc>>i_z>>n_z;
        imiona[liverpool]=i_z;
        imiona[liverpool]=n_z;
    }
    lfc.close();

    fstream slfc;
    slfc.open("liverpool.txt",ios::in);
    for(int sliverpool=0;sliverpool<567;sliverpool++)
    {
        slfc>>staty;
        statystyki[sliverpool]=staty;
    }
    slfc.close();
}
//4
void Statystyka::wczytaj_cfc()
{
    fstream cfc;
    cfc.open("chelsea.txt",ios::in);
    for(int chelsea=0;chelsea<11;chelsea++)
    {
        cfc>>i_z>>n_z;
        imiona[chelsea]=i_z;
        nazwiska[chelsea]=n_z;
    }
    cfc.close();

    fstream scfc;
    scfc.open("schelsea.txt",ios::in);
    for(int schelsea=0;schelsea<567;schelsea++)
    {
        scfc>>staty;
        statystyki[schelsea]=staty;
    }
    scfc.close();
}
//5
void Statystyka::wczytaj_lei()
{
    fstream lei;
    lei.open("leicester.txt",ios::in);
    for(int leicester=0;leicester<11;leicester++)
    {
        lei>>i_z>>n_z;
        imiona[leicester]=i_z;
        nazwiska[leicester]=n_z;
    }
    lei.close();
    fstream slei;
    slei.open("sleicester.txt",ios::in);
    for(int sleicester=0;sleicester<567;sleicester++)
    {
        slei>>staty;
        statystyki[sleicester]=staty;
    }
    slei.close();
}
//6
void Statystyka::wczytaj_whu()
{
    fstream whu;
    whu.open("whu.txt",ios::in);
    for(int whun=0;whun<11;whun++)
    {
        whu>>i_z>>n_z;
        imiona[whun]=i_z;
        nazwiska[whun]=n_z;
    }
    whu.close();

    fstream swhu;
    swhu.open("swhu.txt",ios::in);
    for(int swhun=0;swhun<567;swhun++)
    {
        swhu>>staty;
        statystyki[swhun]=staty;
    }
    swhu.close();
}
//7
void Statystyka::wczytaj_tot()
{
    fstream tot;
    tot.open("tottenham.txt",ios::in);
    for(int tottenham=0;tottenham<11;tottenham++)
    {
        tot>>i_z>>n_z;
        imiona[tottenham]=i_z;
        nazwiska[tottenham]=n_z;
    }
    tot.close();

    fstream stot;
    stot.open("stottenham.txt",ios::in);
    for(int stottenham=0;stottenham<567;stottenham++)
    {
        stot>>staty;
        statystyki[stottenham]=staty;
    }
    stot.close();
}
//8
void Statystyka::wczytaj_ars()
{
    fstream ars;
    ars.open("arsenal.txt",ios::in);
    for(int arsenal=0;arsenal<11;arsenal++)
    {
        ars>>i_z>>n_z;
        imiona[arsenal]=i_z;
        nazwiska[arsenal]=n_z;
    }
    ars.close();

    fstream sars;
    sars.open("sarsenal.txt",ios::in);
    for(int sarsenal=0;sarsenal<567;sarsenal++)
    {
        sars>>staty;
        statystyki[sarsenal]=staty;
    }
    sars.close();
}
//9
void Statystyka::wczytaj_leu()
{
    fstream leu;
    leu.open("leeds.txt",ios::in);
    for(int leeds=0;leeds<11;leeds++)
    {
        leu>>i_z>>n_z;
        imiona[leeds]=i_z;
        nazwiska[leeds]=n_z;
    }
    leu.close();
    fstream sleu;
    sleu.open("sleeds.txt",ios::in);
    for(int sleeds=0;sleeds<567;sleeds++)
    {
        sleu>>staty;
        statystyki[sleeds]=staty;
    }
    sleu.close();
}
//10
void Statystyka::wczytaj_eve()
{
    fstream eve;
    eve.open("everton.txt",ios::in);
    for(int everton=0;everton<11;everton++)
    {
        eve>>i_z>>n_z;
        imiona[everton]=i_z;
        nazwiska[everton]=n_z;
    }
    eve.close();

    fstream seve;
    seve.open("severton.txt",ios::in);
    for(int severton=0;severton<567;severton++)
    {
        seve>>staty;
        statystyki[severton]=staty;
    }
    seve.close();
}
//11
void Statystyka::wczytaj_asv()
{
    fstream asv;
    asv.open("villa.txt",ios::in);
    for(int villa=0;villa<11;villa++)
    {
        asv>>i_z>>n_z;
        imiona[villa]=i_z;
        nazwiska[villa]=n_z;
    }
    asv.close();
    fstream sasv;
    sasv.open("svilla.txt",ios::in);
    for(int svilla=0;svilla<5678;svilla++)
    {
        asv>>staty;
        statystyki[svilla]=staty;
    }
    sasv.close();
}
//12
void Statystyka::wczytaj_ncl()
{
    fstream ncl;
    ncl.open("newcastle.txt",ios::in);
    for(int newcastle=0;newcastle<11;newcastle++)
    {
        ncl>>i_z>>n_z;
        imiona[newcastle]=i_z;
        nazwiska[newcastle]=n_z;
    }
    ncl.close();
    fstream sncl;
    sncl.open("snewcastle.txt",ios::in);
    for(int snewcastle=0;snewcastle<567;snewcastle++)
    {
        sncl>>staty;
        statystyki[snewcastle]=staty;
    }
    sncl.close();
}
//13
void Statystyka::wczytaj_wov()
{
    fstream wov;
    wov.open("wolverhampton.txt",ios::in);
    for(int wolverhampton=0;wolverhampton<11;wolverhampton++)
    {
        wov>>i_z>>n_z;
        imiona[wolverhampton]=i_z;
        nazwiska[wolverhampton]=n_z;
    }
    wov.close();

    fstream swov;
    swov.open("swolverhampton.txt",ios::in);
    for(int swolverhampton=0;swolverhampton<567;swolverhampton++)
    {
        swov>>staty;
        statystyki[swolverhampton]=staty;
    }
    wov.close();
}
//14
void Statystyka::wczytaj_cpl()
{
    fstream cpl;
    cpl.open("crystal.txt",ios::in);
    for(int crystal=0;crystal<11;crystal++)
    {
        cpl>>i_z>>n_z;
        imiona[crystal]=i_z;
        nazwiska[crystal]=n_z;
    }
    cpl.close();

    fstream scpl;
    scpl.open("scrystal.txt",ios::in);
    for(int scrystal=0;scrystal<567;scrystal++)
    {
        scpl>>staty;
        statystyki[scrystal]=staty;
    }
    scpl.close();
}
//15
void Statystyka::wczytaj_sth()
{
    fstream sth;
    sth.open("southampton.txt",ios::in);
    for(int southampton=0;southampton<11;southampton++)
    {
        sth>>i_z>>n_z;
        imiona[southampton]=i_z;
        nazwiska[southampton]=n_z;
    }
    sth.close();
    fstream ssth;
    ssth.open("ssouthampton.txt",ios::in);
    for(int ssouthampton=0;ssouthampton<567;ssouthampton++)
    {
        sth>>staty;
        statystyki[ssouthampton]=staty;
    }
    sth.close();
}
//16
void Statystyka::wczytaj_bri()
{
    fstream bri;
    bri.open("brighton.txt",ios::in);
    for(int brighton=0;brighton<11;brighton++)
    {
        bri>>i_z>>n_z;
        imiona[brighton]=i_z;
        nazwiska[brighton]=n_z;
    }
    bri.close();

    fstream sbri;
    sbri.open("sbrighton.txt",ios::in);
    for(int sbrighton=0;sbrighton<567;sbrighton++)
    {
        sbri>>staty;
        statystyki[sbrighton]=staty;
    }
    sbri.close();
}
//17
void Statystyka::wczytaj_bur()
{
    fstream bur;
    bur.open("burnley.txt",ios::in);
    for(int burnley=0;burnley<11;burnley++)
    {
        bur>>i_z>>n_z;
        imiona[burnley]=i_z;
        nazwiska[burnley]=n_z;
    }
    bur.close();

    fstream sbur;
    sbur.open("sburnley.txt",ios::in);
    for(int sburnley=0;sburnley<567;sburnley++)
    {
        sbur>>staty;
        statystyki[sburnley]=staty;
    }
    bur.close();
}
//18
void Statystyka::wczytaj_ful()
{
    fstream ful;
    ful.open("fulham.txt",ios::in);
    for(int fulham=0;fulham<11;fulham++)
    {
        ful>>i_z>>n_z;
        imiona[fulham]=i_z;
        nazwiska[fulham]=n_z;
    }
    ful.close();

    fstream sful;
    sful.open("sfulham.txt",ios::in);
    for(int sfulham=0;sfulham<567;sfulham++)
    {
        sful>>staty;
        statystyki[sfulham]=staty;
    }
    sful.close();
}
//19
void Statystyka::wczytaj_wba()
{
    fstream wba;
    wba.open("wba.txt",ios::in);
    for(int brom=0;brom<11;brom++)
    {
        wba>>i_z>>n_z;
        imiona[brom]=i_z;
        nazwiska[brom]=n_z;
    }
    wba.close();

    fstream swba;
    swba.open("wba.txt",ios::in);
    for(int sbrom=0;sbrom<567;sbrom++)
    {
        wba>>staty;
        statystyki[sbrom]=staty;
    }
    swba.close();
}
//20
void Statystyka::wczytaj_shu()
{
    fstream shu;
    shu.open("sheffield.txt",ios::in);
    for(int sheffield=0;sheffield<11;sheffield++)
    {
        shu>>i_z>>n_z;
        imiona[sheffield]=i_z;
        nazwiska[sheffield]=n_z;
    }
    shu.close();

    fstream sshu;
    sshu.open("ssheffield.txt",ios::in);
    for(int ssheffield=0;ssheffield<567;ssheffield++)
    {
        shu>>staty;
        statystyki[ssheffield]=staty;
    }
    sshu.close();
}
