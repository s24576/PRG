#include <iostream>
#include <fstream>
#include <string>
#include "staty.h"

using namespace std;

int main()
{
    Statystyka test;
    test.wybierz_format();
    test.wczytaj_lige();
    test.czysc_ekran();
    //if(test.liga==0)
    //test.wczytaj_lige();
    if(test.liga==1)
        {
            cout<<"Wybrano Premier League"<<endl;
            cout<<endl;
            cout<<endl;
            test.wczytaj_pl();
            //cout<<test.druzyna<<endl;
            test.czysc_ekran();
            while(test.druzyna<21)
            {
                if(test.druzyna==0)
                {
                    cout<<"Wybrano Premier League"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_pl();
                    test.czysc_ekran();
                }
                if(test.druzyna==1)
                {
                    cout<<"wybrano Manchester City"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_mnc();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==2)
                {
                    cout<<"wybrano Manchester United"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_mnu();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==3)
                {
                    cout<<"wybrano Liverpool"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_lfc();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==4)
                {
                    cout<<"wybrano Chelsea F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_cfc();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==5)
                {
                    cout<<"wybrano Leicester City"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_lei();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==6)
                {
                    cout<<"wybrano West Ham United"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_whu();
                    test.czysc_ekran();
                    test.druzyna=0;

                }
                if(test.druzyna==7)
                {
                    cout<<"wybrano Tottenham Hotspur"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_tot();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==8)
                {
                    cout<<"wybrano Arsenal F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_ars();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==9)
                {
                    cout<<"wybrano Leeds United F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_leu();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==10)
                {
                    cout<<"wybrano Everton F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_eve();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==11)
                {
                    cout<<"wybrano Aston Villa"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_asv();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==12)
                {
                    cout<<"wybrano Newcastle United"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_ncl();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==13)
                {
                    cout<<"wybrano Wolverhampton Wanderers"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_wov();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==14)
                {
                    cout<<"wybrano Crystal Palace"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_cpl();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==15)
                {
                    cout<<"wybrano Southampton F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_sth();
                    test.czysc_ekran();
                    test.druzyna=0;

                }
                if(test.druzyna==16)
                {
                    cout<<"wybrano Brighton & Hove Albion"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_bri();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==17)
                {
                    cout<<"wybrano Burnley F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_bur();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==18)
                {
                    cout<<"wybrano Fulham F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_ful();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==19)
                {
                    cout<<"wybrano West Bromwich Albion F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_wba();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
                if(test.druzyna==20)
                {
                    cout<<"wybrano Sheffield United"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_shu();
                    test.czysc_ekran();
                    test.druzyna=0;
                }
            }
            //test.liga=0;
        }
    if(test.liga==2)
    {
        cout<<"Wybrano Serie A"<<endl;
        cout<<endl;
        cout<<endl;
        //test.wczytaj_sa();
    }
    return 0;
}
