#include <iostream>

using namespace std;
int main() {
    int a = 3;
    int n;
    cin >> n;
    while (a <= n)
    {
        cout << a << " ";
        a += 3;
    }
    return 0;
}