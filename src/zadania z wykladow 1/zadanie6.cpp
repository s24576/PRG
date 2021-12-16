#include <iostream>

using namespace std;

bool podzielne(int a,int b)
{
    if(a%b==0)
        return true;
    else
        return false;
}

void rowne(int a, int b)
{
    if(podzielne(a,b)==true)
    {
    if(b==2)
        {
            cout<<a<<" : "<<b<<" = "<<a/b<<endl;;
            cout<<"jest parzysta";
        }
    else
        {
        cout<<a<<" : "<<b<<" = "<<a/b<<endl;
        cout<<"jest podzielna";
        }
    }
    else cout<<"podane liczby sa niepodzielne";
}
int main()
{
int a,b;
cout<<"podaj liczbe"<<endl;
cin>>a;
cout<<"podaj liczbe, przez ktora bedzie dzielona"<<endl;
cin>>b;
rowne(a,b);
return 0;
}
