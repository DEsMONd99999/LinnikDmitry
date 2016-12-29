#include <iostream>
#include <clocale>
using namespace std;

/*1) В дополнение к уже сделанным на практике функциям реализовать аналог функций стандартной библиотеки, находящиеся в заголовочном файле .
Наиболее часто используемые функции.*/
int const MAX_LENGTH = 255;

void backup(char bckp[MAX_LENGTH], char str1[MAX_LENGTH]);
int strlen(char str1[MAX_LENGTH]);
void strcpy(char str1[MAX_LENGTH], char str2[MAX_LENGTH]);
void strncpy(char str1[MAX_LENGTH], char str2[MAX_LENGTH], int size);
void strcat(char str1[MAX_LENGTH], char str2[MAX_LENGTH]);
void strcat(char str1[MAX_LENGTH], char str2[MAX_LENGTH], int size);
int  strchr(char str1[MAX_LENGTH], char search);
int  strRchr(char str1[MAX_LENGTH], char search);

int main()
{ 
	setlocale(0, "");
	char str1[MAX_LENGTH], str2[MAX_LENGTH], bckp[MAX_LENGTH], search; 
	cout << "Введите первую строку\n";
	cin.getline(bckp, MAX_LENGTH);
	cout << "Введите вторую строку\n";
	cin.getline(str2, MAX_LENGTH);
	int size;
	cout << "size = ";
	cin >> size;
	cout << "Какой символ будем искать?\n";
	cin >> search;

	backup(bckp, str1);
	
	cout << "\n\n"; // Для красоты
	

	/*Функция strlen() – вычисления длины строки.Общий формат вызова функции имеет вид : 
	strlen(str); Функция возвращает длину строки str, которая передаётся ей как аргумент, 
	без учета завершающего нулевого символа.*/

	strlen(str1);
	cout << "\n\n";
	

	/*Функция strcpy() – копирования одной строки в другую.Общий формат вызова функции имеет вид : 
	strcpy(str1, str2); Функция копирует содержимое строки str2 в строку str1.
	Исходное содержимое первой строки str1 теряется.*/

	strcpy(str1, str2);
	cout << "\n\n";
	

	/*Функция strNcpy() – копирования заданного количества символов одной строки в другую.Общий формат вызова функции имеет вид : 
	strncpy(str1, str2, size); Функция работает аналогично функции strcpy(), но копирует не более size символов.
	Не обязательно должна копировать завершающий нулевой символ строки str2.*/

	backup(bckp, str1);//Вернем исходники
	strncpy(str1, str2, size);
	cout << "\n\n";
	

	/*Функция strcat() – присоединения (конкатенации) двух строк. Общий формат вызова функции имеет вид:strcat(str1, str2); 
	Первый аргумент str1 является строкой, к которой добавляется содержимое второй строки str2. 
	Первый символ str2 записывается поверх символа '\0' строки str1. В результате в первой строке будет находиться результат сложения двух строк.*/

	backup(bckp, str1);
	strcat(str1, str2);
	cout << "\n\n";
	

	/*Функция strNcat() – присоединения size символов одной строки к другой. Общий формат вызова функции имеет вид: strcat(str1, str2, size); 
	Функция работает аналогично функции strncpy(), но присоединяет к str1 только size символов строки str2.*/

	backup(bckp, str1);
	strcat(str1, str2, size);
	cout << "\n\n";


	/*Функция strchr() – поиска символа в строке. Общий формат вызова функции имеет вид: strchr(str, c); 
	Функция имеет два аргумента, первый является строкой str, в которой выполняется поиск, второй c – является символом, который ищется в строке. 
	Функция возвращает позицию первого найденного символа. Если символ не найден, то функция возвращает NULL.*/

	strchr(str1, search); //Берем строку после слияния
	cout << "\n\n";


	/*Функция strRchr() – определяет позицию последнего вхождения символа в строку и возвращает позицию найденного символа. 
	Если символ не найден, то функция возвращает NULL.*/

	strRchr(str1, search); //Берем строку после слияния
	cout << "\n\n";
	system("pause");
	return 0;
}

void backup(char bckp[MAX_LENGTH], char str1[MAX_LENGTH])
{
	int i = 0;
	while (bckp[i] != '\0')
	{
		str1[i] = bckp[i];
		i++; 
	}
	str1[i] = '\0';	 
}

int strlen(char str1[MAX_LENGTH])
{
	int i = 0;
	while (str1[i] != '\0')	i++;
	cout << "Длина строки = " << i << '\n';
	return i;
}

void strcpy(char str1[MAX_LENGTH], char str2[MAX_LENGTH])
{
	int i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0'; // Нужно ли изменять оставшиеся значения на 0?
	cout << "Строка после копирования:\n" << str1;
}

void strncpy(char str1[MAX_LENGTH], char str2[MAX_LENGTH], int size)
{
	int i = 0;
	while (str2[i] != '\0' && i < size)
	{
		str1[i] = str2[i];
		i++;
	}

	cout << "Строка после копирования " << size << " символов:\n"; cout << str1;
	return;
}

void strcat(char str1[MAX_LENGTH], char str2[MAX_LENGTH])
{
	int i = 0, k = 0;
	
	while (str1[i] != '\0') i++;
	while (str2[k] != '\0')
	{
		str1[i++] = str2[k++];
	}
	str1[i] = '\0';
	cout << "Строка после слияния:\n"<< str1;
}

void strcat(char str1[MAX_LENGTH], char str2[MAX_LENGTH], int size)
{
	int i = 0, k = 0;

	while (str1[i] != '\0') i++;
	while (str2[k] != '\0' && k < size)
	{
		str1[i++] = str2[k++];
	}
	str1[i] = '\0';
	cout << "Строка после слияния (size = " << size<< "):\n" << str1;
}

int  strchr(char str1[MAX_LENGTH], char search)
{
	int i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == search) { cout << "Позиция символа = " << i+1; return i+1; }
		i++;
	}
	cout << "Символ не найден";
	return NULL;
}

int   strRchr(char str1[MAX_LENGTH], char search)
{
	int i = strlen(str1);
	while (i >= 0)
	{
		if (str1[i] == search) { cout << "Последнее вхождение символа на позиции = " << i + 1; return i + 1; }
		i--;
	}
	cout << "Символ не найден";
	return NULL;
}