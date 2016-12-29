#include <iostream>
#include <clocale>
using namespace std;

//Написать программу, которая разбивает введенное предложение на слова.

int const MAX_LENGTH = 255;

void writeWords(char str[]);

int main()
{
	char str[MAX_LENGTH];
	cout << "Vedite stroky\n";
	cin.getline(str, MAX_LENGTH);

	writeWords(str);

	cout << "\n\n";
	system("pause");
	return 0;
}

void writeWords(char str[])
{
	int count = 1;
	bool newWord = 1;
	for (int i = 0; ; i++)
	{
		
		switch (str[i])
		{
		case '/':
		case ';':
		case ':':
		case '!':
		case '.':
		case ',':
		case ' ': newWord = 1;  break;
		case '\0': return;
		default:  if (newWord) {
			cout << '\n' << count++ << " word - "; newWord = 0;
			}
				 cout << str[i];
		}
	}
}