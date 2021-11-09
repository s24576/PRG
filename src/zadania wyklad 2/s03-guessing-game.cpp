#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
srand(time(NULL));
int a;
a=std::rand()%100;
a++;
int b;
do
{
std::cin>>b;
if(b>a)
std::cout<<"wylosowana liczba jest mniejsza"<<"\n";
if(a>b)
std::cout<<"wylosowana liczba jest wieksza"<<"\n";
}
while(a!=b);
std::cout<<"to ta liczba"<<"\n";
return 0;
}