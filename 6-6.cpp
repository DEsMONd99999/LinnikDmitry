#include <iostream>
using namespace std;

//Найти в строке длину максимального слова и индексы его начала и конца.

int const MAX_LENGTH = 255;

void  lengthAndIndexOfMaxWord(char str[MAX_LENGTH]);

void main()
{
	setlocale(0, "");
	char str[MAX_LENGTH];
	cout << "Введите строку\n";
	cin.getline(str, MAX_LENGTH);
	lengthAndIndexOfMaxWord(str);
	system("pause");
	return;
}

void  lengthAndIndexOfMaxWord(char str[MAX_LENGTH])
{
	int length = 0, maxLength = 0, indexStart = 0, indexEnd = 0;
	bool flag = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '/' || str[i] == ';' || str[i] == ':' || str[i] == '!' || str[i] == '.' || str[i] == '?' || str[i] == '&' || str[i] == ',')
		{
			if (flag)
			{
				if (length > maxLength)
				{
					maxLength = length;
					indexStart = i - length;
					indexEnd = i - 1;				
				}
				flag = 0;
				length = 0;
			}

		}
		else
		{
			flag = 1;
			length++;
		}
		i++;
	}

	if (flag && length > maxLength)
	{
		
			maxLength = length;
			indexStart = i - length;
			indexEnd = i - 1;
	}

	cout << "Максимальная длина слова = " << maxLength << "\nЕго индекс начала слова = " << indexStart << "\nЕго индекс конца слова = " << indexEnd << '\n';
	return;
}