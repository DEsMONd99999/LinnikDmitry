#include <iostream>
using namespace std;

//Найти максимальную длину подстроки, состоящей из звёздочек.

int const MAX_LENGTH = 255;

void  maxLengthStar(char str[MAX_LENGTH]);

void main()
{
	setlocale(0, "");
	char str[MAX_LENGTH];
	cout << "Введите строку\n";
	cin.getline(str, MAX_LENGTH);
	maxLengthStar(str);
	system("pause");
	return;
}

void  maxLengthStar(char str[MAX_LENGTH])
{
	int temp = 0, max = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		
		while (str[i] == '*') 
		{
			temp++;
			i++;
		}
			if (max < temp) max = temp;
			temp = 0;
	}
	cout << "Максимальная длина подстроки, состоящей из звездочек = " << max << "\n";
}