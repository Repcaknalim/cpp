// Kurs_5_Dziedziczenie_Pochodne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>

#define M_PI       3.14159265358979323846   // pi

class Punkt
{
    float x, y;
    std::string nazwa;

public:
    void wyswietl()
    {
        std::cout << nazwa << "(" << x << "," << y << ")\n";
    }
    Punkt(std::string n, float a, float b)
    {
        nazwa = n;
        x = a;
        y = b;
    }
};

class Kolo :public Punkt    //kolo dziedziczy publicznie punkt
{
    std::string nazwa;

protected:
    float r;

public:
    void wyswietl()
    {
        std::cout << "Kolo o nazwie: " << nazwa << "\n";
        std::cout << "Srodek kola: \n";
        Punkt::wyswietl();
        std::cout << "Promien: " << r << "\n";
        std::cout << "Pole kola: " << M_PI * r * r << "\n";
    }

    Kolo(std::string nk = "Kolko", std::string np = "S", float a = 0, float b = 0, float pr = 1)
    :Punkt(np,a,b)
    {
        nazwa = nk;
        r = pr;
    }
};

class Kula :public Kolo
{
    std::string nazwa;

public:
    void wyswietl()
    {
        std::cout << "Kula o nazwie: " << nazwa << "\n";
        Kolo::wyswietl();
        std::cout << "Pole kuli: " << (4.0 / 3.0) * M_PI * r * r << "\n";
    }

    Kula(std::string nku = "Kula", std::string nk = "Kolko", std::string np = "S", float a = 0, float b = 0, float pr = 1)
    :Kolo(nk, np, a, b, pr)
    {
        nazwa = nku;
    }
};

int main()
{
    Kula k1;

    k1.wyswietl();

    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
