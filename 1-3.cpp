#include <iostream>
#include <ctime>
using namespace std;

/*3) Пользователь вводит с клавиатуры натуральное число не большее 100, которое сохраняется в переменную n, '
проверить корректность ввода, создать массив из 10 случайных целых чисел из отрезка [-2n;n], '
вывести массив на экран в строку, подсчитать и и вывести на экран количество положительных чётных чисел в массиве.*/

int array1(int n);
int natural(float vod);

int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите натуральное число, не большее 100\n";
	cin >> n;
	if (natural(n) == 0)
	{
		system("pause"); return 0;
	}
	if (n < 1 || n > 100)
	{
		cout << "Это не натуральное число не большее 100\n";
		system("pause"); return 0;
	}
	array1(n);

	system("pause");
}

int array1(int n)
{
	srand(time(NULL));
	int const N = 10;
	int array[N];
	int i = 0, chet = 0, nechet = 0;
	while (i < N)
	{
		array[i] = rand() % (3 * n + 1) - 2 * n;
		i++;
	}
	i = 0;
	while (i < N)
	{
		cout << array[i] << "   ";

		if (((array[i]) % 2) == 0) chet++;
		else nechet++;
		i++;
	}
	cout << "Количество нечетных чисел = " << nechet << endl << "Количество четных чисел = " << chet << endl;
	return 0;
}

int natural(float vod)
{
	int natur = vod;

	if (vod == natur && natur > 0) return 1;
	else { printf("Число не натуральное\n"); return 0; }
}
