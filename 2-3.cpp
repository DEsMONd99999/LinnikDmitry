#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

/*3) Массив А целых чисел размера N проинициализировать случайными числами из промежутка от -N до N.
Не используя функции из задачи 2-2 Написать функции циклического сдвига элементов массива вправо на k элементов
(1-й станет 1+k -ым, 2-й станет 2+k -ым и т.д.) и влево на k элементов. В main написать вызов этих функций для числа k,
которое вводит пользователь. (k может быть в частности =0, тогда сдвига нет, k=1 - задача аналогично предыдущей 2-2.cpp и т.д)
Надо придумать формулу вычисления нового индекса элемента чтобы обойтись одним циклом по массиву А.*/

void sdvigarray(int k);

int main()
{
	setlocale(0, "");
	int k;
	cout << "Насколько шагов будем сдвигать элементы массива?\n";
	cin >> k;
	sdvigarray(k);
	system("pause");
}


void sdvigarray(int k)
{
	int const N = 8;
	int array[N];
	k = k % N;
	int doparray[N];
	int i = 0;

	//init+cout
	while (i < N)
	{
		array[i] = rand() % (2 * N) - N;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	if (N == k || k == 0)
	{
		cout << "Готово\n";
		return;
	}

	//v pravo
	
	i = 0;
	while (i < N)
	{
		doparray[(i+k) % N] = array [i];
		i++;
	}
	
	/*
	//vvod temp
	i = 0;
	while (i < k)
	{
		doparray[i] = array[N - k + i];
		i++;
	}

	//perestanovka
	i = 0;
	while ((i + k - 1) < N)
	{
		array[(N - 1 - i)] = array[((N - k) - 1 - i)];
		i++;
	}

	//vozrat temp
	i = 0;
	while (i < k)
	{
		array[i] = doparray[i];
		i++;
	}*/

	//cout

	i = 0;
	while (i < N)
	{
		cout << doparray[i] << "   ";
		i++;
	}
	cout << endl;

	//v levo

	i = 0;
	while (i < N)
	{
		doparray[(i - k + N) % N] = array[i];
		i++;
	}
	/*
	//vvod temp
	i = 0;
	while (i < k)
	{
		doparray[i] = array[i];
		i++;
	}

	//perestanovka
	i = 0;
	while ((i + k) < N)
	{
		array[i] = array[k + i];
		i++;
	}

	//vozrat temp
	i = 0;
	while (i < k)
	{
		array[N - k + i] = doparray[i];
		i++;
	}
	*/
	//cout
	i = 0;
	while (i < N)
	{
		cout << array[i] << "   ";
		i++;
	}
	return;
}
