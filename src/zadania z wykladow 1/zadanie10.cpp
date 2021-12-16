#include <iostream>

void gwiazdka(std::string a,std::string b,std::string c,std::string d,std::string e)
{

    std::string a1 = "* ";
    std::string b1 = "* ";
    std::string c1 = "* ";
    std::string d1 = "* ";
    std::string e1 = "* ";

    a1 += a;
    b1 += b;
    c1 += c;
    d1 += d;
    e1 += e;


}

int main()
{
std::string a;

std::cout<<"podaj stringa"<<std::endl;
std::cin>>a;

int s;
s=palindrom(a);

if(s==1)
    std::cout<<"podane slowo jest palindromem"<<std::endl;
else
    std::cout<<"podane slowo nie jest palindromem"<<std::endl;

return 0;}
