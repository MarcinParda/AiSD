// Pow.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

double pow(int x, int n){
	if (n == 0)
		return 1;
	return x * pow(x, n - 1);
}


int main()
{
	cout << pow(4, 4);
	system("pause");
}

