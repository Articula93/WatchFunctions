//Матрицы: арифметические операции.
#include<iostream>
using namespace std;
#define MATRIX
#if defined MATRIX
const int LINE = 5;
const int COLUMN = 5;


void FillRand(int arr1[LINE][COLUMN], const int LINE, const int COLUMN);
void Print(int arr1[LINE][COLUMN], const int LINE, const int COLUMN);
void SumMatrix(int arr1[LINE][COLUMN], int arr2[LINE][COLUMN], int arr3[LINE][COLUMN]);
void SubMatrix(int arr1[LINE][COLUMN], int arr2[LINE][COLUMN], int arr3[LINE][COLUMN]);
void SubMatrixX(int arr1[LINE][COLUMN], int arr2[LINE][COLUMN], int arr3[LINE][COLUMN]);
void MultiMatrix(int arr1[LINE][COLUMN], int arr2[LINE][COLUMN], int arr3[LINE][COLUMN]);


void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Первая матрица: " << endl;
	int arr1[LINE][COLUMN];
	FillRand(arr1, LINE, COLUMN);
	Print(arr1, LINE, COLUMN);
	cout << "Вторая матрица: " << endl;
	int arr2[LINE][COLUMN];
	FillRand(arr2, LINE, COLUMN);
	Print(arr2, LINE, COLUMN);
	cout << endl;
	cout << "Сложение первой и второй матрицы: " << endl;
	int arr3[LINE][COLUMN];
	SumMatrix(arr1, arr2, arr3);
	Print(arr3, LINE, COLUMN);
	cout << endl;
	cout << "Вычитание второй матрицы из первой: " << endl;
	SubMatrix(arr1, arr2, arr3);
	Print(arr3, LINE, COLUMN);
	cout << "Вычитание первой матрицы из второй: " << endl;
	SubMatrixX(arr1, arr2, arr3);
	Print(arr3, LINE, COLUMN);
	cout << "Умножение первой и второй матрицы: " << endl;
	MultiMatrix(arr1, arr2, arr3);
	Print(arr3, LINE, COLUMN);

}

void FillRand(int arr[LINE][COLUMN], const int LINE, const int COLUMN)
{
	for (int i = 0; i < LINE; i++)
	{
		for (int j = 0; j < COLUMN; j++)
			arr[i][j] = 1 + rand() % 10;
	}
}
void Print(int arr[LINE][COLUMN], const int LINE, const int COLUMN)
{
	for (int i = 0; i < LINE; i++)
	{
		for (int j = 0; j < COLUMN; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void SumMatrix(int arr1[LINE][COLUMN], int arr2[LINE][COLUMN], int arr3[LINE][COLUMN])
{
	for (int i = 0; i < LINE; i++)
	{
		for (int j = 0; j < COLUMN; j++)

			arr3[i][j] = arr1[i][j] + arr2[i][j];
	}
}
void SubMatrix(int arr1[LINE][COLUMN], int arr2[LINE][COLUMN], int arr3[LINE][COLUMN])
{
	for (int i = 0; i < LINE; i++)
	{
		for (int j = 0; j < COLUMN; j++)
			arr3[i][j] = arr1[i][j] - arr2[i][j];
	}
}
void SubMatrixX(int arr1[LINE][COLUMN], int arr2[LINE][COLUMN], int arr3[LINE][COLUMN])
{
	for (int i = 0; i < LINE; i++)
	{
		for (int j = 0; j < COLUMN; j++)
		{
			arr3[i][j] = arr2[i][j] - arr1[i][j];
		}
	}
}
void MultiMatrix(int arr1[LINE][COLUMN], int arr2[LINE][COLUMN], int arr3[LINE][COLUMN])
{
	for (int i = 0; i < LINE; i++)
	{
		for (int j = 0; j < COLUMN; j++)
		{
			arr3[i][j] = 0;
			for(int k = 0; k < COLUMN; k++)
				arr3[i][j] += arr1[i][j] * arr2[i][j];
		}
	}
}
#endif
