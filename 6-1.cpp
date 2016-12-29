
#include <iostream>

using namespace std;

//Вывод алфавита (символы от A до Z) в виде верхнего треугольника/в виде нижнего треугольника/
//в виде строки A,BB,CCC,DDDD, и т.д до...ZZZ...Z.

void topTriangle(char letter, int numberOfLetter);
void bottomTriangle(char letter, int numberOfLetter);
void alphabetStr(char letter, int numberOfLetter);

int main()
{
	setlocale(0, "");
	int numberOfLetter=26;
	char letter = 65;
	topTriangle(letter, numberOfLetter);
	bottomTriangle(letter, numberOfLetter);
	alphabetStr(letter, numberOfLetter);	
	system("pause");
	return 0;
}


void topTriangle(char letter, int numberOfLetter)
{
	cout << "\nВерхний треугольник\n\n";
	int i = 1, k = 0;
	while (i <= numberOfLetter)
	{
		while (k < i)
		{
			cout << (char)letter;
			k = k + 1;
		}
		cout << endl;
		letter++;
		k = 0;
		i = i + 1;
	}
}
void bottomTriangle(char letter, int numberOfLetter)
{
	cout << "\nНижний треугольник\n\n";
	int i = 1, k = numberOfLetter;
	letter = 65;
	while (i <= numberOfLetter)
	{
		while (k >= i)
		{
			cout << letter;
			k = k - 1;

		}

		cout << endl;
		letter++;
		i = i + 1;
		k = numberOfLetter;
	}
}
void alphabetStr(char letter, int numberOfLetter)
{
	cout << "\nСтрока\n\n";

	letter = 65;
	int i = 1, k = 0;
	while (i <= numberOfLetter)
	{
		while (k < i)
		{
			cout << (char)letter;
			k = k + 1;
		}
		cout << " ";
		letter++;
		k = 0;
		i = i + 1;
	}
}