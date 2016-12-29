#include <iostream>
using namespace std;

//Введите строку1 и строку2. Определите совпадают ли они без учета пробелов (строки нельзя менять, удаляя просто пробелы).

int const MAX_LENGTH = 255;

void  stringComparison(char str1[MAX_LENGTH], char str2[MAX_LENGTH]);

void main()
{
	setlocale(0, "");
	char str1[MAX_LENGTH], str2[MAX_LENGTH];
	cout << "Введите строку 1\n";
	cin.getline(str1, MAX_LENGTH);
	cout << "Введите строку 2\n";
	cin.getline(str2, MAX_LENGTH);

	stringComparison(str1, str2);
	system("pause");
	return;
}

void  stringComparison(char str1[MAX_LENGTH], char str2[MAX_LENGTH])
{
	int i1 = 0, i2 = 0;
	while (str1[i1] != '\0' || str2[i2] != '\0')
	{
		if (str1[i1] == str2[i2]) { i1++; i2++; continue; }
		if (str1[i1] == ' ') { i1++; continue; }
		if (str2[i2] == ' ') { i2++; continue; }
		cout << "Строки не совпадают\n";
		return;
	} 
	cout << "Строки совпадают\n";
	
}