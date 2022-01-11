#include <iostream>
#include <string>

using namespace std;

class Trojkat
{
    public:
    int x,y,z;
};

string sprawdz(Trojkat test)
{
    int a,b,c,temp;
    a=test.x;
    b=test.y;
    c=test.z;
    for(int i=0;i<2;i++)
    {
        if(b>a)
        {
            temp=a;
            a=b;
            b=temp;
        }

        if(c>b)
        {
            temp=c;
            c=b;
            b=temp;
        }
    }

    if(b*b+c*c==a*a)
        return "prostokatny";

    else if(b*b+c*c<a*a)
        return "roxwartokatny";

    else
        return "ostrokatny";
}
int main()
{
    Trojkat trojkat;

    cout<<"podaj dlugosc 1 boku trojkata"<<endl;
    cin>>trojkat.x;
    cout<<"podaj dlugosc 2 boku trojkata"<<endl;
    cin>>trojkat.y;
    cout<<"podaj dlugosc 3 boku trojkata"<<endl;
    cin>>trojkat.z;

    if((trojkat.y+trojkat.z>trojkat.x) && (trojkat.y<trojkat.z+trojkat.x) && (trojkat.y+trojkat.x>trojkat.z))
        cout<<sprawdz(trojkat);

    else
        cout<<"to nie jest trojkat";

    return 0;
}
