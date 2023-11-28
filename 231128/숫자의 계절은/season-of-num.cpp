#include <iostream>

using namespace std;
int main() {
    int m;
    cin >> m;
    if (3 <= m >= 5)
    cout << "Spring";
    else if (6 <= m >= 8)
    cout << "Summer";
    else if (9 <= m >= 11)
    cout << "Fall";
    else
    cout << "Winter";
    return 0;
}