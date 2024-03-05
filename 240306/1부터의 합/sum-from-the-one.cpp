#include <iostream>

using namespace std;
int main() {
    int n, answer = 0;
    cin >> n;

    for(int i = 1; i <= 100; i++){

        if(answer + i > n){
            cout << answer;
                    break;
        }
        answer += i;
    }
    return 0;
}