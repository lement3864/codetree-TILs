#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int a, b;

    cin >> a >> b;

    cout.precision(1);
    cout << a + b << " " << (double)(a + b) / 2;

    return 0;
}