#include "iostream"

using namespace std;

void NumberDigits(long long);

int main()
{
	long long Number;
	cout << "Enter number\n";
	cin >> Number;
	system("cls");

	NumberDigits(Number);

	return 0;
}

void NumberDigits(long long Number)
{
	long long value = Number > 0 ? Number : -Number;
	int MaxDigit = 0, MinDigit = 9, i = 1;

	for (; value; i++)
	{
		MaxDigit = value % 10 > MaxDigit ? value % 10 : MaxDigit;
		MinDigit = value % 10 < MinDigit ? value % 10 : MinDigit;
		value /= 10;
	}

	cout << "Your number has " << i - 1 << " digits. Max digit: " << MaxDigit << ", Min digit: " << MinDigit << endl;

	system("pause");
}