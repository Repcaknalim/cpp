// Kurs_7.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>      //fstream
#include <cstdlib>      //exit
#include <string>       //getline
#include <algorithm>    //transform

using namespace std;

string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odpowiedz;
int punkty = 0;

float liczby[100];

string imie, nazwisko;
int nr_tel;

int main()
{
    /* Quiz 
    int nr_linii = 1;
    string linia;
    int nr_pytania = 0;

    fstream plik;
    plik.open("quiz.txt", ios::in);

    if (plik.good() == false)                   //czy good z plikiem
    {
        cout << "Plik nie istnieje!" << endl;
        exit(0);
    }

    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
            case 1: temat = linia;                  break;
            case 2: nick = linia;                   break;
            case 3: tresc[nr_pytania] = linia;      break;
            case 4: odpA[nr_pytania] = linia;       break;
            case 5: odpB[nr_pytania] = linia;       break;
            case 6: odpC[nr_pytania] = linia;       break;
            case 7: odpD[nr_pytania] = linia;       break;
            case 8: poprawna[nr_pytania] = linia;   break;
        }
        if (nr_linii == 8) {
            nr_linii = 2;
            nr_pytania++;
        }
        nr_linii++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << endl << tresc[i] << endl;
        cout << "A: " << odpA[i] << endl;
        cout << "B: " << odpB[i] << endl;
        cout << "C: " << odpC[i] << endl;
        cout << "D: " << odpD[i] << endl;

        cout << "Twoja odpowiedz: ";
        cin >> odpowiedz;

        transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);    //duze litery w male litery

        if (odpowiedz == poprawna[i])
        {
            cout << "Dobrze! Zdobywasz punkt!" << endl;
            punkty++;
        }
        else cout << "Zle! Brak punktu. Poprawna odpowiedz: " << poprawna[i] << endl;
    }

    cout << endl << "Koniec! Zdobyte punkty: " << punkty << endl;
    /**/

    /* Pomiary */
    string linia;
    int numer_linii;

    fstream plik;
    plik.open("pomiary.txt", ios::in);

    if (plik.good() == false)
    {
        cout << "Plik nie istnieje!" << endl;
        exit(0);
    }

    int licznik = 0;

    while (!plik.eof())             //dopóki NIE: koniec pliku
    {
        getline(plik, linia);                   //pobierz linie
        liczby[licznik] = atof(linia.c_str());  //przerób na floata
        licznik++;
    }

    plik.close();

    cout << "Ilosc pomiarow: " << licznik << endl << endl;

    for (int i = 0; i < licznik; i++) cout << liczby[i] << endl;

    /**/

    /* Zapis do pliku 
    cout << "Podaj imie: ";             cin >> imie;
    cout << "Podaj nazwisko: ";         cin >> nazwisko;
    cout << "Podaj numer telefonu: ";   cin >> nr_tel;

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app); //out - wyprowadz z programu, app - dopis do pliku

    plik << imie << endl;
    plik << nazwisko << endl;
    plik << nr_tel << endl;

    plik.close();
    /**/

    /* Odczyt z pliku
    fstream plik;
    plik.open("wizytowka.txt", ios::in);        //in - wprowadz do programu

    if (plik.good() == false)                   //czy good z plikiem
    {
        cout << "Plik nie istnieje!" << endl;
        exit(0);
    }

    string linia;
    int numer_linii = 1;

    while (getline(plik, linia))        //odczyt póki istnieją linie, getline - pobierz linie
    {
        switch (numer_linii)
        {
            case 1: imie = linia; break;
            case 2: nazwisko = linia; break;
            case 3: nr_tel = atoi(linia.c_str()); break;    //atoi - konwersja na liczbę
        }
        numer_linii++;
    }
    cout << imie << endl;
    cout << nazwisko << endl;
    cout << nr_tel << endl;
    /**/

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
