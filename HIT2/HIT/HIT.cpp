#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    int x0, y0, R, x, y, prev = -1, curr, i = 1;
    srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    x0 = rand() % 2000 - 1000;
    y0 = rand() % 2000 - 1000;
    R = rand() % 50 + 1;
	//cout << "точці (" << x0 << ", " << y0 << ") та радіус " << R << "." << endl;
    while (true) {
        cout << "X ["<< i <<"]= "; cin >> x;
		cout << "Y [" << i << "]= "; cin >> y;
        curr = (x - x0) * (x - x0) + (y - y0) * (y - y0);
        if (curr <= R * R) break;
        if (prev != -1) {
            if (curr < prev) cout << "Теплiше\n";
            else cout << "Холоднiше\n";
        }
		else cout << "Не для першого разу :Р\n";
        prev = curr;
        i++;
    }
    cout << "Точка " << x << ", " << y << " потрапляе в коло з центром в точці " << x0 << ", " << y0 << " радіусом " << R << "." << endl;
	cout << "Кількість спроб: " << i << endl;
    return 0;
}

