#include<iostream>
#include<ctime>
using namespace std;

/*3) ¬ массиве размера N, заполненного случ.числами от 0 до 10, 
определить максимальную длину последовательности равных элементов.*/

void countdoubles();

int main()
{
	countdoubles();
	system("pause");
}

void countdoubles()
{
	setlocale(0, "");
	srand(time(NULL));
	int const N = 16;
	int array[N] = { 1,2,3,3,5,7,7,7,9,9,9,9,8,8,8,16 };
	int i = 0;

	//init+cout
	while (i < N)
	{
		//array[i] = rand() % 10;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	//count 

	i = 0;
	int maxcounter = 0, counter = 0;
	while (i < N - 1)
	{
		if (array[i] == array[i+1]) 
		{
			counter++;
			int j = i + 1;
			while (j < N)
			{
				if (array[i] == array[j])
				{
					counter++;
					j++;
				}
				else
				{
					j = N;
					if (maxcounter < counter) maxcounter = counter;
					counter = 0;
				}
			}
		}
		i++;
	}
	cout << "ќтвет = " << maxcounter << endl;
	return;
}