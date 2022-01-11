#include <iostream>
#include <vector>
float srednia( std::vector <float> a )
{
    int d=a.size();
    float s=0;
    if(d==0)
    {
        std::cout<<"brak vectora"<<std::endl;
    }
    else
    {
        for(int i=0;i<d;i++)
        {
            s=s+a[i];
        }
    s=s/d;
    }
    return s;
}
int main()
{
    float d=1;
    std::vector <float> a;
    while(d!=0)
    {
        std::cout<<"podaj liczbe"<<std::endl;
        std::cout<<"0 konczy petle"<<std::endl;
        std::cin>>d;
        a.push_back(d);
    }
    a.pop_back();
    d=srednia( a );
    if(d!=0)
        std::cout<<"srednia to:"<<d<<std::endl;
    return 0;
}
