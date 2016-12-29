#include <iostream>
#include <ctime>
/* Найти в случайной матрице седловую точку если она там есть.
Седловой точкой называется элемент матрицы который
является минимумом в строке и максимумом в столбце. */

using namespace std;
int const M = 4;
void initMatr(int matr[][M], int N, int M);
void printMatr(int matr[][M], int N, int M);
void findSaddlePoint(int matr[][M], int N, int M);

void main()
{
	setlocale(0, "");
	int const N = 3;
	int matr[N][M];

	initMatr(matr, N, M);
	printMatr(matr, N, M);
	findSaddlePoint(matr, N, M);
	system("pause");
}


void initMatr(int matr[][M], int N, int M)
{
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) matr[i][j] = rand();
}

void printMatr(int matr[][M], int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) cout << matr[i][j] << "\t";
		cout << endl;
	}
}

void findSaddlePoint(int matr[][M], int N, int M)
{	
	for (int i = 0; i < N; i++)
	{
		int min = matr[i][0], indexMin = 0;
		for (int j = 1; j < M; j++)
			if (min > matr[i][j])
			{
				indexMin = j;
				min = matr[i][j];
			}
		
		int flag = 1;
		for (int k = 0; k < N; k++)
		{
			if (matr[i][indexMin] < matr[k][indexMin])
			{
				flag = 0;
			}
		}
		if (flag)
		{
			cout << "Седловая точка матрицы = " << matr[i][indexMin] << endl;
			return;
		}		
	}
	cout << "Седловая точка не найдена\n";
}
