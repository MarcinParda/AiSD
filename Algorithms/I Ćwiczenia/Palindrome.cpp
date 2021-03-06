// Palindrome.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

string deleteSpace(string s, int i = 0) {
	string s2 = "";
	if (i == s.size())
		return s2;
	if (s[i] != ' ')
		s2.push_back(s[i]);
	return deleteSpace(s, i + 1);
}

string toUpper(string s, int i = 0) {
	locale loc;
	if (i == s.size())
		return s;
	s[i] = toupper(s[i], loc);
	return toUpper(s, i + 1);
}

string palindrome(string s, int i = 0) {
	if (i == s.size() / 2)
		return s;
	s[i] = s[s.size() - 1 - i];
	return palindrome(s, i + 1);
}

bool isPalindrome(string s) {
	if (s == palindrome(s))
		return true;
	return false;
}

int main()
{
	string s = toUpper("Kobyla ma maly bok");
	cout << isPalindrome(deleteSpace(s)) << endl;
	system("pause");
}

