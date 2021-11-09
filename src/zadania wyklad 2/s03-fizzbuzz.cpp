#include <iostream>
#include <string>
#include <stdlib.h>
int main(int argc, char* argv[])
{
if(argc!=2)
std::cout<<"błąd danych"<<"\n";
int a;
a=std::stoi(argv[1]);
for(int i=1;i<=a;i++)
{
if(i%3!=0 && i%5!=0)
std::cout<<i<<"\n";
if(i%3==0 && i%5!=0)
std::cout<<i<<" Fizz"<<"\n";
if(i%5==0 && i%3!=0)
std::cout<<i<<" Buzz"<<"\n";
if(i%3==0 && i%5==0)
std::cout<<i<<" FizzBuzz"<<"\n";
}
return 0;
}