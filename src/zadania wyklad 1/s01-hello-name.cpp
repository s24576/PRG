# include <iostream>
# include <string>
auto main (int argc, char* argv[]) -> int
{
if (argc < 1)
std::cout << "blad danych" << "\n ";
std::string name;
name = std::string ( argv[1] );
std :: cout << " Hello , " << name << "\n ";
return 0;
}
