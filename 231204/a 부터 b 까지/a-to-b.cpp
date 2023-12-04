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
            if (i < b)
            break;
            cout << i << " ";
        }
        else if (i % 2 == 0)
        {
            i += 3;
            if (i < b)
            break;
            cout << i << " ";
        }
    }
    return 0;
}