#include <iostream>

using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b > c || c > b > a)
    cout << b;

     if (b > c > a || a > c > b)
    cout << c;

    else 
    cout << a;

    return 0;
}