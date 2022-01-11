#include <iostream>
#include <cstring>
#include <string>
#include <vector>

int main()
{
    std::string wp;
    char a,b,d;
    std::vector <std::string> wynik;

    int z1,z2;
    int temp;
    while(wp!="stop")
    {
        std::cout<<"podaj pierwszy znak"<<std::endl;
        std::cin>>wp;

        if(wp=="stop")
            break;

        a=wp[0];
        z1=(int)a;

        std::cout<<"podaj drugi znak:"<<std::endl;
        std::cin>>wp;
        b=wp[0];
        z2=(int)b;
        wp.clear();

        std::cout<<z1<<std::endl;
        std::cout<<z2<<std::endl;

        if(z1>z2)
        {
            temp=z1;
            z1=z2;
            z2=temp;
        }
        wp.clear();

        for(int i=z1;i<=z2;i++)
        {
            d=(char)i;
            wp=wp+d;
        }


        std::cout<<wp<<std::endl;
        wynik.push_back(wp);
        wp.clear();
    }
    return 0;
}
