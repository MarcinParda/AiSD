// Strong.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;

double strong(int x) {
	if (x == 1)
		return 1;
	return x * strong(x - 1);
}

int main()
{
	cout << strong(3) << endl;
	system("pause");
}