#include <iostream>
#include <string>
#include <vector>

float iloczyn_skalarny(std::vector <float> a, std::vector <float> b)
{
    int d=a.size();
    float s=0;
    for(int i=0;i<d;i++)
    {
        s=s+(a[i]*b[i]);
    }
    return s;
}
int main()
{
    float n;
    std::vector <float> a;
    std::vector <float> b;

    do
    {
    std::cout<<"podaj liczbe do wektora a"<<std::endl;
    std::cin>>n;
    a.push_back(n);
    }
    while(n!=0);
    a.pop_back();

    do
    {
    std::cout<<"podaj liczbe do wektora b"<<std::endl;
    std::cin>>n;
    b.push_back(n);
    }
    while(n!=0);
    b.pop_back();

    int d1=a.size();
    int d2=b.size();
    if(d1==d2)
    {
       if(d1>0)
       {
            n=iloczyn_skalarny(a,b);
            std::cout<<"iloczyn skalarny podanych wektorow to: "<<n<<std::endl;
       }
       else
        std::cout<<"nie podano wektorow"<<std::endl;
    }
    else
    {
        std::cout<<"podano bledne dane"<<std::endl;
    }
return 0;
}
