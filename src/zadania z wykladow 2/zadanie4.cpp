#include <iostream>
#include <string>
#include <vector>

struct Student
{
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

int main()
{
    Student a;
    float n;
    std::cout<<"podaj imie studenta"<<std::endl;
    std::cin>>a.imie;

    std::cout<<"podaj nazwisko studenta"<<std::endl;
    std::cin>>a.nazwisko;

    do
    {
        std::cout<<"podaj oceny studenta (wprowadzanie zostanie zakonczone przez podanie wartosci ktora nie mzoe byc ocena"<<std::endl;
        std::cin>>n;
        a.oceny.push_back(n);
    }
    while( n>=2 && n<=5 );
    a.oceny.pop_back();
    n=srednia(a.oceny);
    std::cout<<"srednia ocen studenta to: "<<n<<std::endl;
    return 0;
}
