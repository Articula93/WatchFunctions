#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n------------------------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 5;


void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

void leftShift(int arr[], const int n, const int number_of_shifts);
void leftShift(double arr[], const int n, const int number_of_shifts);
void Sort(int arr[], const int n);


void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма всех элементов массива = " << Sum(arr, n) << endl;
	cout << "Средне арифметическое всех элементов массива = " << Avg(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	leftShift(arr, n, number_of_shifts);
	Print(arr, n);
	
	cout << delimiter;

	const int d_SIZE = 8;
	double d_arr[d_SIZE];
	FillRand(d_arr, d_SIZE);
	Print(d_arr, d_SIZE);
	cout << "Сумма всех элементов массива = " << Sum(d_arr, d_SIZE) << endl;
	cout << "Средне арифметическое всех элементов массива = " << Avg(d_arr, d_SIZE) << endl;

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	leftShift(d_arr, d_SIZE, number_of_shifts);
	Print(d_arr, d_SIZE);
	cout << endl;
	double arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	

	cout << delimiter;

	const int c_SIZE = 7;
	char c_arr[c_SIZE];
	FillRand(c_arr, c_SIZE);
	Print(c_arr, c_SIZE);
	cout << endl;
	char arr3[ROWS][COLS];
	FillRand(arr3, ROWS, COLS);
	Print(arr3, ROWS, COLS);


	cout << delimiter;
	cout << "Массив типа int: " << endl;
	int arr4[ROWS][COLS];
	FillRand(arr4, ROWS, COLS);
	Print(arr4, ROWS, COLS);
	
	cout << delimiter;
	cout << "Массив типа float:" << endl;
	float arr5[ROWS][COLS];
	FillRand(arr5, ROWS, COLS);
	Print(arr5, ROWS, COLS);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	
		arr[i] = double(rand() % 10000) / 100;	
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand();
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			arr[ROWS][COLS] = rand() % 100;
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			arr[ROWS][COLS] = double(rand() % 10000) / 100;
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			arr[ROWS][COLS] = rand();
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			arr[ROWS][COLS] = float(rand() % 1000) / 10;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[ROWS][COLS] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[ROWS][COLS] << "\t";
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[ROWS][COLS] << "\t";
		}
		cout << endl;
	}
}
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[ROWS][COLS] << "\t";
		}
		cout << endl;
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n);
}
void leftShift(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void leftShift(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = arr[0];
		for (int j = i + 1; j < n; j++)
		{
			
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}