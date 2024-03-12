#include <iostream>

int main() {
    int n;
    bool isBool = false;

    std :: cin >> n;
    if(n > 0){
        for(int i = 2; i < n; i++){
            if( n % i == 0){
                isBool = true;
            }
        }
    }

    if(isBool){
        std :: cout << "C";
    }
    else
        std :: cout << "N";

    return 0;
}