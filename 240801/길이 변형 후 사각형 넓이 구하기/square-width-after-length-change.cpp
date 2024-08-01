#include <iostream>
using namespace std;

int main() {
    
    int wide, height;

    cin >> wide >> height;

    wide += 8;
    height *= 3;

    cout << wide << "\n";
    cout << height << "\n";
    cout << wide * height << "\n";

    return 0;
}