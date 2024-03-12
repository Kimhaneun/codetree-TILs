#include <iostream>

int main() {
    int n, i = 0;
    int a = 1;
    int two = 2;
    std :: cin >> n;

    while(true){
        a *= two;
        i++;
        if(n == a){
            break;
        }    
    }

    std :: cout << i;
    return 0;
}