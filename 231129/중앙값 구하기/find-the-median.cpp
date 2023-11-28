#include <iostream>

using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b > c)
    cout << b;
    else if (b > c > a)
    cout << c;
    else 
    cout << a;

    return 0;
}