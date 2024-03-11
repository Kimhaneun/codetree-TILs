#include <iostream>

int main() {
    int n, i = 0;

    while(i < 3){
        std :: cin >> n;
            
        if(n % 2 == 0){
            std :: cout << n / 2 << "\n";
            i++;
        }
    }
    return 0;
}