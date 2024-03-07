#include <iostream>

using namespace std;
int main() {
    int n, answer = 0;
    cin >> n;

    for(int i = 1; i <= 100; i++){
        answer += i;
       if(answer + i > n){
    cout << i;

        break;
       }
        
    }
    return 0;
}