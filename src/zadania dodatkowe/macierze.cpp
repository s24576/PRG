#include <iostream>

using namespace std;

void m_a(int x)
{
    int T[x];
    int temp;

    T[0]=1;
    for(int i=1;i<x;i++)
    {
        T[i]=T[i-1]+1;
    }

    cout<<"| ";

    for(int i=0;i<x;i++)
        cout<<T[i]<<" ";

    cout<<"|"<<endl;
    for(int j=0;j<x-1;j++)
    {
        temp=T[1];
        T[0]=temp;
        cout<<"| ";
        for(int i=1;i<x;i++)
        {
            T[i]=T[i-1]+1;
        }
        T[0]=temp;

        for(int i=0;i<x;i++)
           cout<<T[i]<<" ";

        cout<<"|"<<endl;
    }
}
void m_b(int x)
{
    int T[x];
    int temp;

    T[x-1]=1;
    for(int i=0;i<x-1;i++)
      T[i]=0;

    cout<<"| ";

    for(int i=0;i<x;i++)
    cout<<T[i]<<" ";

    cout<<"|"<<endl;

    for(int j=x-1;j>0;j--)
    {
        cout<<"| ";

        for(int i=x-2;i>=0;i--)
        {
            if(T[i+1]==0)
                continue;

            if(i==x-2)
                T[x-1]++;

            T[i]=T[i+1]-1;
        }
        for(int i=0;i<x;i++)
           cout<<T[i]<<" ";
        cout<<"|"<<endl;
    }
}
void m_c(int x)
{
    int T[x];
    int temp,a=0;

    T[x-1]=2*x;
    for(int i=x-2;i>=0;i--)
    {
        T[i]=T[i+1]-2;
    }
    cout<<"| ";
    for(int i=0;i<x;i++)
        cout<<T[i]<<" ";
    cout<<"|"<<endl;
    for(int j=0;j<x-1;j++)
    {
        cout<<"| ";
        for(int t=0;t<=a;t++)
            T[t]+=2;
        a++;
        for(int i=0;i<x;i++)
           cout<<T[i]<<" ";
        cout<<"|"<<endl;
    }
}
void m_d(int x)
{
    int T[x];
    int temp;

    T[0]=x;
    for(int i=1;i<x;i++)
    {
        T[i]=T[i-1]-1;
    }
    cout<<"| ";
    for(int i=0;i<x;i++)
        cout<<T[i]<<" ";
    cout<<"|"<<endl;
    for(int j=0;j<x-1;j++)
    {
        cout<<"| ";
        temp=T[1];
        T[0]=temp;
        for(int i=1;i<x;i++)
        {
            if(T[i-1]==0)
            continue;

            else
            T[i]=T[i-1]-1;
        }
        for(int i=0;i<x;i++)
           cout<<T[i]<<" ";

        cout<<"|"<<endl;
    }
}
int main()
{
        int pod;

        cout<<"podaj rozmiar macierzy"<<endl;
        cin>>pod;
        cout<<endl;

        m_a(pod);
        cout<<endl;

        m_b(pod);
        cout<<endl;

        m_c(pod);
        cout<<endl;

        m_d(pod);

    return 0;

}
