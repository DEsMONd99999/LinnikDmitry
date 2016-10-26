#include <iostream>
#include <ctime>
using namespace std;

/*1) Пользователь вводит с клавиатуры натуральное число, проверить корректность ввода,
вычислить и вывести на экран сумму цифр введённого пользователем числа.*/

int sum(float vod);
int natural(float vod);

int main()
{
	setlocale(0, "");
		float vod;
		cout << "Введите натуральное число\n";
		cin >> vod;
		if (natural(vod) == 1)
		{
			sum(vod);
		}
		else
		{
			system("pause"); return 0;
		}
	system("pause");
}

int sum(float vod)
{
	int sum, natur = vod;
	sum = natur % 10;
	while (natur > 9)
	{
		natur /= 10;
		sum = sum + (natur % 10);
	}
	printf("Сумма цифр = %d \n", sum);
	return 0;
}

int natural(float vod)
{
	int natur = vod;

	if (vod == natur && natur > 0) return 1;
	else { printf("Число не натуральное\n"); return 0; }
}
