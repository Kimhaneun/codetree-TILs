#include <iostream>

int main() {
    int n, i = 0;
    float sum = 0;

    while(true){
        std :: cin >> n;

       if(n < 20 || n > 29){
            break;
        }

        i++;
        sum += n;
      
    }
    std :: cout << std :: fixed;
    std :: cout.precision(2);
    
    std :: cout << sum / i;

    return 0;
}