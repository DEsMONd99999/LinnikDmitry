#include <iostream>
#include <ctime>

using namespace std;

/*5) Объявить массив А вещественных чисел размера N (число N объявить как константу).
Проинициализировать значения элементов массива случайными числами из промежутка от -50 до 50.
"Разделить" массив А на два массива : положительные записать в массив В, отрицательные - в С.*/

void sectionpositivenegative();

int main()
{
	sectionpositivenegative();
	system("pause");
	return 0;
}

void sectionpositivenegative()
{
	int const N = 8;
	float A[N] = { 0,0,0,0,0,0,0,0 };
	float B[N] = { 0,0,0,0,0,0,0,0 };
	float C[N] = { 0,0,0,0,0,0,0,0 };
	srand(time(NULL));
	int i = 0;

	while (i < N)
	{
		A[i] = rand() % 101 - 50; // диапазон от -50 до 50 
		i++;
	}

	i = 0;
	while (i < N)
	{
		if (A[i] < 0)
		{
			C[i] = A[i];
		}
		else B[i] = A[i];
	}
}