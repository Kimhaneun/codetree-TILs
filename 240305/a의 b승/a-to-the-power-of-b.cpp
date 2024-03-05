#include <iostream>

using namespace std;
int main() {
    int a, b = 0;
    cin >> a >> b;

    int sum = a;
    for (int i = a; i <= b; i++)
    {
        sum *= a;
    }

    cout << sum;
    return 0;
}