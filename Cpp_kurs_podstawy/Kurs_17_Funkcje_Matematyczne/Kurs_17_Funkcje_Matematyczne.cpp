// Kurs_17_Funkcje_Matematyczne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <iomanip>

#define M_PI       3.14159265358979323846   // pi
#define M_E        2.71828182845904523536   // e

void bezwzgledna()
{
    int x, D, R, o1, o2;
    x = 10;

    std::cout << "Pytanie?\n";
    std::cout << "Pierwszy zawodnik: ";
    std::cin >> R;
    std::cout << "Drugi zawodnik: ";
    std::cin >> D;

    o1 = abs(x - R);
    o2 = abs(x - D);    //fabs dla floatow, overloaded dla floatów w math.h

    if (o1 < o2)std::cout << "Wygral R!\n";
    else if (o1 > o2)std::cout << "Wygral D!\n";
    else std::cout << "Remis!\n";
}

void potega()
{
    int x = (pow(2, 32)/2)-1;
    unsigned int y = pow(2, 32) - 1;
    std::cout << std::setprecision(20);
    std::cout << x << " : Rozmiar inta\n";
    std::cout << y << " : Rozmiar inta bez znaku\n";
}

void pierwiastek()
{
    float x_1, y_1, x_2, y_2, d;

    std::cout << cbrt(27) << std::endl;
    std::cout << pow(27, (1.0/3.0)) << std::endl;

    std::cout << "A (x1,y1) = \n";
    std::cin >> x_1 >> y_1;
    std::cout << "B (x2,y2) = \n";
    std::cin >> x_2 >> y_2;

    d = sqrt(pow(x_2-x_1, 2) + pow(y_2-y_1, 2));
    std::cout << "Odleglosc " << d;
}

void zaokraglij()
{
    float liczba;   
    std::cout << "Podaj liczbe ";
    std::cin >> liczba;
    std::cout << "Round: " << round(liczba) << "\n";
    std::cout << "Ceil: " << ceil(liczba) << "\n";
    std::cout << "Floor: " << floor(liczba) << "\n";
    std::cout << "Trunc: " << trunc(liczba) << "\n";    
}

void trygonometria()
{
    float kat;
    std::cout << "Podaj wartosc kata: ";
    std::cin >> kat;

    std::cout << sin(kat * M_PI/180) << '\n';
    std::cout << cos(kat * M_PI / 180) << '\n';
    std::cout << tan(kat * M_PI / 180) << '\n';
    std::cout << 1/tan(kat * M_PI / 180) << '\n';
}

int main()
{
    bezwzgledna();
    potega();
    pierwiastek();
    zaokraglij();
    trygonometria();
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
