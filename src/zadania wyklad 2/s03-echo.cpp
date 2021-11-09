#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
if ( argc == 1 )
{
    std::cout<<"Blad danych"<<"\n";
    return 1;
}
auto const polecenie = std::string{argv[1]};
if( argc > 2 )
{
    //warunek polecenia
    if( polecenie[0] == '-' )
    {
//polecenie N
        if( polecenie[1] == 'n' )
        {
            for( int i=2; i<argc; i++ )
            {
                auto const wyraz = std::string{argv[i]};
                std::cout<< wyraz << " " ;
            }
        }

//polecenie R
        if( polecenie[1] == 'r' )
        {
            if(argc > 3)
            {
                auto const polecenie2 = std::string{argv[2]};
                //drugie polecenie
                if( polecenie2[0] == '-' )
                {
                    if( polecenie2[1] == 'l' )
                    {
                        for(int i=argc; i>2; i--)
                        {
                            auto const wyraz = std::string{argv[i]};
                            std::cout << wyraz << "/n";
                        }
                    }
                    if( polecenie2[1] == 'n' )
                    {
                        for(int i=argc; i>2; i--)
                        {
                             auto const wyraz = std::string{argv[i]};
                             std::cout<< wyraz << "  ";
                        }
                    }
                }
                else
                {
                    for(int i=argc; i>0; i--)
                    {
                        auto const wyraz = std::string{argv[i]};
                        std::cout<< wyraz << "  ";
                    }
                }
            }
            else
            {
                for(int i=argc; i>1; i--)
                {
                    auto const wyraz = std::string{argv[i]};
                    std::cout<< wyraz << "  ";
                }
            }
        }
//polecenie L
        if(polecenie[1]=='l')
        {
            for (int i=2;i<argc;i++)
            {
                auto const wyraz = std::string{argv[i]};
                std::cout << wyraz <<"\n";
            }
        }
    }
    else
    {
        for(int i=2; i>argc; i++)
        {
            auto const wyraz = std::string{argv[i]};
            std::cout<< wyraz << "  ";
        }
    }
}
else
{
    auto const wyraz = std::string{argv[1]};
    std::cout << wyraz <<"\n";
}
/*for (int i=1;i<argc;i++)
{
auto const name = std::string{argv[i]};
std::cout << name <<"\n";
}*/
return 0;
}