#include <iostream>

int main() {
    int n;

    std::cin >> n;
    for(int i = 0; i < n; i++){
       for(int j = n; i < j; j--){
        std::cout << "*";
       }
       for(int k = 0; k < i; k++){
        std::cout << " ";
       }
       for(int l = 0; l < i; l++){
        std::cout << " ";
       }
       for(int m = n; i < m; m--){
        std::cout << "*";
       }

       std::cout << "\n";
    }
    return 0;
}