#include <iostream>

int main() {
    int n, cnt = 0;

    std :: cin >> n;
    while(true){
        if(n >= 1000){
            break;
        }

        else if(n % 2 == 0){
            n = (n * 3) + 1;
            cnt++;
        }

        else if (n % 2 != 0){
            n = (n * 2) + 2;
            cnt++;
        }
    }

    std :: cout << cnt;
    return 0;
}