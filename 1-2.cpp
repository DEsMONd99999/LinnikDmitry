#include <iostream>
#include <ctime>
using namespace std;

/*2) Пользователь вводит с клавиатуры пятизначное натуральное число, которое сохраняется в переменную n,
проверить корректность ввода, составить и вывести на экран число из цифр введённого числа n, так,
чтобы выведенное число оказалось максимальным из возможных.Например, если пользователь ввёл число 22195,
то программа должна вывести число 95221.*/

int sort(int vod);
int pyatizn(float vod);
int natural(float vod);

int main()
{
	setlocale(0, "");
	cout << "Введите пятизначное натуральное число\n";
	float n;
	cin >> n;
	if (natural(n) == 0)
	{
		system("pause"); return 0;
	}
	if (pyatizn(n) == 0)
	{
		system("pause"); return 0;
	}
	cout << "Макс число из этих цифр " << sort(n) << endl;
	system("pause");
}

int sort(int vod)
{
	const int N = 5;
	int array[N];
	int i = 0;
	while (i < N)
	{
		array[i] = vod % 10;
		vod /= 10;
		i++;
	}
	i = 0;
	while (i < N)
	{
		// Массив просматривается с конца до
		// позиции i и "легкие элементы всплывают"
		int j = N - 1;
		while (j > i)
		{
			// Если соседние элементы расположены
			// в неправильном порядке, то меняем
			// их местами
			if (array[j] < array[j - 1])
			{
				swap(array[j], array[j - 1]);
			}
			j--;
		}
		i++;
	}
	//Обратно в число
	vod = array[4];
	i = 3;
	while (i >= 0)
	{
		vod *= 10;
		vod += array[i];
		i--;
	}
	return vod;
}

int pyatizn(float vod)
{
	int i = 1;
	while (vod > 9)
	{
		vod /= 10;
		i++;
	}
	if (i == 5) return 1;
	else { cout << "Число не пятизначное\n"; return 0; }
}

int natural(float vod)
{
	int natur = vod;

	if (vod == natur && natur > 0) return 1;
	else { printf("Число не натуральное\n"); return 0; }
}
