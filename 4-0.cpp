#include <iostream> 
#include <iomanip> 

using namespace std;

/* 0) Построить график функции y = sin(2x) / x на промежутке[-6, 6] с шагом 0.1 */

void function();

int main()
{
	function();	
}

void function()
{
	float x = -6, y;
	while (x <= 6)
	{
		y = 20 * (sin(x * 2) / x);
		cout << setw(60 + y) << setfill(' ') << '*' << endl;
		x = x + 0.1;
		if (x == 0)
		{
			x = x + 0.1;
		}
		y++;
	}
	system("pause");
}