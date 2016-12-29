#include <iostream>
#include <clocale>
using namespace std;

/*Заменить в строке, которую вводит пользователь все символы в словах на звездочки. 
Т.е. из строки "Мама мыла раму у бабушки" сделать строку "**** **** **** * *******" 
и распечатать ее в "столбик". Т.е. каждое полученное "слово" с новой строки.*/

int const MAX_LENGTH = 255;

void stars(char str[]);

int main()
{
	setlocale(0, "");
	char str[MAX_LENGTH];
	
	cout << "Введите строку\n";
	cin.getline(str, MAX_LENGTH);

	stars(str);
	
	cout << "\n\n";

	system("pause");
	return 0;
}

void stars(char str[])
{
	bool newWord = 1;
	for (int i = 0; ; i++)
	{

		switch (str[i])
		{
		case ' ': newWord = 1;  break;
		case '\0': return;
		default:  if (newWord) {
			cout << '\n'; newWord = 0;
		}
				  cout << "*";
		}
	}
}