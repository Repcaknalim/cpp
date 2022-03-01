// Kurs_14_Sortowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

clock_t start, stop;
double czas;

void bubble(int *tab, int n)
{
    int temp;
    for (int i = 1; i < n;i++) 
    {
        for (int j = n-1; j >= 1; j--)
        {
            if (tab[j] < tab[j - 1]) //zmiana znaku = malejaco/rosnaco
            {
                temp = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

void quick(int* tab, int lewy, int prawy)
{
    int v = tab[(lewy + prawy) / 2];
    int i, j, x;
    i = lewy;
    j = prawy;
    do 
    {
        while (tab[i] < v) i++;
        while (tab[j] > v) j--;
        if (i <= j) 
        {
            x = tab[i];
            tab[i] = tab[j];
            tab[j] = x;
            i++;
            j--;
        }
    } while (i <= j);
    if (j > lewy)quick(tab, lewy, j);
    if (i < prawy)quick(tab, i, prawy);
}

int main()
{
    int ile;
    int* tablica;
    int* tablica2;

    std::cout << "Porownanie czasow sortowania v.1" << std::endl;
    std::cout << "Ile losowych liczb w tablicy: ";
    std::cin >> ile;

    //dynamiczna alokacja tablicy
    tablica = new int[ile];
    tablica2 = new int[ile];

    //inicjowanie generatora
    srand(time(NULL));

    //wczytywanie liczb losowych do tablicy
    for (int i = 0; i < ile;i++)
    {
        tablica[i] = rand() % 100000 + 1;
        tablica2[i] = tablica[i];
        //std::cout << tablica2[i] << " ";
    }

    std::cout << "Bubble: ";

    start = clock();
    bubble(tablica, ile);
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    std::cout << czas << "\n";

    std::cout << "Quick: ";

    start = clock();
    quick(tablica2, 0, ile-1);
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    std::cout << czas << "\n";

    delete []tablica;
    delete []tablica2;

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
