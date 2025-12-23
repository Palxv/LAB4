#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i, a, odd_count = 0;
	cout << "Введіть послідовність цілих чисел. Нуль - ознака кінця." << endl;
	for (i = 1;; i++)
	{
		cout << "Введіть число = "; 	cin >> a;
		if (a == 0) break;
		if (a % 2 != 0) odd_count++;
	}
	cout << "Зустрілося " << odd_count << " непарних числа." << endl;
}