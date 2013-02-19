#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	const int ted = 5;
	int Array [ted][ted];/*= { {1, 2, 3}
							,{4, 5, 6}
							,{7, 8, 9} };*/

	for (int i = 0; i < ted; i++)
	{
		cout << "Enter row " << i+1 << ": \n";
		for (int j = 0; j < ted; j++)
			cin >> Array[i][j];
	}

	for (int i = 0; i < ted; i++)
	{
		for (int j = 0; j < ted; j++)
			cout << setw(3) << Array[i][j];
		cout << endl;
	}
	cout << endl << endl;


	int Array1 [ted][ted];

	for (int i = 0; i < ted; i++)
	{
		for (int j = 0; j < ted; j++)
			Array1[j][i] = Array [i][j];
		for (int j = 0; j < ted; j++)
			Array1[i][j] = Array [j][i];
	}

	for (int i = 0; i < ted; i++)
	{
		for (int j = 0; j < ted; j++)
			cout << setw(3) << Array1 [i][j];
		cout << endl;
	}
}