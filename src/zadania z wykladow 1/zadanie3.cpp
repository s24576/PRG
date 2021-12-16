#include <iostream>

int main()
{
    std::string a,b;

    std::cout<<"podaj imie nr 1"<<std::endl;
    std::cin>>a;

    std::cout<<"podaj imie nr 2"<<std::endl;
    std::cin>>b;

    if(a.size()>b.size())
        std::cout<<"imie 1 jest dluzsze!";

    if(a.size()<b.size())
        std::cout<<"imie 2 jest dluzsze...";

    if(a.size()==b.size())
        std::cout<<"imiona sa rowne.";

    return 0;
}
