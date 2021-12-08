#include <iostream>

int main()
{
int wysokosc,szerokosc,a,x;
std::cout<<"podaj wysokosc";
std::cin>>wysokosc;
szerokosc=1.5*wysokosc;

//warunek symetrycznosci
if(szerokosc%2==0)
szerokosc++;

if(szerokosc%2==0)
{
    a=szerokosc/2;
    x=szerokosc/2;
}
else
{
a=(szerokosc/2)-1;
x=(szerokosc/2)+1;
}

std::string T[wysokosc][szerokosc]={};

//ramka
for(int i=0;i<szerokosc;i++)
{
    T[0][i]="*";
    T[wysokosc-1][i]="*";
}

while(a>0)
{
    for(int b=1;b<wysokosc-1;b++)
    {
        for(int c=0;c<=a;c++)
        {
            T[b][c]="*";
        }
        a--;
    }

}

while(x<szerokosc-1)
{
    for(int z=1; z<wysokosc-1; z++)
    {
        for(int v=x; v<szerokosc; v++)
        {
            T[z][v]="*";
        }
        x++;
    }

}

for(int a=0;a<wysokosc;a++)
{
    for(int b=0;b<szerokosc;b++)
        {
        if(T[a][b]=="*")
            std::cout<<T[a][b];
        else
            std::cout<<" ";
        }
    std::cout<<"\n";
}
return 0;
}
