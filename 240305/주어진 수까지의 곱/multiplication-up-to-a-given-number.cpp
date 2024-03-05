#include <iostream>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    int prod = a;

    for (int i = a + 1; i <= b; i++)
    {
        prod *= i;
    }
    cout << prod;
    return 0;
}