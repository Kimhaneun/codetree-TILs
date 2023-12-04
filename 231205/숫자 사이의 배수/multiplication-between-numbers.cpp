#include <iostream>

using namespace std;
int main() {
    int a, b, sum_val = 0;
    float val = 0, n = 0;
    cin >> a >> b;
    cout << fixed;
    cout.precision(1);
    for (int i = a; i <= b; i++)
    {
        if (i % 5 == 0 || i % 7 == 0)
        {
            sum_val += i;
            n++;
        }
    }
    val = (sum_val / n);
    cout << sum_val << " " << val;
    return 0;
}