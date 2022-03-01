// Kurs_4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int liczba = (rand() % 100) + 1;
    int guess = 0;
    int licz = 0;
    while (guess!=liczba) {
        licz++;
        cout << "Ilosc prob: " << licz << endl;
        cout << "Witaj, zgadnij jaka liczbe pomyslalem z zakresu 1-100: " << endl;
        cin >> guess;
        if (guess == liczba) {
            cout << "Poprawna liczba!" << endl;
            cout << "Ilosc prob: " << licz << endl;
        }
        else if (guess < liczba){
            cout << "Za malo" << endl;
        }
        else if (guess > liczba) {
            cout << "Za duzo\n";
        }   
    }
    getchar();getchar();
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
