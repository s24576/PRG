#include <iostream>

using namespace std;

int main()
{
char T[5][5]={};
T[0][1]='|';
T[0][3]='|';

T[1][0]='-';
T[1][1]='-';
T[1][2]='-';
T[1][3]='-';
T[1][4]='-';

T[2][1]='|';
T[2][3]='|';

T[3][0]='-';
T[3][1]='-';
T[3][2]='-';
T[3][3]='-';
T[3][4]='-';

T[4][1]='|';
T[4][3]='|';

int x,y;
int wygranyy=0,wygranyx=0;
int ruchy=0;
while(( wygranyx<1) && (wygranyy<1) && (ruchy<9))
{
    //wprowadzanie
    cout<<"podaj kolumne wartosc od 1 do 3"<<endl;
    cin>>y;
    if(y>3)
    {
        while(y>3)
        {
            cout<<"podaj poprawna wartosc y"<<endl;
            cin>>y;
        }
    }
    cout<<"podaj wiersza wartosc od 1 do 3"<<endl;
    cin>>x;
        if((x>3) || (x<1))
    {
        while((x>3) || (x<1))
        {
            cout<<"podaj poprawna wartosc x"<<endl;
            cin>>x;
        }
    }
    //zamiana na wartosci w tablicy
    if(x==1)
        x=0;
    if(x==3)
        x=4;

    if(y==1)
        y=0;
    if(y==3)
        y==4;

    //sprawdzenie czy pole jest zajete
    if(T[y][x]!=0)
        {
            while(T[y][x]!=0)
            {
                cout<<"podaj poprawna wartosc y"<<endl;
                cin>>y;
                cout<<"podaj poprawna wartosc x"<<endl;
                cin>>x;
            }
        }

    //uzupelnianie
    if(ruchy%2==0)
        T[y][x]='x';
    else
        T[y][x]='o';

    //wygrany
    for(int a=0;a<5;a+=2)
    {
        if(T[a][0]==T[a][2])
        {
            if(T[a][2]==T[a][4])
            {
                if(T[a][0]=='x')
                    {
                        wygranyx++;
                    }
                if(T[a][0]=='o')
                    {
                    wygranyy++;
                    }
            }
        }
        if(T[0][a]==T[2][a])
        {
            if(T[2][a]==T[4][a])
            {
                if(T[0][a]=='x')
                    {
                        wygranyx++;
                    }
                if(T[0][a]=='o')
                    {
                        wygranyy++;
                    }
            }
        }
    }
    if(T[0][0]==T[2][2])
        {
            if(T[2][2]==T[4][4])
            {
                if(T[4][4]=='x')
                    wygranyx++;
                if(T[4][4]=='o')
                    wygranyy++;
            }
        }
    if(T[4][0]==T[2][2])
    {
        if(T[2][2]==T[0][4])
        {
                if(T[2][2]=='x')
                    wygranyx++;
                if(T[2][2]=='o')
                    wygranyy++;
        }
    }
    //wyswietlanie
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<T[i][j];
            //if(T[i][j]==0)
                //cout<<" ";
        }
        cout<<endl;
    }

    ruchy++;
}
if(wygranyx==1)
{
    cout<<"wygrywa krzyzyk"<<endl;
    cout<<"w "<<ruchy<<" ruchach"<<endl;
}
if(wygranyy==1)
{
    cout<<"wygrywa kolko"<<endl;
    cout<<"w "<<ruchy<<" ruchach"<<endl;
}
if(ruchy==9)
{
    cout<<"w tej rozgrywce padl remis"<<endl;
}
return 0;
}
