#include <iostream>
#include <sstream>

using namespace std;

bool pierwsza(int a)
{
    int licznik=0;
    for(int i=2;i<a;i++)
    {
    if(a%i==0)
    licznik++;
    }
    if(licznik==0)
        return true;
    else
        return false;
}

int main()
{
    int w;
    string pierwsze,liczba;
    for(int a=2;a<21;a++)
    {
    w=pierwsza(a);
    if(w==1)
    {
    stringstream ss;
    ss << a;
    string str = ss.str();
    pierwsze = pierwsze + str + " ";
    }
    }
    cout<<pierwsze<<endl;
    cout<<pierwsze<<endl;
return 0;
}
