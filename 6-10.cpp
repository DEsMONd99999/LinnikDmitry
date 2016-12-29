#include <iostream>
using namespace std;

//Проверить, все ли предложения(до символа .!? ) начинаются с большой буквы.Заменить если надо строчную букву на прописную.

int const MAX_LENGTH = 255;

void  CheckBigLetter(char str[MAX_LENGTH]);

void main()
{
	setlocale(0, "");
	char str[MAX_LENGTH];
	cout << "Введите строку\n";
	cin.getline(str, MAX_LENGTH);
	CheckBigLetter(str);
	system("pause");
	return;
}

void CheckBigLetter(char str[MAX_LENGTH])
{
	bool flag = 1;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '.' && str[i + 1] == '!' && str[i + 2] == '?') { cout << str[i] << str[i + 1] << str[i + 2]; break; }
		if (str[i] == ' ') { cout << str[i]; continue; }
		if (str[i] == '.' || str[i] == '!' || str[i] == '?')
		{
			cout << str[i];
			flag = 1;
			continue;
		}
		if (flag)
		{			
			if (str[i] < 123 && str[i] > 96)
			{
				str[i] -= 32;
				flag = 0;
			}
			else flag = 0;
		}
		cout << str[i];
	}

}