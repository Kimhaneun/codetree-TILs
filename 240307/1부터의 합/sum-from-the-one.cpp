#include <iostream>

using namespace std;
int main() {
    int n, answer = 0;
    cin >> n;
    //  곱하다가 최초로 5의 배수가 되는 순간에 곱하는 것을 멈추고 해당 값을 출력한 뒤 끝내는 프로그램

    for(int i = 1; i < 100; i++){
        answer++;
        if(answer + 1 > n){
            break;
        }
    }
    cout << answer;

    return 0;
}