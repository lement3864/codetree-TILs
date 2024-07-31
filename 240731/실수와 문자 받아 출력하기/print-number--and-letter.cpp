#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cout << fixed;

    string c;
    double a, b;

    cin >> c >> a >> b;

    cout.precision(2);
    cout << c << "\n" << a << "\n" << b;

    return 0;
}