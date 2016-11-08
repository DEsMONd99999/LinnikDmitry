#include <iostream> 
#include <iomanip> 

using namespace std;

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