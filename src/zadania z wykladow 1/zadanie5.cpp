#include <iostream>

void parzyste(int a)
{
    if(a%2==0)
        std::cout<<"jest parzysta"<<std::endl;
    else
        std::cout<<"jest nieparzysta"<<std::endl;
}

int main()
{
int a;

std::cout<<"podaj liczbe"<<std::endl;
std::cin>>a;

parzyste(a);

return 0;
}
