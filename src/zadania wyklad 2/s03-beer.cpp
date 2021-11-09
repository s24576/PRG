#include <iostream>
#include <stdlib.h>
int main(int argc, char* argv[])
{
if(argc==1)
{
int a=99;
while(a>0)
{
std::cout<< a << "bottles of beer on the wall," << a << "bottles of beer."<< "\n"<< " Take one down, pass it around, " << a-1 << " bottles of beer on the wall..."<<"\n";
a--;
}
std::cout<< a << "No more bottles of beer on the wall, no more bottles of beer." << "\n" << "Go to the store and buy some more, 99 bottles of beer on the wall..." << "/n";
}
if(argc==2)
{
int a;
a=std::stoi(argv[1]);
while(a>0)
{
std::cout<< a << "bottles of beer on the wall," << a << "bottles of beer."<< "\n"<< " Take one down, pass it around, " << a-1 << " bottles of beer on the wall..."<<"\n";
a--;
}
std::cout<< a << "No more bottles of beer on the wall, no more bottles of beer." << "\n" << "Go to the store and buy some more, 99 bottles of beer on the wall..." << "/n";
}
if(argc>2)
{
std::cout<<"błąd danych"<<"\n";
return 0;
}
return 0;
}
