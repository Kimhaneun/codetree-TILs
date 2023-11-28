#include <iostream>

using namespace std;
int main() {
    string astr, bstr, cstr;
    int a, b, c;
    cin >> astr >> a;
    cin >> bstr >> b;
    cin >> cstr >> c;

    if((astr == "Y" && a >= 37) && (bstr == "Y" && b >= 37) || (astr == "Y" && a >= 37) && (cstr == "Y" && c >= 37) || (bstr == "Y" && b >= 37) && (cstr == "Y" && c >= 37))
    cout << "E";
    else 
    cout << "N";
    
    return 0;
}