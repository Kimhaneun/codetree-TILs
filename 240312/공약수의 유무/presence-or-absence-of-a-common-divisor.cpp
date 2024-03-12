#include <iostream>

int main() {
    int a, b;
    bool isBool = false;

    std :: cin >> a >> b;

    for(int i = a; i < b; i++){
        if(1920 % i == 0 && 2880 % i == 0){
            isBool = true;
            break;
        }
    }

    if(isBool)
        std :: cout << "1";

    else 
        std :: cout << "0";
    return 0;
}