#include <iostream>

using namespace std;
int main() {
    int input, sum = 0; 
    float p, n = 0;

    cin >> n;

    for(int i = 0; n > i; i++)
    {
        cin >> input;
        sum += input;
    }

    p = sum / n;
    cout << fixed;
    cout.precision(1);

    cout << sum << " " << p;
    return 0;
}