#include <iostream>

int main() {
    int n;

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        for(int k = n; i < k; k--){
            for(int j = n; i < j; j--){
                std :: cout << "*";
            }
            std :: cout << " ";
        }
      
        std :: cout << "\n";
    }
    return 0;
}