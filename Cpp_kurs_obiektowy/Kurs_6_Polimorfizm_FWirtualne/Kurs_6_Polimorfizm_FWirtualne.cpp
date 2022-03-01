// Kurs_6_Polimorfizm_FWirtualne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class Ksztalt
{
public:
    virtual void oblicz_pole() = 0; // czysta funkcja wirtualna
};

class Kolo :public Ksztalt
{
    float r;

public:
    Kolo(float x) 
    {
        r = x;
    }
    virtual void oblicz_pole()
    {
        std::cout << "Pole kola: " << 3.141 * r * r << "\n";
    }
};

class Kwadrat :public Ksztalt
{
    float a;

public:
    Kwadrat(float x)
    {
        a = x;
    }
    virtual void oblicz_pole() 
    {   
        std::cout << "Pole kwadratu: " << a * a << "\n";
    }
};

void obliczenia(Ksztalt* x)
{
    x -> oblicz_pole();
}

int main()
{
    Kolo k(1);
    Kwadrat kw(2);

    Ksztalt* wsk;   //wskaźnik polimorficzny 

    wsk = &k;
    obliczenia(wsk);

    wsk = &kw;
    obliczenia(wsk);

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
