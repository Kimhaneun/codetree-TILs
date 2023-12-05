#include <iostream>

using namespace std;
int main() {
    int input = 0, sum = 0;
    double average = 0, cnt;
    cout << fixed;
    cout.precision(1);
    for (int i = 0; i < 10; i++)
    {
        cin >> input;
        if (input >= 0 && input <= 200)
        {
            sum += input;
            cnt++;
        }
    }
    average = sum / cnt;
    cout << sum << " " << average;
    return 0;
}