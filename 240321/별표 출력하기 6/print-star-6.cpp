#include <iostream>

int main() {
    int n;
    
    std::cin >> n;

    for(int i = 0; i < n; i++){
       for(int j = 0; j < i; j++){
        std::cout << "  ";
       }
       for(int k = (2 * n) - i - 1; i < k; k--){
        std::cout << "*" << " ";
       }
        std::cout << "\n";
    }

    for(int i = 0; i < n - 1; i++){
        for(int l = (n) - i - 2; l > 0; l--){
            std::cout << "  ";
       }
       for(int m = 1; m < 2 * i + 4; m++){
            std::cout << "*" << " ";
       }
       std::cout << "\n";
    }
    return 0;
}