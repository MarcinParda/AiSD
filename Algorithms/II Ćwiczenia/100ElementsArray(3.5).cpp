// 100ElementsArray.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void menu() {
	cout << "1 - Dodaj liczbe"   << endl
		 << "2 - Usun liczbe"    << endl
		 << "3 - Wypisz tablice" << endl
		 << "4 - Koniec"         << endl
		 << "Podaj nr operacji: ";
}

int getKey() {
	int key;
	cin >> key;
	cout << endl;
	return key;
}

void showTab(int tab[]) {
	for (int i = 0; i < 100; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl << endl;
}

void add(int * tab, int number) {
	for (int i = 0; i < 100; i++)
	{
		if (tab[i] == 0) {
			tab[i] = number;
			return;
		}
	}
	cout << endl <<  "Nie ma miejsca na nowa liczbe" << endl;
}

void remove(int * tab, int number) {
	for (int i = 0; i < 100; i++)
	{
		if (tab[i] == number) {
			tab[i] = 0;
			cout << "Usunieto" << endl << endl;
			return;
		}
	}
	cout << endl << "Nie ma takiej liczby" << endl;
}

int main()
{
	int tab[100];
	for (int i = 0; i < 100; i++)
	{
		tab[i] = i;
	}

	bool iterate = true;
	int number;

	while (iterate)
	{
		menu();
		switch (getKey()) {
			case 1:
				cout << endl << "Jaka liczbe chcesz dodac?" << endl;
				number = getKey();
				add(tab,number);
				break;
			case 2:
				cout << endl << "Jaka liczbe chcesz odjac?" << endl;
				number = getKey();
				remove(tab, number);
				break;
			case 3:
				showTab(tab);
				break;
			case 4:
				iterate = false;
				break;
		}
	}
}

