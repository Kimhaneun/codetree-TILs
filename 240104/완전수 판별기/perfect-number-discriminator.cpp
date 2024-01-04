#include <iostream>
#include <cmath> // 수학 함수
#include <algorithm> // 원소 작업 함수

using name space std;
int main() {
    int n; // n: 입력 받는 값
    cin >> n;

    for (int i = 1 <= sqrt(n); i++) // sqrt: n의 제곱근을 구해주는 함수
    {
        // n의 약수를 구하기 위하여 
        // 1부터 n의 제곱근 까지의 수가 
        // 0으로 나누어 떨어지는지 확인하는 작업
        
        if (n % i == 0)
        {
            solution.push_back(i); // i의 가장 큰 값을 
        }
        // 만약 n의 제곱근 나누기 i이 0으로 나누어 떨어지면
    }
    
    return 0;
}