#include <iostream>
#include <string>
int main(int argc, char* argv[])
{
std::string haslo,podane;
haslo = std :: string (argv[1]);
while(haslo!=podane)
    {
       std::cout<<"Podaj ponownie haslo:"<< "\n";
       std::cin>>podane;
       
    }
std::cout<<"ok!"<< "\n";
return 0;
}