#include <iostream>
using namespace std;
//Введите строку, введите целое число. Определить, совпадает ли строка с введённым числом. (Пробелы не учитывать.)
int const MAX_LENGTH = 255;
void  comparingNumberAndString(char str [MAX_LENGTH], int number);
void main()
{
	setlocale(0, "");
	char str[MAX_LENGTH];
	int unsigned long long number;
	cout << "Введите строку\n";
	cin.getline(str, MAX_LENGTH);
	cout << "Введите целое число\n";
	cin >> number;
	comparingNumberAndString(str, number);
	system("pause");
	return;
}

void  comparingNumberAndString(char str[MAX_LENGTH], int number)
{
	int unsigned long long strNumber = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') continue; 
		if (!(str[i] > 47 && str[i] < 58)) { cout << "Не совпадают\n"; return; }
		strNumber = strNumber * 10 + (str[i] - 48);	
	}
	if (strNumber == number) cout << "Совпадают\n";
	else cout << "Не совпадают\n";
}