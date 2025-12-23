#include <iostream>
using namespace std;

int main() {
    int N, fact = 1;
    cout << "N = "; cin >> N;
    for (int i = 1; i <= N; i++)
        fact *= i;
    cout << N << "! = " << fact << endl;
    return 0;
}
