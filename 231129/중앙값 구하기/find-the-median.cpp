#include <iostream>

using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b > c || c > b > a)
    cout << b;
    else if (b > c > a || a > c > b)
    cout << c;
    else if (b > a > c || c > a > b)
    cout << a;

    return 0;
}