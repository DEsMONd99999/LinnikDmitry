#include <iostream>
#include <ctime>
//Транспонировать случайную квадратную матрицу(n, n)

using namespace std;
int const N = 7;
void initMatr(int matr[][N]);
void printMatr(int matr[][N]);
void transposeMatrix(int matr[][N]);

void main()
{
	setlocale(0, "");
	int matr[N][N];

	initMatr(matr);
	printMatr(matr);
	transposeMatrix(matr); 
	system("pause");
}


void initMatr(int matr[][N])
{
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) matr[i][j] = rand();
}

void printMatr(int matr[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) cout << matr[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
}

void transposeMatrix(int matr[][N])
{
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
			swap(matr[i][j], matr[j][i]);
	printMatr(matr);
}
