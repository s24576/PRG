#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <cmath>

auto main (int argc, char* argv[]) -> int
{
auto args = std::vector <std::string> {};
std::copy_n(argv, argc, std::back_inserter(args));
//rezerwowy
/*std::string T [3]= {};
for(int i=1;i<4;i++)
{
 T[i] = argv[i];
}*/
 //std::vector < std::string > dane;
 //for(int i=1;i<=argc;i++)
 //{
   // dane.push_back( argv[i] );
 //}
//wyswietlanie
//for (auto const & each : args){
//std::cout<<each<<"\n";

/*std::string tab[3];
for(int i=0;i<3;i++)
{
    std::cout<<"podaj dzialanie"<<"\n";
    getline( std::cin, tab[i] );
}*/
std::string znak;
if( argc == 3)
{
    znak=std::string(argv[2]);
  //pierwiatek
    if ( znak == "sqrt")
    {
        float a,wynik=0;
        a=std::stof(argv[1]);
        wynik = sqrt (a);
        std::cout<<wynik<<"\n";
    }
    //tryb wolny
    if ( znak == "odw" )
    {
        float a,wynik=0;
        a=std::stof(argv[1]);
        wynik = 1/a;
        std::cout<<wynik<<"\n";
    }

}
if( argc == 4 )
{
    znak=std::string(argv[3]);
//dodawanie
    if( znak == "+" )
    {
        int a,b,wynik=0;
        a=std::stof(argv[1]);
        b=std::stof(argv[2]);
        wynik=a+b;
        std::cout<<wynik<<"\n";
    }
//odejmowanie
    if( znak == "-" )
    {
        int a,b,wynik=0;
        a=std::stof(argv[1]);
        b=std::stof(argv[2]);
        wynik=a-b;
        std::cout<<wynik<<"\n";
    }
//mnozenie
    if( znak =="mn")
    {
        int a,b,wynik=0;
        a=std::stof(argv[1]);
        b=std::stof(argv[2]);
        wynik=a*b;
        std::cout<<wynik<<"\n";
    }
//reszta z dzielenia
    if ( znak == "rzd")
    {
        int a,b,wynik=0;
        a=std::stof(argv[1]);
        b=std::stof(argv[2]);
        wynik=a%b;
        std::cout<<wynik<<"\n";
    }
//dzielnie c
    if( znak == "//")
    {
        int a,b,wynik=0;
        a=std::stof(argv[1]);
        b=std::stof(argv[2]);
        if(b==0)
            {
                std::cout<<"blad danych"<<"\n";
                while(b==0)
                {
                    std::cout<<"podaj poprawne dane";
                    std::cin>>b;
                }
            }
        wynik=a/b;
        std::cout<<wynik<<"\n";
    }
//dzielnie niec
    if ( znak == "/")
    {
        float a,b,wynik=0;
        a=std::stof(argv[1]);
        b=std::stof(argv[2]);
        if(b==0)
            {
                std::cout<<"blad danych"<<"\n";
                while(b==0)
                {
                    std::cout<<"podaj poprawne dane";
                    std::cin>>b;
                }
            }
        wynik=a/b;
        std::cout<<wynik<<"\n";
    }
//potegowanie
    if ( znak == "^")
    {
        int a,b,wynik;
        a=std::stof(argv[1]);
        b=std::stof(argv[2]);
        wynik=1;
        for(int i=1;i<=b;i++)
        {
            wynik=wynik*a;
        }
        std::cout<<wynik<<"\n";
    }
}
if(argc!=3 && argc!=4)
    std::cout<<"blad danych"<<"\n";
return 0;
}
