#include <iostream>
using namespace std;

//сли в строке есть фрагменты, симметричные относительно ее "центра" (например, "ab" в строке "abcba", "abc" в "abcсba", "ab" в "abmcnba", или "ab" в "vabxcrbau"), определить, какова их максимальная длина.

int const MAX_LENGTH = 255;

void  checkingPalindrom(char str[MAX_LENGTH]);

void main()
{
	setlocale(0, "");
	char str[MAX_LENGTH];
	cout << "Введите строку\n";
	cin.getline(str, MAX_LENGTH);
	checkingPalindrom(str);
	system("pause");
	return;
}

void checkingPalindrom(char str[MAX_LENGTH])
{
	int late = 0, early = 0, count = 0, maxCount = 0;
	for (; str[late] != '\0'; late++);
	late--;
	while (early < late)
	{
		if (str[early] == ' ')
		{
			early++; continue;
		}
		if (str[late] == ' ')
		{
			late--; continue;
		}
		early++; late--;
		if (str[early-1] == str[late+1])
		{
			count++; 
			if (early < late) continue;
		}	
		if (count > maxCount)
		{
			maxCount = count;
			count = 0;
		}
	}
	cout << "Максимальная длина = " << maxCount << '\n';
}
