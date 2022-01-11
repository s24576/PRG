#include <iostream>
#include <string>
#include <vector>

class Student
{
    public:
    std::string imie,nazwisko;
    std::vector <float> oceny;
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
        {
            s=s+a[i];
        }
    s=s/d;
    }
    return s;
}

Student najlepsza_srednia(std::vector <Student> a)
{
    int n=a.size();
    float T[n]={0};

    if(n>1)
    {
        std::vector <float> temp;
        for(int i=0;i<n;i++)
        {
            temp=a[i].oceny;
            T[i]=srednia(temp);
        }

        int m=0;
        int w;
        for(int y=0;y<n;y++)
        {
            if(T[y]>m)
            {
                w=y;
                m=T[y];
            }
        }

        return
            a[w];
    }

    else
        return a[0];

}
void wyswietl_studenta(Student tester)
{
    std::cout<<"Imie: "<<tester.imie<<std::endl;
    std::cout<<"Nazwisko: "<<tester.nazwisko<<std::endl;
    std::cout<<"Srednia: "<<srednia(tester.oceny)<<std::endl;
}
int main()
{

    std::vector <Student> studenci;

    Student test;
        test.imie="Andrzej";
        test.nazwisko="Krecina";
        test.oceny={2,3,4,5};
    studenci.push_back(test);

    Student test1;
        test1.imie="Jozef";
        test1.nazwisko="Hes";
        test1.oceny={2,2,2};

    studenci.push_back(test1);

    Student wynik;
    wynik=najlepsza_srednia(studenci);
    wyswietl_studenta(wynik);
    return 0;
}
