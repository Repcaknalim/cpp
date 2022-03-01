// Kurs_10_Wskażniki.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile;
clock_t start, stop;
double czas;

float srednia(float* tab, int ile_3)
{
	float suma = 0;

	for (int i = 0; i < ile_3; i++)
	{
		suma += *tab;
		*tab = 999;
		tab++;
	}

	return suma / ile_3;
}

int main()
{
	cout << "Ile liczb w tablicy: ";
	cin >> ile;

	/* Bez wskaźników */
	int* tablica;
	tablica = new int[ile];

	start = clock();
	for (int i = 0; i < ile; i++)
	{
		tablica[i] = i;
		tablica[i] += 50;
	}
	stop = clock();

	czas = (double)(stop - start)/CLOCKS_PER_SEC;
	cout << "Czas operacji (bez wskaznika): " << czas << endl;

	/* Z wskaźnikami */

	int* wskaznik = tablica;
	tablica = new int[ile];

	start = clock();
	for (int i = 0; i < ile; i++)
	{
		*wskaznik = i;
		*wskaznik += 50;
		wskaznik++;
	}
	stop = clock();

	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Czas operacji (wskaznik): " << czas << endl;

	/* Przesylanie tablic */

	float tablica_3[3];

	tablica_3[0] = 1.5;
	tablica_3[1] = 2.3;
	tablica_3[2] = 0.75;

	cout << "Srednia wynosi: " << srednia(tablica_3, 3) << "\n";

	cout << tablica_3[0] << endl;
	cout << tablica_3[1] << endl;
	cout << tablica_3[2] << endl;

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
