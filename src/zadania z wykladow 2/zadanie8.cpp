#include <iostream>
#include <vector>
#include <string>

class Student
{
    public:
    std::string imie,nazwisko;
    std::vector <float> oceny;
};

class Grupa
{
    public:
    std::string nazwa;
    std::vector <Student> studenci;
};

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
            s=s+a[i];

        s=s/d;
    }
    return s;
}

float m_sredniej(std::vector <float> a)
{
    int d=a.size();
    int z=d/2;
    float du;
    if(d%2==1)
    {
        d=a[z];
        return du;
    }
    else
    {
        d=a[z];
        d=d+a[z+1];
        return du;
    }
}
std::string najlepsza_grupa(std::vector <Grupa> grupy)
{
    int d=grupy.size();
    float T[d]={0};
    float sr,w,ma=0;
    int d1,t;
    std::vector <float> sred;
    std::vector <Student> a;
    std::vector <float> oce;
    for(int i=0;i<d;i++)
    {
        a=grupy[i].studenci;
        std::cout<<grupy[i].nazwa<<std::endl;
        d1=a.size();
        for(int i1=0;i1<d1;i1++)
        {
            std::cout<<a[i1].nazwisko<<std::endl;
            oce=a[i1].oceny;
            sr=srednia(oce);
            std::cout<<sr<<std::endl;
            sred.push_back(sr);
        }
        w=m_sredniej(sred);
        T[i]=w;
    }
    for(int j=0;j<d;j++)
    {
        if(T[j]>ma)
        {
            t=j;
            ma=T[j];
        }
    }
    return grupy[t].nazwa;
}

int main()
{
    Grupa test;
    test.nazwa="orzel";

    Student testowy;
    testowy.imie="Tytus";
    testowy.nazwisko="Bomba";
    testowy.oceny={1,2,3};

    Student testowy1;
    testowy1.imie="Modest";
    testowy1.nazwisko="Bomba";
    testowy1.oceny={1,4,5,6};
    test.studenci={testowy,testowy1};

    Grupa test1;
    test1.nazwa="cebularz";

    Student tester1;
    tester1.imie="Robert";
    tester1.nazwisko="Kubica";
    tester1.oceny={1,1,4,4,5};

    Student tester2;
    tester2.imie="Robert";
    tester2.nazwisko="Kubica JR";
    tester2.oceny={2,3,4,5};

    Student tester3;
    tester3.imie="Robert";
    tester3.nazwisko="Kubica SR";
    tester3.oceny={1,2,5,3};
    test1.studenci={tester1,tester2,tester3};

    std::vector <Grupa> grupy;
    grupy.push_back(test);
    grupy.push_back(test1);


    std::cout<<najlepsza_grupa(grupy);
    return 0;
}
