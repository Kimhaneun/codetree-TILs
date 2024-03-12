#include <iostream>

int main() {
    int a, b, c = 0;
    bool isBool = false;

    std :: cin >> a >> b >> c;

    for(int i = a; i < b; i++){
        if(i % c == 0){
            isBool = true;
            break;
        }
    }

    if(!isBool)
        std :: cout << "YES";
    else if(isBool)
        std :: cout << "NO";
    return 0;
}