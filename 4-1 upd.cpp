#include <iostream>
#include <ctime>
using namespace std;

/* 1) Реализовать операции целочисленной арифметики на массивах размера 
MAX_SIZE = 100 (глобальная константа).В цикле вычислить максимальное 
возможное на этих массивах число Фибоначчи 1, 1, 2, 3... */

int	const MAX_SIZE = 100;

void initArray(int array[]);
void printArray(int array[], int temp);
int sum(int A[], int B[], int C[]);

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE*MAX_SIZE], temp = 0;
	initArray(A);
	printArray(A, temp); //Немного некорректно, но зато реализован вывод первой цифры
	initArray(B);
	printArray(B, temp);
	
	temp = sum(A, B, C);
	
	cout << "Ответ:\n";
	printArray(C, temp);

	
	system("pause");
}

void initArray(int array[])
{
	int i = 0;
	while (i < MAX_SIZE)
	{
		array[i] = rand() %10;
		i++;
	}
}

void printArray(int array[], int temp)
{
	int i = MAX_SIZE - 1;

	if (temp != 0) cout << temp;
	
	while (i >= 0)
	{
		cout << array[i];
		i--;
	}
	cout << "\n\n";
}

int sum(int A[], int B[], int C[])
{
	int i = 0, temp = 0;
	/*while (i < MAX_SIZE)
	{
		C[i] = A[i] + B[i] + temp;
		temp = C[i] / 10;
		C[i] = C[i] % 10;
		i++;
	}
	return temp;*/
	while (i < MAX_SIZE-1)
	{
		C[i] = A[i] + B[i] + temp;
		temp = C[i] / 10;
		C[i] = C[i] % 10;
		i++;
	}
	C[i] = A[i] + B[i] + temp;
}
