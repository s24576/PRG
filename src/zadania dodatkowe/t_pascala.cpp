#include <iostream>

int main()
{
   int a;
   std::cout<<"podaj wysokosc trojkata"<<"\n";
   std::cin>>a;
   std::cout<<"\n";
   if(a<1)
   while(a<1)
   {
       std::cout<<"podaj wartosc ponownie"<<"\n";
       std::cin>>a;
       std::cout<<"\n";
   }
   int T[a][a]={0};
   for(int y=0;y<a;y++)
    {
        for(int x=0;x<a;x++)
        T[x][y]=0;
    }
    for(int y=0;y<a;y++)
    {
        for(int x=0;x<a;x++)
        {
            if(y==x)
                T[x][y]=1;
            else if(x==0)
                T[x][y]=1;
            else if(x>y)
                T[x][y]=0;

            else
            T[x][y]=T[x-1][y-1]+T[x][y-1];
        }
   }
    for(int y=0;y<a;y++)
    {
        for(int x=0;x<a;x++)
        {
            if((T[x][y]>0) && (T[x][y]<10))
                std::cout<<T[x][y]<<"   ";

            if((T[x][y]>=10) && (T[x][y]<100))
                std::cout<<T[x][y]<<"  ";


            if((T[x][y]>=100) && (T[x][y]<1000))
                std::cout<<T[x][y]<<" ";
        }
    std::cout<<"\n";
    }
return 0;
}
