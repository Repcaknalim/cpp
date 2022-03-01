// Kurs_6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdio.h>		//exit
#include <cstdlib>		//cls
#include <conio.h>		//getch

using namespace std;

int main()
{
	for (;;) { //while(true)
		float a, b;
		char wybor;
		cout << "Podaj pierwsza liczbe: ";
		if (!(cin >> a)) {
			cerr << "To nie jest liczba!";
			exit(0);
		}
		cout << "Podaj druga liczbe: ";
		if (!(cin >> b)) {
			cerr << "To nie jest liczba!";
			exit(0);
		}
		cout << endl;
		cout << "MENU GLOWNE" << endl;
		cout << "----------------" << endl;
		cout << "1. Dodawanie" << endl;
		cout << "2. Odejmowanie" << endl;
		cout << "3. Mnozenie" << endl;
		cout << "4. Dzielenie" << endl;
		cout << "5. Koniec programu" << endl;

		cout << endl;
		wybor = _getch();	//od razu uzyskaj input z klawiatury (bez enter)

		switch (wybor)
		{
		case '1':
			cout << "Suma: " << a + b << endl;
			break;
		case '2':
			cout << "Roznica: " << a - b << endl;
			break;
		case '3':
			cout << "Iloczyn: " << a * b << endl;
			break;
		case '4':
			if (b == 0) cout << "Nie dzielimy przez 0!" << endl;
			else cout << "Iloraz: " << a / b << endl;
			break;
		case '5':
			exit(0);
		default:
			cout << "Brak opcji w menu!" << endl;
			break;
		}
		getchar();getchar();
		system("cls");
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
