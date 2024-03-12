#include <iostream>

int main() {
    int a, b, c;
    bool isBool;

    std :: cin >> a >> b >> c;
    
    for(int i = a; i <= b; i++){
        if(i % c == 0){
            isBool = true;
        }
    }

    if(isBool)
        std :: cout << "YES";

    else
        std :: cout << "NO";

    return 0;
}