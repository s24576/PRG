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
if( argc == 4 )
{
//dodawanie
    if( args[3] == "+" )
    {
        int a,b,wynik=0;
        a=std::stoi(args[1]);
        b=std::stoi(args[2]);
        wynik=a+b;
        std::cout<<wynik<<"\n";
    }
//odejmowanie
    if( args[3] == "-" )
    {
        int a,b,wynik=0;
        a=std::stoi(args[1]);
        b=std::stoi(args[2]);
        wynik=a-b;
        std::cout<<wynik<<"\n";
    }
//mnozenie
    if( args[3]=="*")
    {
        int a,b,wynik=0;
        a=std::stoi(args[1]);
        b=std::stoi(args[2]);
        wynik=a*b;
        std::cout<<wynik<<"\n";
    }
//reszta z dzielenia
    if ( args[3]=="%")
    {
        int a,b,wynik=0;
        a=std::stoi(args[1]);
        b=std::stoi(args[2]);
        wynik=a%b;
        std::cout<<wynik<<"\n";
    }
//dzielnie c
    if( args[3] == "//")
    {
        int a,b,wynik=0;
        a=std::stoi(args[1]);
        b=std::stoi(args[2]);
        if(b==0)
            std::cout<<"blad danych"<<"\n";
        wynik=a+b;
        std::cout<<wynik<<"\n";
    }
//dzielnie niec
    if ( args[3] == "/")
    {
        float a,b,wynik=0;
        a=std::stof(args[1]);
        b=std::stof(args[2]);
        if(b==0)
            std::cout<<"blad danych"<<"\n";
        wynik=a/b;
        std::cout<<wynik<<"\n";
    }
//potegowanie
    if ( args[3] == "**")
    {
        int a,b,wynik=0;
        a=std::stoi(args[1]);
        b=std::stoi(args[2]);
        wynik=a;
        for(int i=1;i<=b;i++)
        {
            wynik=wynik*a;
        }
        std::cout<<wynik<<"\n";
    }
//pierwiatek
    if ( args[2] == "sqrt")
    {
        float a,wynik=0;
        a=std::stof(args[1]);
        wynik = sqrt (a);
        std::cout<<wynik<<"\n";
    }
//tryb wolny
    if (args[2] == "odw" )
    {
        float a,wynik=0;
        a=std::stof(args[1]);
        wynik = 1/a;
        std::cout<<wynik<<"/n";
    }
}
else
    std::cout<<"blad danych"<<"\n";
return 0;
}
