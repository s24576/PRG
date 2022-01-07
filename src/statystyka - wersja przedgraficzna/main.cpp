#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "staty.h"

using namespace std;
int main()
{
    BL test;
    Wyszukiwarka wyszukiwanie;
    Quizz quizz;

    srand(time(NULL));
    //wybranie formatu
    test.format=test.wybierz_format();

    do
    {
        //wybranie funkcji
        test.wybierz_funkcje();

        //baza danych
        if(test.funkcja=="b")
        {
            test.wczytaj_lige();
            while(test.liga<5)
            {
                if(test.liga==0)
                    test.wczytaj_lige();
                else if(test.liga==1)
                    test.druzyna=test.odpal_pl();
                else if(test.liga==2)
                    test.druzyna=test.odpal_sa();
                else if(test.liga==3)
                    test.druzyna=test.odpal_l1();
                else
                    test.druzyna=test.odpal_bl();
            }
        }

        //wyszukiwarka
        else if(test.funkcja=="w")
        {
            wyszukiwanie.wprowadzone.clear();
            wyszukiwanie.wybor=1;

            while(wyszukiwanie.wprowadzone!="0")
            {
                //bezpiecznik
                if(wyszukiwanie.szukanie_wprowadz()=="0")
                    break;

                wyszukiwanie.szukanie_wielkosc(wyszukiwanie.wprowadzone);
                wyszukiwanie.szukanie(wyszukiwanie.wielkosc,wyszukiwanie.wprowadzone,test.format);
            }
            test.czysc_ekran();
        }

        //quiz
        else if(test.funkcja=="q")
        {
            quizz.kontynuuj=1;
            while(quizz.kontynuuj==1)
            {
                int wynik=0;
                quizz.licznik=quizz.policz_pytania();
                string pytania[quizz.licznik]={};
                for(int pyt=0;pyt<quizz.licznik;pyt++)
                    pytania[pyt]=quizz.wczytaj_pytania(pyt);
                while(quizz.z_p<3)
                {
                    quizz.pytanie=quizz.wylosuj_pytanie();
                    quizz.tekst=pytania[quizz.pytanie];
                    if(quizz.zadaj_pytanie(quizz.tekst,quizz.pytanie)==true)
                        wynik++;
                    quizz.z_p++;
                    test.czysc_ekran();
                }
                quizz.kontynuuj=quizz.wynik_quizzu(wynik);
                quizz.z_p=0;
                test.czysc_ekran();
            }
        }
    }
    while(test.funkcja!="a");
    return 0;
}
