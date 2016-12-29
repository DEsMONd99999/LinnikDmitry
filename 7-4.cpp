#include <iostream>
#include <ctime>
/* В матрице (n,m) найти те строки и вывести их номера, 
элементы которых образуют возрастающую последовательность. */

using namespace std;
int const M = 3;
void initMatr(int matr[][M], int N, int M);
void printMatr(int matr[][M], int N, int M);
void findIncreasingSequence(int matr[][M], int N, int M);

void main()
{
	setlocale(0, "");
	int const N = 3;
	int matr[N][M];

	initMatr(matr, N, M);
	printMatr(matr, N, M);
	findIncreasingSequence(matr, N, M);
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

void findIncreasingSequence(int matr[][M], int N, int M)
{
	cout << "Возрастающая последовательность найдена в следующих строках:\n"; // если пусто, то соответственно не найдено
	for (int i = 0; i < N; i++)
	{
		int flag = 1;
		for (int j = 1; j < M; j++)
		{
			if (matr[i][j - 1] < matr[i][j]) flag = 1;
			else
			{
				flag = 0; break;
			}
		}
		if (flag) cout << "Строка №" << (i+1) << '\n';
	}
}
