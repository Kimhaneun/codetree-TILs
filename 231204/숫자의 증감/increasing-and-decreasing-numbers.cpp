#include <iostream>

using namespace std;
int main() {
    string c;
    int n;
    cin >> c >> n;
    if (c == "A")
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
    else if (c == "D")
    {
        for (int i = n; i <= n; i--)
        {
            cout << i << " ";
        }
    }
    return 0;
}