#include <iostream>

using namespace std;
int main() {
    int n, anser = 1;
    cin >> n;

    for(int i = 1; i <= 10; i++){
        anser *= i;
        if(anser >= n){
            cout << i;
            break;
        }
    }
    return 0;
}