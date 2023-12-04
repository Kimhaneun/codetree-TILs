#include <iostream>

using namespace std;
int main() {
    int n, input, sum_val = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input % 2 != 0 && input % 3 == 0)
        sum_val += input;
    }
    cout << sum_val;
    return 0;
}