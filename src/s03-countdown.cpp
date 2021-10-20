#include <iostream>
#include <string>
#include <stdlib.h>
int main(int argc, char* argv[])
{
if(argc!=2)
std::cout<<"błąd danych"<<"\n";
int a;
a=std::stoi(argv[1]);
while(a>=0)
{
std::cout << a << "\n";
a--;
}
return 0;
}
