#include<iostream>
#include<ctime>
using namespace std;

/*4) Массив целых чисел размера N проинициализировать последовательными числами от 1 до N. 
"Перетусовать" элементы массива двумя способами, предложенными на паре: с использованием 
доп.массива и просто меняя местами случайные элементы.*/

void arraycoup(int raz);

int main()
{
	setlocale(0, "");
	int raz;
	cout << "Сколько раз будем перетусовывать элементы в массиве?\n";
	cin >> raz;
	arraycoup(raz);
	system("pause");
}

void arraycoup(int raz)
{
	int const N = 8;
	int array[N];
	int i = 0;
	srand(time(NULL));

	//init+cout
	while (i < N)
	{
		array[i] = i + 1;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	//peretysovka
	
	//random
	
	i = 0;
	while (i < raz)
	{

		int rand1 = rand() % N;
		int rand2 = rand() % N;
		swap(array[rand1], array[rand2]);
		i++;
	}

	//cout
	i = 0;
	while (i < N)
	{
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	
	//s ispolz dop array
	cout << endl << "Dop array\n";
	
	//cout
	i = 0;
	while (i < N)
	{
		array[i] = i + 1;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	
	//cout dop array
	int doparray[N];
	i = 0;
	while (i < N)
	{
		doparray[i] = N - i;
		cout << doparray[i] << "   ";
		i++;
	}
	cout << endl;
	
	i = 0;
	while (i < N)
	{
		if (i % 2 == 0)
		{
			array[i] = doparray[i];
		}
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
