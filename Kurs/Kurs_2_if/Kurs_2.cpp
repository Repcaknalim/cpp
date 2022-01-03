// Kurs_2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;

int bankomat() {
    for (int i = 3; i != 0; i--) {
        cout << "Witaj w banku, podaj PIN: ";
        string PIN;
        cin >> PIN;
        if (PIN == "1729") {
            cout << "Poprawny PIN" << endl;
            break;
        }
        else {
            cout << "Niepoprawny PIN" << endl;
            if (i == 1) {
                cout << "Blokada logowania: podano trzy razy niepoprawny PIN" << endl;
            }
        }
    }
    return 0;
}

int logowanie() {
    cout << "Podaj login: ";
    string login;
    cin >> login;
    cout << "Podaj haslo: ";
    string haslo;
    cin >> haslo;

    if (login == "admin" && haslo == "szarlotka") {
        cout << "Witaj admin!" << endl;
    }
    else {
        cout << "Zle dane logowania!" << endl;
    }
    return 0;
}

int main()
{
    int x;
    cin >> x;
    if (x == 1) {
        bankomat();
    }
    else if (x == 2) {
        logowanie();
    }
    else {
        for (int i = 15; i >= 0; i--) {
            system("cls");
            cout << i << endl;
            Sleep(1000);
        }
        system("cls");
        cout << "JEBUT" << endl;
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
