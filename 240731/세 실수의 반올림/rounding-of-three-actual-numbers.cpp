#include <iostream>
using namespace std;

int main() {
    
    cout << fixed;

    double num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    cout.precision(3);
    cout << num1 << "\n" << num2 << "\n" << num3;

    return 0;
}