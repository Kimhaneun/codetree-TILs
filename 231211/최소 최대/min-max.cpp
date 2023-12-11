#include <iostream>
#include <climits>

using namespace std;
int main() {
    int n, input, maximum, minimum;
    int max = INT_MAX;
    int min = INT_MIN;
    cin >> n;

    for (int i; i < n; i++)
    {
        cin >> input;

        if (input < max)
            max = input;
        
        else if (input > min)
        min = input;
    }

    cout << max << " " << min;
    return 0;
}