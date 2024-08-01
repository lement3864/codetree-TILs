#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int a, b;

    cin >> a >> b;

    cout.precision(2);
    cout << (double)(a + b) / (a - b);

    return 0;
}