#include <iostream>
using namespace std;

//Найти в строке слово, начинающееся с заглавной буквы. В этом слове посчитать количество букв i и j

int const MAX_LENGTH = 255;

void  CheckWordWithBigLetter(char str[MAX_LENGTH]);

void main()
{
	setlocale(0, "");
	char str[MAX_LENGTH];
	cout << "Введите строку\n";
	cin.getline(str, MAX_LENGTH);
	CheckWordWithBigLetter(str);
	system("pause");
	return;
}

void CheckWordWithBigLetter(char str[MAX_LENGTH])
{
	int k = 0, i = 0, j = 0, flag = 0;
	for (; str[k] != '\0'; k++)
	{
		if ((str[k] < 91) && (str[k] > 64)) flag = 1;
		if (flag)
		{
			if (str[k] == 'J' || str[k] == 'j') j++;
			if (str[k] == 'I' || str[k] == 'i') i++;
			if (str[k+1] == ' ' || str[k+1] == '/' || str[k+1] == ';' || str[k+1] == ':' || str[k+1] == '!' || str[k+1] == '.' || str[k+1] == '?' || str[k+1] == '&' || str[k+1] == ',' || str[k + 1] == '\0')
			{
				cout << "Количество i = " << i << "\nКоличество j = " << j << '\n';
				return;
			}
		}
	}	
	cout << "Слов с большой буквы не найдено\n";
}