// Kurs_9_Procedury.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
    return m * 39.37;
}

float ile_jardow(float m);

void ile_mil(float m) //procedura = nic nie zwraca
{
    cout << "To jest " << m * 0.0006213 << " mil\n";
}

int main()
{
    cout << "Podaj ile metrow: ";
    cin >> metry;
    cout << "To jest " << ile_cali(metry) << " cali\n" << "To jest " << ile_jardow(metry) << " jardow\n";
    ile_mil(metry);

    return 0;
}

float ile_jardow(float m)
{
    return m * 1.0936;
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