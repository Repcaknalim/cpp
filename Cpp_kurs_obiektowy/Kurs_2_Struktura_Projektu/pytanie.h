#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

class Pytanie
{
public: 

	std::string tresc;
	std::string a, b, c, d;
	int nr_pytania;
	std::string poprawna;
	std::string odpowiedz;
	int punkt;

	void wczytaj();		//wczytuje dane z pliku
	void zadaj();		//zadaj pytanie
	void sprawdz();		//sprawdza poprawnosc
};