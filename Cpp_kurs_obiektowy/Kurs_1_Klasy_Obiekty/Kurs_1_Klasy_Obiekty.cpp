// Kurs_1_Klasy_Obiekty.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class Zwierze
{
    public:

    //atrybuty
    std::string gatunek;
    std::string imie;
    int wiek{};

    //metody
    void dodaj_zwierze() 
    {
        std::cout << "Dodawanie nowego zwierzecia do bazy: \nPodaj gatunek: ";
        std::cin >> gatunek;
        std::cout << "Podaj imie: ";
        std::cin >> imie;
        std::cout << "Podaj wiek: ";
        std::cin >> wiek;
    }

    void daj_glos()
    {
        if (gatunek == "kot") std::cout << imie << " lat " << wiek << ": Miau! ";
        else if (gatunek == "pies") std::cout << imie << " lat " << wiek << ": Hau! ";
        else if (gatunek == "krowa") std::cout << imie << " lat " << wiek << ": Muu! ";
        else std::cout << "Nieznany gatunek!";
    }
};

int main()
{
    Zwierze z1;
    z1.dodaj_zwierze();
    z1.daj_glos();

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
