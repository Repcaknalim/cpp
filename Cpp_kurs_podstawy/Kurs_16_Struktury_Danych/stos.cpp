// Struktury_Danych.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <Windows.h>

using namespace std;

const char N = 7;
int dane[N];
int rozmiar;

void wyswietl_stos()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

    cout << "\n";
    cout << "----------------\n";
    cout << "-----STOS:------\n";
    cout << "----------------\n";

    for (int i = rozmiar; i >= 1; i--)
    {
        cout << dane[i] << '\n';
    }

    if (rozmiar == 0) cout << "pusty\n";

    cout << "----------------\n\n";

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void push()
{
    if (rozmiar >= N-1)
    {
        cout << "Stos pelny!";
        Sleep(1000);
    }
    else
    {
        cout << endl << "PUSH (jaka liczbe polozyc na stosie): ";

        rozmiar = rozmiar + 1;
        cin >> dane[rozmiar];
    }
}

void pop()
{
    if (rozmiar >= 1)
    {
        cout << endl << "POP - nastapi usuniecie ze stosu liczby: " << dane[rozmiar];
        Sleep(2000);

        rozmiar = rozmiar - 1;
    }
    else
    {
        cout << "Stos pusty!";
        Sleep(1000);
    }
}

void size()
{
    cout << endl << "Liczba elementow na stosie: " << rozmiar;
    Sleep(2000);
}

void empty()
{

    if (rozmiar == 0) cout << endl << "EMPTY (stos pusty?) ->  TRUE";
    else cout << endl << "EMPTY (stos pusty?) ->  FALSE";
    Sleep(2000);
}

int main()
{
    int wybor;
    rozmiar = 0;
    do
    {
        wyswietl_stos();

        cout << "MENU GLOWNE STOSU:" << endl;
        cout << "------------------------------------------" << endl;
        cout << "1. PUSH (dodaje element na szczyt stosu) " << endl;
        cout << "2. POP (usuwa element ze szczytu stosu) " << endl;
        cout << "3. SIZE (ile elementow na stosie) " << endl;
        cout << "4. EMPTY (czy stos jest pusty?) " << endl;
        cout << "5. Koniec programu " << endl;
        cout << "------------------------------------------" << endl;
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            size();
            break;

        case 4:
            empty();
            break;

        }

    } while (wybor != 5);

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
