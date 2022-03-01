#include "event.h"

Event::Event(std::string n, int d, int m, int y, int h, int min)
{
	name = n;
	day = d;
	month = m;
	year = y;
	hours = h;
	minutes = min;
}

Event::~Event()
{
	std::cout << "Destruktor";
}

void Event::load()
{
	std::cout << "\nNazwa wydarzenia: ";
	std::cin >> name;
	std::cout << "\nDzien: ";
	std::cin >> day;
	std::cout << "\nMiesiac: ";
	std::cin >> month;
	std::cout << "\nRok: ";
	std::cin >> year;
	std::cout << "\nGodzina: ";
	std::cin >> hours;
	std::cout << "\nMinuta: ";
	std::cin >> minutes;
}

void Event::show()
{
	std::cout << "\n" << name << " " << day << "." << month << "." << year << " " << hours << ":" << minutes << "\n";
}