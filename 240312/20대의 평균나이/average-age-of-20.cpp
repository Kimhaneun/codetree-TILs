#include <iostream>

int main() {
    int n, i = 0;
    float sum = 0;

    while(true){
        std :: cin >> n;
       
        if(n >= 30){
            std :: cout << std :: fixed;
            std :: cout.precision(2);
            std :: cout << sum / i;

            break;
        }

        sum += n;
        i++;
    }
    return 0;
}