#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, i = 1;
    long long dobutok = 1;
    bool Even = false;
    cout << "Введіть послідовність цілих чисел. Нуль – ознака кінця." << endl;
    while (true) {
        cout << "a[" << i << "]= ";
        cin >> a;
        if (a == 0) break;
        if (a % 2 == 0) {
            dobutok *= a;
            Even = true;
        }
        i++;
    }
    if (Even) {
        cout << "ДОБУТОК = " << dobutok << endl;
    }
    return 0;
}