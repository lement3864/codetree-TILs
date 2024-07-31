#include <iostream>
using namespace std;

int main() {
    
    cout << fixed;

    double a, b;
    
    cin >> a >> b;

    cout.precision(2);
    cout << a + b;

    return 0;
}