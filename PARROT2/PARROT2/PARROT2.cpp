#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    char c; bool empty = true;
    cout << "Введiть рядок (порожнiй — вихiд):" << endl;
    while (true) {
        c = cin.get();
        if (c == '\n') {
            if (empty) break;   
            empty = true;
            cout << endl;
        }
        else {
            cout << c;          
            empty = false;
        }
    }
    return 0;
}
