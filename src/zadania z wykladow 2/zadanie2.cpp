#include <iostream>
#include <vector>
#include <string>
bool palindrom(std::string a)
{
    std::string w=a;
    int dl=a.size(),licznik=0;
    for(int i=0;i<dl/2;i++)
    {
        if(w[i]==w[dl-i-1])
            licznik++;
    }
    if(licznik==dl/2)
        return true;
    else
        return false;
}
std::vector <std::string> filtrowanie( std::vector <std::string> a)
{
        std::string temp;
        std::vector <std::string> palindromy;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            temp=a[i];
                if( palindrom(temp) == 1)
                    palindromy.push_back(temp);
        }
         return palindromy;
}
int main()
{
    int n;
    std::string a,temp;
    std::vector <std::string> podane;
    std::vector <std::string> palindromy;
    std::cout<<"'wyjscie' konczy petle"<<std::endl;
    do
    {
        std::cout<<"podaj slowo"<<std::endl;
        std::cin>>a;
        podane.push_back(a);
    }
    while(a!="wyjscie");
    podane.pop_back();

    palindromy=filtrowanie(podane);

    n=palindromy.size();
    if(n==0)
        std::cout<<"zadne podane slowo nie jest palindromem"<<std::endl;
    else
    {
        std::cout<<"podane palindromy to:"<<std::endl;
        for(int i=0;i<n;i++)
            std::cout<<palindromy[i]<<" ";
    }
    return 0;
}
