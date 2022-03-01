// Kurs_15_Znaki_Polskie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

std::string napis;

char* tr(char* str) //windows - półśrodek
{
    static char buff[256];
    char cp[] = "\245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215ąćęłńóśżźĄĆĘŁŃÓŚŻŹ";
    if(strlen(str)>=sizeof(buff)) return str;
    char* bf = buff;
    while (*str)
    {
        char* pos = strchr(cp + 18, *str);
        *(bf++) = pos ? *(pos - 18) : *str;
        ++str;
    }
    *bf = 0;
    return buff;
}

int main()
{
    std::cin >> napis;
    std::cout << tr((char*)"Wpisany ciąg znaków: ") << napis << '\n';

    // Konwersja w notepadzie++ jest lepsza
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
