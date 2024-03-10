#include <iostream>

int main() {
    int n;
    while(true){
        std :: cin >> n;
        if(n == 1){
            std :: cout << "John\n";
        }
        else if (n == 2){
            std :: cout << "Tom\n";
        }
        else if(n == 3){
            std :: cout << "Paul\n";
        }
        else if(n == 4){
            std :: cout << "Sam\n";
        }
        else{
            std :: cout << "Vacancy";
            break;
        }
    }
    return 0;
}