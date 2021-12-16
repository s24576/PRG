#include <iostream>
#include <string>

void ramka(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	int najwieksza = 0;
	int T[5];
	T[0] = a.length();
	T[1] = b.length();
	T[2] = c.length();
	T[3] = d.length();
	T[4] = e.length();
	for (int i = 0; i < 5; i++)
	{
		if (najwieksza < T[i])
		{
			najwieksza = T[i];
		}
	}
	najwieksza += 4;

	for(int h=0;h<najwieksza;h++)
    std::cout << "*";
	std::cout << std::endl;

	std::cout << "* " << a;
	for (int i = 0; i <= (najwieksza - a.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

	std::cout << "* " << b;
	for (int i = 0; i <= (najwieksza - b.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

	std::cout << "* " << c;
	for (int i = 0; i <= (najwieksza - c.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

	std::cout << "* " << d;
	for (int i = 0; i <= (najwieksza - d.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

	std::cout << "* " << e;
	for (int i = 0; i <= (najwieksza - e.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

    for(int h=0;h<najwieksza;h++)
    std::cout << "*";
	std::cout << std::endl;

}

int main()
{
	std::string a, b, c, d, e;
	std::cout<<"podaj napis do ramki"<<std::endl;
	std::cin >> a;
	std::cout<<"podaj napis do ramki"<<std::endl;
	std::cin >> b;
	std::cout<<"podaj napis do ramki"<<std::endl;
	std::cin >> c;
	std::cout<<"podaj napis do ramki"<<std::endl;
	std::cin >> d;
	std::cout<<"podaj napis do ramki"<<std::endl;
	std::cin >> e;

	ramka(a, b, c, d, e);


    return 0;
}
