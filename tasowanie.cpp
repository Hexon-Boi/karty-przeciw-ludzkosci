#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <windows.h>
#include "naglowek.hpp"
using namespace std;

std::string karty[5];
std::string kartybot1[5];
std::string kartybot2[5];
std::string pytania[5];

void TasowanieGracz() {
	//Debug cout << "Tasowanie Kart w toku..." << endl;
	int los;
	srand(4-time(0));
	int linia=0;
	string test;
	ifstream plik;
	for(int i=0; i<5;i++){
		los=rand() % 272 + 1;
		plik.open("karty.txt", ios_base::in);
			if(plik.is_open()==true) {
				while(!plik.eof()){
					//Debug cout << "Los: " << los << endl;
					//Debug cout << "Linia: " << linia << endl;
					//Debug cout << "Tekst - " << test << endl;
					getline(plik,test);
					if(linia==los){
						karty[i]=test;
						linia=1;
						break;
					}
					else{
						linia++;
					}
				}
		}
		else {
			cout << "Blad z otwarciem pliku!" << endl;
		}
		plik.close();	
	}
	SprawdzanieGracz();
}

void SprawdzanieGracz() {
	if(karty[0] == karty[1] || karty[0] == karty[2] || karty[0] == karty[3] || karty[0] == karty[4] || karty[1] == karty[2] || karty[1] == karty[3] ||
	karty[1] == karty[4] || karty[2] == karty[3] || karty[2] == karty[4] || karty[3] == karty[4]) {
		TasowanieGracz();
	}
	else {
		cout << "Tasowanie gracza zakonczone.\nTwoje karty to: " << endl;
		for(int i=1; i<=5;i++) {
			cout <<"Karta numer - "<< i << " - " <<  karty[i-1]<< endl;
		}
		TasowanieBot1();
	}
}

void TasowanieBot1() {
	//Debug cout << "Tasowanie Kart Bota 1 w toku..." << endl;
	int los;
	srand(6-time(0));
	int linia=0;
	string test;
	ifstream plik;
	for(int i=0; i<5;i++){
		los=rand() % 272 + 1;
		plik.open("karty.txt", ios_base::in);
			if(plik.is_open()==true) {
				while(!plik.eof()){
					//Debug cout << "Los: " << los << endl;
					//Debug cout << "Linia: " << linia << endl;
					//Debug cout << "Tekst - " << test << endl;
					getline(plik,test);
					if(linia==los){
						kartybot1[i]=test;
						linia=1;
						break;
					}
					else{
						linia++;
					}
				}
		}
		else {
			cout << "Blad z otwarciem pliku!" << endl;
		}
		plik.close();	
	}
	SprawdzanieBot1();
}

void SprawdzanieBot1() {
	if(kartybot1[0] == kartybot1[1] || kartybot1[0] == kartybot1[2] || kartybot1[0] == kartybot1[3] || kartybot1[0] == kartybot1[4] || kartybot1[1] == kartybot1[2] || kartybot1[1] == kartybot1[3] ||
	kartybot1[1] == kartybot1[4] || kartybot1[2] == kartybot1[3] || kartybot1[2] == kartybot1[4] || kartybot1[3] == kartybot1[4]) {
		TasowanieBot1();
	}
	TasowanieBot2();
}

void TasowanieBot2() {
	//Debug cout << "Tasowanie Kart Bota 1 w toku..." << endl;
	int los;
	srand(time(0));
	int linia=0;
	string test;
	ifstream plik;
	for(int i=0; i<5;i++){
		los=rand() % 272 + 1;
		plik.open("karty.txt", ios_base::in);
			if(plik.is_open()==true) {
				while(!plik.eof()){
					//Debug cout << "Los: " << los << endl;
					//Debug cout << "Linia: " << linia << endl;
					//Debug cout << "Tekst - " << test << endl;
					getline(plik,test);
					if(linia==los){
						kartybot2[i]=test;
						linia=1;
						break;
					}
					else{
						linia++;
					}
				}
		}
			else {
				cout << "Blad z otwarciem pliku!" << endl;
			}
		plik.close();	
	}
	SprawdzanieBot2();
}

void SprawdzanieBot2() {
	if(kartybot2[0] == kartybot2[1] || kartybot2[0] == kartybot2[2] || kartybot2[0] == kartybot2[3] || kartybot2[0] == kartybot2[4] || kartybot2[1] == kartybot2[2] || kartybot2[1] == kartybot2[3] ||
	kartybot2[1] == kartybot2[4] || kartybot2[2] == kartybot2[3] || kartybot2[2] == kartybot2[4] || kartybot2[3] == kartybot2[4]) {
		TasowanieBot2();
	}
}

void Rozgrywka(){
	cout << "Rozpoczynanie Rozgrywki!" << endl;
	cout << "Losowanie Pytan..." << endl;
	int los;
	int losbot1;
	int losbot2;
	srand(10-time(0));
	int linia=0;
	string test;
	ifstream plik;
	for(int i=0; i<5;i++){
		los=rand() % 85 + 1;
		plik.open("pytania.txt", ios_base::in);
		if(plik.is_open()==true) {
			while(!plik.eof()){
				//Debug cout << "Los: " << los << endl;
				//Debug cout << "Linia: " << linia << endl;
				//Debug cout << "Tekst - " << test << endl;
				getline(plik,test);
				if(linia==los){
					pytania[i]=test;
					linia=1;
					break;
				}
				else{
					linia++;
				}
			}
		}
		else {
			cout << "Blad z otwarciem pliku!" << endl;
		}
	plik.close();	
	}
	for(int x=0;x<5;x++){
		int wyboor;
		int placeholder;
		cout << "Runda nr: " << x+1 << endl;
		cout << "Kwestia: " << pytania[x] << endl;
		losbot1=rand() % 4 + 0;
		losbot2=rand() % 4 + 0;
		cout << "Twoje karty: " << endl;
		for(int i=1; i<=5;i++) {
			cout <<"Karta numer - "<< i << " - " <<  karty[i-1]<< endl;
		}
		cout << "Wybierz ktora karte chcesz uzyc: " << endl;
		cin >> wyboor;
		cout << "Karta Gracza AI 1: " << kartybot1[losbot1] << endl;
		cout << "Karta Gracza AI 2: " << kartybot2[losbot2] << endl;
		cout << "Karta Gracza : " << karty[wyboor-1] << endl;
		cout << "Aby kontynuowac wpisz cyfre i nacisnij enter" << endl;
		cin >> placeholder;
	}
	Menu();
}
