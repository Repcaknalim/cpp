// najblizej_sredniej.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

double l[5];

double srednia(double* tab, int n)
{
    double sr = 0;
    
    for (int i = 0; i < n; i++) 
    {
        sr += *tab;
        tab++;
    }

    return sr/(double)n;
}

void najblizsza(double* tab, int n, double sr)
{
    double naj_1 = 0, naj_2 = 0, ctr = abs(sr - tab[0])+1;

    for (int i = 0; i < n; i++) 
    {
        //std::cout << "\nP:: " << i+1 << " liczba: " << tab[i] << " abs: " << abs(sr - tab[i]) << " ctr: " << ctr; //debug
        if (ctr >= abs(sr - tab[i]))
        {
            //std::cout << " IN ";  //debug
            if (ctr > abs(sr - tab[i]))
            {
                ctr = abs(sr - tab[i]);
                naj_1 = tab[i];
                
            }
            else 
            {
                if(tab[i]!=naj_1)naj_2 = tab[i];
            }
        }
    }

    std::cout << "\nWartosc najblizej sredniej to: " << naj_1;
    if (naj_2 != 0) std::cout << " oraz " << naj_2;
    std::cout << "\n";
}

int main()
{
    std::cout << "Podaj piec liczb: \n";
    for (int i = 0; i < 5; i++) 
    {
        std::cout << "  Podaj " << i+1 << " liczbe ";
        std::cin >> l[i];
    }

    double w_srednia = srednia(l, 5);
    std::cout << "\nSrednia liczb: " << w_srednia << "\n";

    najblizsza(l, 5, w_srednia);

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
