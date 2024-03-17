#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

    int n;

    std:: cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            std::cout << i;
        }
        std::cout << "\n";
    }
    return 0;
}