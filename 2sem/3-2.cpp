#include <iostream>
#include <ctime>
using namespace std;

//В массиве А(N,М) поменять местами строки, содержащие максимальный и минимальный элементы.
void swapStrWithMinMax(int**, int, int);
void give_memory(int**&, int, int);
void printArray(int **, int, int);
void initArray(int **, int, int);
void deleteMem(int**, int);

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	int N, M;
	cout << "Введите количество строк и столбцов\n";
	cin >> N >> M;
	int** arr;
	give_memory(arr, N, M);
	initArray(arr, N, M);
	printArray(arr, N, M);
	swapStrWithMinMax(arr, N, M);
	printArray(arr, N, M);
	deleteMem(arr, N);
	system("pause");
}
void swapStrWithMinMax(int** arr, int N, int M)
{
	int minValue = arr[0][0], maxValue = arr[0][0], strWithMin = 0, strWithMax = 0;
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < M; j++) 
		{
			if (minValue > arr[i][j])
			{
				minValue = arr[i][j];
				strWithMin = i; 
			}
			if (maxValue < arr[i][j])
			{
				maxValue = arr[i][j];
				strWithMax = i;
			}
		}
	}/* Так было в 1м семестре!!!! Надо указатели на строку использовать!!!!!!!!!!!!!!!!!!!!
	for (int j = 0; j < M; j++)
	{
		swap(arr[strWithMin][j], arr[strWithMax][j]);
	}*/
}

void give_memory(int**&arr, int N, int M)
{
	try 
	{
		arr = new int*[N];
		for (int i = 0; i < N; i++)
			arr[i] = new int[M];
	}
	catch (...) 
	{
		cout << "Error 1" << endl;
	}
}
void printArray(int** arr, int N, int M)
{
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < M; j++) 
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void deleteMem(int** arr, int N)
{
	for (int i = 0; i < N; i++) 
	{
		delete[]  arr[i];
	}
	delete[] arr;
}
void initArray(int** arr, int N, int M)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			arr[i][j] = rand() % 255;

	cout << endl;
}
