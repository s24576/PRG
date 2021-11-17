#include <iostream>
#include <string>
#include "auto.h"

Samochod::Samochod(std::string a, std::string b, int x, int y)
{
    nazwa=a;
    model=b;
    rok_p=x;
    przebieg=y;
}

Samochod::~Samochod()
{
    std::cout<<"samochod sie rozpadl"<<"\n";
}

int Samochod::ustal_cena_w()
{
    std::cout<<"podaj proponowana cene samochodu"<<"\n";
    std::cin>>cena_p;
    if(cena_p-(2021-rok_p)*10000-przebieg*3<0)
    {
        while(cena_p-(2021-rok_p)*10000-przebieg*3<0)
        {
            std::cout<<"podaj proponowana cene samochodu bo podana jest za mala"<<"\n";
            std::cin>>cena_p;
        }
    }
    return cena_p;
}
int Samochod::ustal_cena_k()
{
    cena_k=cena_p-((2021-rok_p)*10000)-(przebieg*3);
    return cena_k;
}
void Samochod::wyswietl_oferte()
{
    std::cout<<"marka samochodu: "<<nazwa<<"\n";
    std::cout<<"model samochodu: "<<model<<"\n";
    std::cout<<"rok produkcji: "<<rok_p<<"\n";
    std::cout<<"cena proponowana: "<<cena_p<<"\n";
    std::cout<<"cena koncowa: "<<cena_k<<"\n";
}
