#include <iostream>

int main() {
    int w, h;
    char word;

    while(true){
        std :: cin >> w >> h >> word;
        std :: cout << w * h << "\n";

        if(word == 'C'){
            break; 
        }
    }
    return 0;
}