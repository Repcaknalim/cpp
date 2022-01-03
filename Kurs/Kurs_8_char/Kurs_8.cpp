// Kurs_8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>       //getline
#include <algorithm>    //transform

//string c++ reference

using namespace std;

int main()
{
    string wyraz;

    cout << "Podaj wyraz: ";
    getline(cin, wyraz);            //pobierz ze spacjami

    int dlugosc = wyraz.length();   //sprawdz dlugosc

    for (int i = dlugosc - 1; i >= 0; i--) cout << wyraz[i];
    cout << endl;

    /* Misc */
    string jeden = "Ala ma";
    string dwa = " kota";
    string trzy = jeden + dwa;  //konkatenacja
    cout << trzy << endl;

    transform(trzy.begin(), trzy.end(), trzy.begin(), ::toupper);   //Wszystko w duze
    cout << trzy << endl;
    transform(trzy.begin(), trzy.end(), trzy.begin(), ::tolower);   //Wszystko w male
    cout << trzy << endl;

    string szukaj = "kot";
    size_t pozycja = trzy.find(szukaj);     //znajdz
    if (pozycja != string::npos)
    {
        cout << "Znaleziono kota na pozycji: " << pozycja << endl;
    }
    else 
    {
        cout << "Nie znaleziono kota!" << endl;
    }

    trzy.erase(3,3);                //usun
    cout << trzy << endl;

    trzy.insert(8, " chleba");      //dodaj
    cout << trzy << endl;

    trzy.replace(3, 6, " nie ma "); //zastap
    cout << trzy << endl;

    string nowy_napis = trzy.substr(4, 7);  //wyciagnij do substringa
    cout << nowy_napis << endl;
    /**/

    /* in C 
    const char *napis = "Ala ma kota";
    cout << napis << endl;

    napis = "kot";
    cout << napis << endl;
    /* */

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
