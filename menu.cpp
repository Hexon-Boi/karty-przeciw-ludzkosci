#include <iostream>
#include "naglowek.hpp"
using namespace std;
// do poprawnego dzialania programu nalezy dodac -std=c++11 do opcji kompilatora w Tools>Compiler Options

void Menu() {
	int wybor=7;
	cout << "Witaj w Karty Przeciwko Ludzkosci!\n Menu:\n 1. Jak grac?\n 2. Rozpocznij gre\n 3. Zakoncz Program" << endl;
	cin >> wybor;
	if(wybor>=1 || wybor<=3) {
		switch(wybor) {
			case 1:
				Instrukcja();
			break;
			case 2:
				TasowanieGracz();
				Rozgrywka();
			break;
			case 3:
				exit;
			break;
			default:
				wybor=7;
			break;
		}
	}
	else{
		Menu();
	}
}
