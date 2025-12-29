#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int i = 1, x, max; bool first = true;
    cout << "Введiть числа (0 — кiнець):" << endl;
    while (true) {
        cout << "a[" << i << "]= "; cin >> x;
        if (x == 0) break;
        if (first) {
            max = x;
            first = false;
        }
        else if (x > max) {
            max = x;
        }
    }
    cout << "MAX = " << max << endl;
    return 0;
}
