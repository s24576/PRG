#include <iostream>
#include <fstream>
#include <string>
#include "staty.h"

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    Statystyka test;
    test.wczytaj_lige();
    test.czysc_ekran();
    if(test.liga==1)
        {
            test.wczytaj_pl();
            cout<<test.druzyna<<endl;
            test.czysc_ekran();
                if(test.druzyna==1)
                {
                    cout<<"wybrano Liverpool"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_lfc();
                }
                if(test.druzyna==2)
                {
                    cout<<"wybrano Manchester City"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_mnc();
                }
                if(test.druzyna==3)
                {
                    cout<<"wybrano Manchester United"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_mnu();
                }
                if(test.druzyna==4)
                {
                    cout<<"wybrano Chelsea F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_cfc();
                }
                if(test.druzyna==5)
                {
                    cout<<"wybrano Leicester City"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_lei();
                }
                if(test.druzyna==6)
                {
                    cout<<"wybrano Tottenham Hotspur"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_tot();
                }
                if(test.druzyna==7)
                {
                    cout<<"wybrano Tottenham Hotspur"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_wov();
                }
                if(test.druzyna==8)
                {
                    cout<<"wybrano Arsenal F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_ars();
                }
                if(test.druzyna==9)
                {
                    cout<<"wybrano Sheffield United"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_shu();
                }
                if(test.druzyna==10):
                {
                    cout<<"wybrano Burnley F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_bur();
                }
                if(test.druzyna==11)
                {
                    cout<<"wybrano Southampton F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_sth();
                }
                if(test.druzyna==12)
                {
                    cout<<"wybrano Everton F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_eve();
                }
                if(test.druzyna==13)
                {
                    cout<<"wybrano Newcastle United"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_ncl();
                }
                if(test.druzyna==14)
                {
                    cout<<"wybrano Crystal Palace"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_cpl();
                }
                if(test.druzyna==15)
                {
                    cout<<"wybrano Brighton & Hove Albion"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_bri();
                }
                if(test.druzyna==16)
                {
                    cout<<"wybrano West Ham United"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_whu();
                }
                if(test.druzyna==17)
                {
                    cout<<"wybrano Aston Villa"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_asv();
                }
                if(test.druzyna==18)
                {
                    cout<<"wybrano AFC Bournemouth"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_bou();
                }
                if(test.druzyna==19)
                {
                    cout<<"wybrano Watford F.C."<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_wat();
                }
                if(test.druzyna==20)
                {
                    cout<<"wybrano Norwich City"<<endl;
                    cout<<endl;
                    cout<<endl;
                    test.wczytaj_nor();
                }
            //case 21:
            //{
               //funkcja cofajaca do wyboru ligi
            //}
            }*/
    }
    return 0;
}
