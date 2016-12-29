#include <iostream>
#include <clocale>
using namespace std;
int const MAX_SIZE = 255;
//Определить, сколько слов в строке.
int numberOfWords(char str[MAX_SIZE]);
int main()
{
	setlocale(0, "");
	char str[MAX_SIZE];
	cin.getline(str, MAX_SIZE);
	numberOfWords(str);
	system("pause");
}

int numberOfWords(char str[MAX_SIZE])
{
	int amountOfWords = 0;
	int flag = 1;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') { flag = 1; }
		if (str[i] != ' ') { if (flag) { amountOfWords++; flag = 0; } }
	}
	cout << "Количество слов = " << amountOfWords;
	return amountOfWords;
}