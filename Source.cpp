#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int a = 1, b = 1, c;
	while (b < 100)
	{
		c = a + b;
		a = b;
		b = c;
	}
	cout << b << endl;
	system("pause");
	return 0;
}