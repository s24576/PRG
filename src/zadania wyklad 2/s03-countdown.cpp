#include <iostream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std::this_thread;
using namespace std::chrono;
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
sleep_until(system_clock::now() + seconds(1));
}
return 0;
}
