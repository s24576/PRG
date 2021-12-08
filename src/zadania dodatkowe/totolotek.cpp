#include <iostream>
#include <cstdlib>
#include <ctime>
int main(int argc, char* argv[])
{
if(argc>11)
    std::cout<<"blad danych"<<"\n";


int a=argc-1;
int zamiana;
int b=a;
int i=0;
int T[10]={};
int Twl[10]={};
int temp;
int licznik=0;
int wynik=0;

//wprowadzanie danych
while(a>0)
{
zamiana=atoi(argv[a]);
++T[zamiana];
--a;
}

//losowanie
while(licznik<b)
{
    licznik=0;
    srand(time(NULL));
    temp=rand()%10+1;
    ++Twl[temp];
    for(int b=0;b<10;++b)
    {
        if(Twl[b]>0)
            licznik++;
    }
}

//wynik
for(int w=0;w<10;++w)
{
        if(Twl[w]>0)
        {
            std::cout<<w+1<<" ";
            if(T[w]>0)
                ++wynik;
        }
}
std::cout<<"\n";
std::cout<<"trafiles "<<wynik<<" z "<<b<<"\n";
return 0;
}
