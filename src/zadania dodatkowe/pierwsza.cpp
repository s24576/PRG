#include <iostream>
#include <cmath>

int main()
{
    int liczba,a,licznik=0,l_w=0;
    std::cout<<"Podaj liczbe"<<"\n";
    std::cin>>liczba;
    a=sqrt(liczba);
    //std::cout<<a;
    for(int i=2;i<=a;++i)
    {
        if(liczba%i==0)
        {
        licznik++;
        }
        ++l_w;
    }
    if(licznik==0)
    {
        std::cout<<"Podana liczba jest pierwsza"<<"\n";
    }
    else
    {
        std::cout<<"Podana liczba nie jest pierwsza"<<"\n";
    }
    std::cout<<"Liczba iteracji petli for "<<l_w<<"\n";
    return 0;
}
