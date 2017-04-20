#include <iostream>
#include <ctime>
/* В матрице (n,m) удалить нулевые строки (из одних нулей), 
"подтянув" все остальные вверх. */

using namespace std;
int const M = 5;
void initMatr(int matr[][M], int N, int M);
void printMatr(int matr[][M], int N, int M, int&n);
void delStr(int matr[][M], int N, int M, int str, int&n);
void checkNullLine(int matr[][M], int N, int M, int&n);

void main()
{
	setlocale(0, "");
	int const N = 5;
	int matr[N][M];
	int n = N;

	initMatr(matr, N, M);
	printMatr(matr, N, M, n);
	checkNullLine(matr, N, M, n);
	printMatr(matr, N, M, n);
	system("pause");
}


void initMatr(int matr[][M], int N, int M)
{
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) matr[i][j] = rand();
}

void printMatr(int matr[][M], int N, int M, int&n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < M; j++) cout << matr[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
}

void checkNullLine(int matr[][M], int N, int M, int&n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (matr[i][j] != 0) break;
			if (j == (M - 1)) delStr(matr, N, M, i, n);
		}
	}
	
}


void delStr(int matr[][M], int N, int M, int str, int&n)
{
	for (int i = str; i < n - 1; i++)
		for (int j = 0; j < M; j++)
			matr[i][j] = matr[i + 1][j];
	n--;
}
