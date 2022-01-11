#include <iostream>

using namespace std;

int main()
{
    int T[9]={1,2,5,10,20,50,100,200,500};
    int Todp[9]={};
    int pod;
    cout<<"podaj kwote w zlotowkach"<<endl;
    cin>>pod;

    for(int i=8;i>=0;i--)
    {
        if(pod/T[i]>0)
        {
            Todp[i]=pod/T[i];
            pod=pod%T[i];
        }
    }

    cout<<"twoje nominaly to:"<<endl;
    if(Todp[8]>0)
    cout<<"500 -> "<<Todp[8]<<endl;
    if(Todp[7]>0)
    cout<<"200 -> "<<Todp[7]<<endl;
    if(Todp[6]>0)
    cout<<"100 -> "<<Todp[6]<<endl;
    if(Todp[5]>0)
    cout<<"50 -> "<<Todp[5]<<endl;
    if(Todp[4]>0)
    cout<<"20 -> "<<Todp[4]<<endl;
    if(Todp[3]>0)
    cout<<"10 -> "<<Todp[3]<<endl;
    if(Todp[2]>0)
    cout<<"5 -> "<<Todp[2]<<endl;
    if(Todp[1]>0)
    cout<<"2 -> "<<Todp[1]<<endl;
    if(Todp[0]>0)
    cout<<"1 -> "<<Todp[0]<<endl;

    return 0;
}
