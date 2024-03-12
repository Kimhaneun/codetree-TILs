#include <iostream>

int main() {
    int n;
    bool isBool = true;

    for(int i = 0; i < 5; i++){
        std :: cin >> n;
        if(n % 3 != 0){
            isBool = false;
            break;
        }
    }

    if(isBool)
        std :: cout << "1";
    else
        std :: cout << "0";
    return 0;
}