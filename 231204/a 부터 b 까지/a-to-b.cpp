#include <iostream>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << a << " ";
    for (int i = a; i < b;)
    {
        if (i % 2 != 0)
        {
            i *= 2;
            cout << i << " ";
        }
        else 
        {
            i += 3;
            cout << i << " ";
        }
    }
    return 0;
}