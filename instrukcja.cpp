#include <iostream>
#include "naglowek.hpp"
using namespace std;
// do poprawnego dzialania programu nalezy dodac -std=c++11 do opcji kompilatora w Tools>Compiler Options

void Instrukcja() {
	int wybor;
	cout << "Instrukcja Kart Przeciwko Ludzkosci" << endl;
	cout << "Kazdy gracz posiada zestaw 5 kart" << endl;
	cout << "Losowane jest 'pytanie' i zadaniem kazdego gracza jest wybranie karty ktora wywola najwiecej smiechu" << endl;
	cout << "Zwazajac ze jedynym czlowiekiem w grze jestes ty graczu to wybranie zwyciezcy jest twoim zadaniem" << endl;
	cout << "Jesli Kwestia to pytanie to wybrane karty to odpowiedz na nie" << endl;
	cout << "Jesli Kwestia to zdanie zawierajace kropki to karte podstawiamy za kropki" << endl;
	cout << "Aby powrocic do menu wpisz cyfre i nacisnij enter" << endl;
		cin >> wybor;
		Menu();
}
