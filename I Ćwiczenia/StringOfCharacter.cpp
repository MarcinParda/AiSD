// StringOfCharacter.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string makeString(string s, int i, char ch) {
	if (i == 0)
		return s;
	s.push_back(ch);
	return makeString(s, i - 1, ch);
}

int main()
{
	string s = "";
	cout << makeString(s, 5, '*');
	system("pause");
}

