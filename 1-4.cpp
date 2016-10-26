#include <iostream>
#include <ctime>
using namespace std;

/*4) Объявить массив вещественных чисел размера N(число N объявить как константу).
Проинициализировать значения элементов массива случайными числами из промежутка от - 50 до 50.
Вывести значения сначала элементов с нечетными коэффициентами(1 - й, 3 - й, 5 - й, ...) а затем - с четными.*/

void eventhenodd();

int main()
{
	setlocale(0, "");
	eventhenodd();
	system("pause");
	return 0;
}

void eventhenodd()
{
	float Array[8] = { 0,0,0,0,0,0,0,0 };
	srand(time(NULL));
	int i = 0;
	while (i < 8)
	{
		Array[i] = rand() % 101 - 50; // диапазон от -50 до 50
		i++;
	}
	i = 0;
	while (i < 8)
	{
		cout << i + 1 << "-ый элемент = " << Array[i] << "   ";
		i++;
	}
	cout << endl << "Нечетные элементы   ";
	i = 0;
	while (i < 8)
	{
		if (i % 2 == 0)
		{
			cout << Array[i] << "   ";
		}
		i++;
	}
	cout << endl << "Четные элементы   ";
	i = 0;
	while (i < 8)
	{
		if ((i % 2) == !0)
		{
			cout << Array[i] << "   ";
		}
		i++;
	}
	

}