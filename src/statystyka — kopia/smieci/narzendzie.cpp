#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    fstream wczytaj;
    fstream zapisz;
    string d1;
    vector <string> oddaje;
    int d;
    wczytaj.open("pcity.txt",ios::in);
    zapisz.open("scity.txt",ios::out);
    while(!wczytaj.eof())
    {
        wczytaj>>d1;
        if((int)d1[0]>='0'&&(int)d1[0]<='9')
                oddaje.push_back(d1);
        if(d1=="minuty")
            oddaje.pop_back();
        if(d1=="czerwona")
            oddaje.pop_back();
    }
    d=oddaje.size();
    for(int i=0;i<d;i++)
    {
            d1=oddaje[i];
            zapisz<<d1<<endl;
    }
    return 0;
}
