#include <iostream>
using namespace std;

int main() {
    
    int a = 5, b = 6, c = 7;
    int tempA = a, tempB = b, tempC = c;
    
    b = tempA;
    c = tempB;
    a = tempC;

    cout << a << "\n" << b << "\n" << c;

    return 0;
}