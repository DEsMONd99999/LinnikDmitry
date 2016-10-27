#include<iostream>
#include<ctime>
using namespace std;

/*2) Массив целых чисел размера N проинициализировать случайными числами из промежутка от -N до N. 
Циклически сдвинуть элементы массива вправо на 1 элемент (последний элемент станет первым, 1-й станет 2-м, 
2-й станет 3-м и т.д.) потом циклически сдвинуть элементы массива влево на 1 элемент 
(первый элемент станет последним, 2-й станет 1-м и т.д)*/

void sdvigarray();

int main()
{
	sdvigarray();
	system("pause");
}

void sdvigarray()
{
	int const N = 8;
	int array[N];
	int i = 0;
	srand(time(NULL));
	
	//init+cout
	while (i < N)
	{
		array[i] = rand() % (2*N) - N;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;
	
	//v pravo
	i = N - 1; 
	while (i > 0)
	{
		swap(array[i-1], array[i]);
		i--;
	}
	
	//cout
	i = 0;
	while (i < N)
	{
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;
	
	//v levo
	i = 0;
	while (i < (N - 1))
	{
		swap(array[i + 1], array[i]);
		i++;
	}
	
	//cout
	i = 0;
	while (i < N)
	{
		cout << array[i] << "   ";
		i++;
	}
}