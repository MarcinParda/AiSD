// DrawSpiral.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void showVector(vector<vector<char>>matrix) {
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[0].size(); j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void draw(int bok, vector<vector<char>>wiersze)
{
	if (bok >= 3)
	{
		int lengthFromEdge = (wiersze.size() - bok) / 2;

		for (int i = 0; i < bok; i++) //drawsqueres
		{
			wiersze[lengthFromEdge][i + lengthFromEdge] = 'O';
			wiersze[bok - 1 + lengthFromEdge][i + lengthFromEdge] = 'O';

			wiersze[i + lengthFromEdge][lengthFromEdge] = 'O';
			wiersze[i + lengthFromEdge][bok - 1 + lengthFromEdge] = 'O';
		}

		int wierszeLength = wiersze.size();

		for (int i = 0; i < bok / 2; i++) //drawRotateSqueres
		{
			wiersze[i + 1 + lengthFromEdge][wierszeLength / 2 + i] = 'O';
			wiersze[i + 1 + lengthFromEdge][wierszeLength / 2 - i] = 'O';


			wiersze[i + 1 + lengthFromEdge + (bok / 2 - 1)][wierszeLength / 2 + i - (bok / 2 - 1)] = 'O';
			wiersze[i + 1 + lengthFromEdge + (bok / 2 - 1)][wierszeLength / 2 - i + (bok / 2 - 1)] = 'O';
		}

		draw(bok / 2, wiersze);
	}
	else
	{
		showVector(wiersze);
	}
}


int main()
{
	int n = 95;
	vector<vector<char>>wiersze;
	vector<char>empty;
	for (int i = 0; i < n; i++)
	{
		wiersze.push_back(empty);
		for (int j = 0; j < n; j++)
		{
			wiersze[i].push_back(' ');
		}
	}
	draw(n, wiersze);
	system("pause");
}