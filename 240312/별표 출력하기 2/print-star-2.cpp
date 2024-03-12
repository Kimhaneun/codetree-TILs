#include <iostream>

int main() {
    int n;

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = n; i < j; j--){
            std :: cout << "*" << " ";
        }

        std :: cout << "\n";
    }
    return 0;
}