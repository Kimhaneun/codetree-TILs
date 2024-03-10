#include <iostream>

using namespace std;
int main() {
    int n, anser = 0;
    cin >> n;

    anser = n;
    for(int i = 1; i < n; i++){
        anser /= i;
        if(anser <= 1){
            cout << i;
            break;
        }
    }

    return 0;
}