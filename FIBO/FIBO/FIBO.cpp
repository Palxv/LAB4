#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "N = ";
    cin >> N;
    int f0 = 0, f1 = 1, f;
    if (N == 0) {
        f = 0;
    }
    else if (N == 1) {
        f = 1;
    }
    else {
        for (int i = 2; i <= N; i++) {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
    }
    cout << "F(" << N << ") = " << f << endl;
    return 0;
}
