# include <iostream>
# include <string>
auto main ( int argc , char * argv []) -> int
{
if(argc<3)
std::cout << "Błąd danych" << "\n";
float a = std::stoi ( argv [1]);
float b = std::stoi ( argv [2]);
if(b==0)
std::cout << "Błąd danych" << "\n";
else
std :: cout << ( a / b ) << "\n ";
return 0;
}