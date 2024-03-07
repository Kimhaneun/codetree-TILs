#include <iostream>

using namespace std;
int main() {
    int n, anser = 0;

    cin >> n;

    for (int i = 1; i <= n; i++){

       if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0){
        continue;
       } 

       anser++;
    }
    cout << anser;
    return 0;
}