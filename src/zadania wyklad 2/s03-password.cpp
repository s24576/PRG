#include <iostream>
#include <string>
int main()
{
std::cout<<"Podaj haslo:"<< "\n";
std::string haslo,podane;
std::cin>>haslo;
while(haslo!=podane)
    {
       std::cout<<"Podaj ponownie haslo:"<< "\n";
       std::cin>>podane;
       
    }
std::cout<<"ok!"<< "\n";
return 0;
}
