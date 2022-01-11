#include <iostream>
#include <vector>
#include <string>

class Student
{
    public:
    std::string imie,nazwisko;
    std::vector <float> oceny;
};

class Grupa
{
    public:
    std::string nazwa;
    std::vector <Student> studenci;
};

void dodaj_do_grupy(Grupa test, Student tester)
{
    test.studenci.push_back(tester);
}
int main()
{
    Grupa test;
    test.nazwa="orzel";

    Student tester;
    tester.imie="Tytus";
    tester.nazwisko="Bomba";
    tester.oceny={1,2,3};

    dodaj_do_grupy(test,tester);

    return 0;
}
