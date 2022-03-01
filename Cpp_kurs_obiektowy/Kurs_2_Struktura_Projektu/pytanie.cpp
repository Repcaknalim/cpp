#include "pytanie.h"

void Pytanie::wczytaj()
{
	std::fstream plik;
	plik.open("quiz.txt", std::ios::in);

	if (plik.good() == false)
	{
		std::cout << "Nie udalo sie otworzyc pliku...\n";
		exit(0);
	}

	int numer_lini = (nr_pytania - 1) * 6 + 1;
	int aktualny_nr = 1;
	std::string linia;

	while (getline(plik, linia))
	{
		if (aktualny_nr == numer_lini) tresc = linia;
		if (aktualny_nr == numer_lini + 1) a = linia;
		if (aktualny_nr == numer_lini + 2) b = linia;
		if (aktualny_nr == numer_lini + 3) c = linia;
		if (aktualny_nr == numer_lini + 4) d = linia;
		if (aktualny_nr == numer_lini + 5) poprawna = linia;
		aktualny_nr++;
	}

	plik.close();	
}

void Pytanie::zadaj()
{
	std::cout << "\n" << tresc << "\n";
	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";
	std::cout << "c: " << c << "\n";
	std::cout << "d: " << d << "\n";
	std::cout << "\nOdpowiedz: ";
	std::cin >> odpowiedz;
}

void Pytanie::sprawdz()
{
	if (odpowiedz == poprawna) punkt = 1;
	else punkt = 0;
}