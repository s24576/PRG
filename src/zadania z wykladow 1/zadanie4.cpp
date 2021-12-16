#include <iostream>

int main()
{
    std::string a;
    int dl,meskie=0,damskie=0;

    std::cout<<"podaj 5 imion"<<std::endl;
    for(int i=0;i<5;i++)
    {
        dl=0;
        std::cin>>a;
        dl=a.size();
        if(a[dl-1]=='a')
            damskie++;
        else meskie++;
    }

std::cout<<"imion meskich jest: "<<meskie<<std::endl;
std::cout<<"imion damskich jest: "<<damskie<<std::endl;
return 0;
}
