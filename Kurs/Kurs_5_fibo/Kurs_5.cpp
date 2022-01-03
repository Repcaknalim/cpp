// Kurs_5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*float oceny[5];
    float suma = 0, srednia = 0;

    for (int i = 0; i < 5; i++) {
        cout << endl << "Podaj "<< i+1 << " ocene: ";
        cin >> oceny[i];
        suma += oceny[i];
    }
    
    srednia = suma / 5;
    cout << "Srednia ocen: " << srednia << endl;
    */

    cout << setprecision(10000);

    long double fib[5000];
    int ile;
    cout << "Ile Fibbo mordo? " << endl;
    cin >> ile;

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < ile; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < ile; i++) {
        cout << "Fibbo " << i+1 << " : " << fib[i] << endl;
    }
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
