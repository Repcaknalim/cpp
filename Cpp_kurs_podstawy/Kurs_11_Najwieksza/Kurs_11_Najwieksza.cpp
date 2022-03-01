// Kurs_11_Najwieksza.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int a, b, c, m;

int main()
{
    cout << "Podaj 3 liczby oddzielone spacja: ";
    cin >> a >> b >> c;

    m = a;
    if (b > m) m = b;
    if (c > m) m = c;

    cout << "Najwieksza liczba to " << m << "\n";

    /*
    if ((a >= b) && (a >= c)) cout << "Najwieksza liczba to " << a << "\n";
    else if ((b >= a) && (b >= c)) cout << "Najwieksza liczba to " << b << "\n";
    else if ((c >= a) && (c >= b)) cout << "Najwieksza liczba to " << c << "\n";*/
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
