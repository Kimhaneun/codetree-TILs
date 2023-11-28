#include <iostream>

using namespace std;
int main() {
    int age0, age1;
    string gender0, gender1;
    cin >> age0 >> gender0;
    cin >> age1 >> gender1;
    if((age0 >= 19 && gender0 == "M") || (age1 >= 19 && gender1 == "M"))
    cout << "1";
    else 
    cout << "0";
    return 0;
}