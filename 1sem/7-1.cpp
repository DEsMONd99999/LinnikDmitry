#include <iostream>
#include <ctime>
//Найти в случайной матрице минимум в каждом столбце.
using namespace std;
int const M = 15;
void initMatr(int matr[][M], int N, int M);
void printMatr(int matr[][M], int N, int M);
void minimumInColumn(int matr[][M], int N, int M);

void main()
{
	setlocale(0, "");
	int const N = 15;
	int matr[N][M];
		
	initMatr(matr, N, M);
	printMatr(matr, N, M);
	minimumInColumn(matr, N, M);
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
		for (int j = 0; j < M; j++) cout << matr[i][j] << "\t";
}

void minimumInColumn(int matr[][M], int N, int M)
{
	for (int i = 0; i < M; i++)
	{
		int min = matr[0][i];
		for (int j = 0; j < N; j++)	if (min > matr[i][j]) min = matr[i][j];
		cout << "Минимальный элемент " << (i + 1) << "-го столбца = " << min << "\n";
	}
}
