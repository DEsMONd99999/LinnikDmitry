#include<iostream>
#include<ctime>
using namespace std;

/*2) В массиве размера N, заполненного случ.числами от 0 до 10, 
подсчитать количество элементов, встречающихся более одного раза.*/

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
	int array[N];
	int i = 0;

	//init+cout
	while (i < N)
	{
		array[i] = rand() % 10;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;
	
	//count 
	
	i = 0;
	int j = 0, counter = 0;
	while (i < N)
	{
		j = i + 1;
		//Второе число
		while (j < N)
		{
			if (array[i] == -1) break;
			if (array[i] == array[j])
			{
				counter++;
				int k = 0;
				while (k < N)
				{
					if (array[k] == array[j])
					{
						array[k] = -1;
						
					}
					k++;
				}
				break;
			}
			j++;
		}
		i++;
	}
	cout << "Ответ = " << counter << endl;
	return;
}