#include <iostream>

int main() {
    int n;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        // 띄어 쓰기
        for (int j = 0; j < i; j++) {
            std::cout << "  ";
        }

        // 별 찍기
        for (int k = (2 * n) - i - 1; i < k ; k--) {
            std::cout << "*" << " ";
        }

        std::cout << "\n";
    }
    return 0;
}