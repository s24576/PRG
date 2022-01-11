#include <iostream>
#include <string>
#include <vector>

std::vector <std::string> podziel (std::string a)
{
    int d=a.size();
    std::string slowo;
    std::vector <std::string> podzielone;
    for(int i=0;i<d;i++)
    {
        if(a[i]==' ')
        {
            podzielone.push_back(slowo);
            slowo.clear();
        }
        else
            slowo=slowo+a[i];
    }
    if(!slowo.empty())
        podzielone.push_back(slowo);
    return podzielone;
}

int main()
{
    std::string a;
    std::cout<<"podaj zdanie do podzielenia"<<std::endl;
    std::getline (std::cin, a);

    std::vector <std::string> zdanie;
    zdanie=podziel(a);
    int n=zdanie.size();

    std::cout<<std::endl;
    for(int i=0;i<n;i++)
    {
        std::cout<<zdanie[i]<<std::endl;
    }
return 0;
}
