#include "przyjaciele.h"

Punkt::Punkt(std::string n, float xx, float yy)
{
	nazwa = n;
	x = xx;
	y = yy;
}

void Punkt::wczytaj()
{
	std::cout << "Podaj x: "; std::cin >> x;
	std::cout << "Podaj y: "; std::cin >> y;
	std::cout << "Nazwa punktu: "; std::cin >> nazwa;
}

Prostokat::Prostokat(std::string n, float xx, float yy, float s, float w)
{
	nazwa = n;
	x = xx;
	y = yy;
	szerokosc = s;
	wysokosc = w;
}

void Prostokat::wczytaj()
{
	std::cout << "Podaj x lewego naroznika: "; std::cin >> x;
	std::cout << "Podaj y lewego naroznika: "; std::cin >> y;
	std::cout << "Podaj wysokosc: "; std::cin >> wysokosc;
	std::cout << "Podaj szerokosc: "; std::cin >> szerokosc;
	std::cout << "Nazwa prostokata: "; std::cin >> nazwa;
}