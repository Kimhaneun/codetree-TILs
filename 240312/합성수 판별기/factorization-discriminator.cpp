#include <iostream>

int main() {
    int n;

    std :: cin >> n;
    if(n > 0 && n % n == 0)
        std :: cout << "C";

    else
        std :: cout << "N";

    return 0;
}