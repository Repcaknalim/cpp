#pragma once

#include <iostream>

class Event
{
	int day, month, year;
	int hours, minutes;
	std::string name;

public:
	Event(std::string = "brak", int = 1, int = 1, int = 2000, int = 12, int = 0);
	~Event();
	void load();
	void show();

};