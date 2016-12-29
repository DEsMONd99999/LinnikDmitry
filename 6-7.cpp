#include <iostream>
using namespace std;

//Определить, является ли строка палиндромом. (В строке слова разделены любым количеством пробелов.)

int const MAX_LENGTH = 255;

void  checkingPalindrom(char str[MAX_LENGTH]);

void main()
{
	setlocale(0, "");
	char str[MAX_LENGTH];
	cout << "Введите строку\n";
	cin.getline(str, MAX_LENGTH);
	checkingPalindrom(str);
	system("pause");
	return;
}

void checkingPalindrom(char str[MAX_LENGTH])
{
	int late = 0, early = 0;
	for (; str[late] != '\0'; late++);
	late--;
	while (early < late)
	{
		if (str[early] == ' ')
		{
			early++; continue;
		}
		if (str[late] == ' ')
		{
			late--; continue;
		}
		if (!(str[early] == str[late]))
		{
			cout << "Не палиндром\n";
			return;
		}
		else
		{
			early++; late--; continue;
		}

	}
	cout << "Палиндром\n";
}
