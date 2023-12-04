#include <iostream>

using namespace std;
int main() {
    int cnt1 = 0, cnt2 = 0, input = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> input;
        if (input % 3 == 0)
        {
            cnt1++;
        }
        if (input % 5 == 0)
        {
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}