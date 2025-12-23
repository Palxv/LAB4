#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0;
    for (i=1;;i++)
    {
		int a;
        cout << "A[" << i << "]= "; cin >> a;
		sum += a;
		if (a == 0) break;
	}
    cout << "SUM = " << sum << endl;
	return 0;
}