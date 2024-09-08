#include <iostream>
using namespace std;

void Cal(int &a, int &b) {
    if (a > b) {
        a *= 2;
        b += 10;
    }
    else if (a < b) {
        a += 10;
        b *= 2;
    }
}

int main() {
    
    int a, b;

    cin >> a >> b;

    Cal(a, b);

    cout << a << " " << b;

    return 0;
}