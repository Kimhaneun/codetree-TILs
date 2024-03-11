#include <iostream>

int main() {
    int n, i = 0;

    while(true){
        std :: cin >> n;

        if(n % 2 == 0){
            n /= 2;
            i++;
        }

        else if(n % 2 != 0){
            n = (n * 3) + 1;
            i++;
        }

        if(n == 1){
            break;
        } 
    }

    std :: cout << i;

    return 0;
}