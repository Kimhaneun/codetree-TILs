#include <iostream>

int main() {
    int n;
    bool isBool = true;

    std :: cin >> n;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isBool = false;
            break;
        }
    }

    if(isBool)
        std :: cout << "P";
    else
        std :: cout << "C";
    return 0;
}