#include <iostream>

using namespace std;
int main() {
    int n, answer = 1;
    cin >> n;

    for(int i = 1; i <= 100; i++){

        if(answer + i > n){
            cout << answer;
                    break;
        }
        answer += i;
        if(answer + i >= 100){
            cout << answer;
            break;
        }

    }
    return 0;
}