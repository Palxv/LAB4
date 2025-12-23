#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Працює інформаційна система факультету прикладної математики:\n";
	cout << "1. Новини дня\n";
	cout << "2. Анекдот тижня\n";
	cout << "3. Автора !!!\n";
	cout << "0. Вихід\n";
	do {
		cout << "Введіть відповідний номер і натисніть ENTER. \n";
		cin >> x;
		switch (x) {
		case 0:
			cout << "Вихід з програми. До побачення!\n";
			break;
		case 1:
			cout << "Новини дня: Сьогодні гарна погода!\n";
			break;
		case 2:
			cout << "Анекдот тижня: Чому програмісти не люблять природу? Вона має занадто багато багів!\n";
			break;
		case 3:
			cout << "Автор: Стафехін Павло Андрійович, студент ПА-25у-1.\n";
			break;
		default:
			cout << "Невірний вибір. Будь ласка, спробуйте ще раз.\n";
			break;
		}
		cout << "\n";
	} while (x != 0);
	return 0;
}