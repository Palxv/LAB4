#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int N; char c;
    cout << "N = "; cin >> N;
    if (!cin) {
        cout << "Error: N must be a number, not a string!" << endl;
        return 0;
    }
    c = cin.get();
    if (c != '\n') {
        cout << "Error: N must be natural, not real!" << endl;
        return 0;
    }
    if (N <= 0) {
        cout << "Error: N мусить бути додатнiм, не negative!" << endl;
        return 0;
    }
    int fact = 1;
    for (int i = 1; i <= N; i++)
        fact *= i;
    cout << N << "! = " << fact << endl;
    return 0;
}
