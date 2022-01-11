#include <iostream>
#include <vector>

int maks(std::vector <int> a)
{
    int m=0;
    int d=a.size();
    for(int i=0;i<d;i++)
    {
        if(a[i]>0)
            m=a[i];
    }
    return m;
}
bool zawiera(std::vector <int> a, std::vector <int> b)
{
    int d1=a.size();
    int d2=b.size();

    if(d2>d1)
        return false;
    else
    {
        int m1,m2;
        m1=maks(a);
        m2=maks(b);

        if(m2>m1)
            return false;
        else
        {
            int licz=0;
            int T1[m1]={0};
            int T2[m2]={0};

            for(int i=0;i<m1;i++)
            {
                for(int a1=0;a1<d1;a1++)
                {
                    if(a[a1]==i)
                    T1[i]++;
                }

                for(int a2=0;a2<d2;a2++)
                {
                    if(b[a2]==i)
                    T2[i]++;
                }
            }

            for(int a=0;a<m1;a++)
            {
                if(T1[a]>=T2[a])
                licz++;
            }

            if(licz==m2)
                return true;
            else
                return false;
        }
    }
}

int main()
{
    std::vector <int> a;
    int pod;
    do
    {
        std::cout<<"podaj liczbe nalezaca do 1 vectora (0 konczy pobieranie danych)"<<std::endl;
        std::cin>>pod;
        a.push_back(pod);
    }
    while(pod>0);
    a.pop_back();

    std::vector <int> b;
    do
    {
        std::cout<<"podaj liczbe nalezaca do 2 vectora (0 konczy pobieranie danych)"<<std::endl;
        std::cin>>pod;
        b.push_back(pod);
    }
    while(pod>0);
    b.pop_back();

    if(zawiera(a,b)==1)
        std::cout<<"drugi vector jest podzbiorem pierwszego"<<std::endl;
    else
        std::cout<<"drugi vector nie jest podzbiorem pierwszego"<<std::endl;
    return 0;
}
