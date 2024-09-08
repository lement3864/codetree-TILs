#include <iostream>
using namespace std;

void Cal(int &a, int &b) {
    if (a > b)
    {
        a += 25;
        b *= 2;
    }
    else if (a < b)
    {
        b += 25;
        a *= 2;
    }
}

int main() {
    
    int a, b;

    cin >> a >> b;

    Cal(a, b);

    cout << a << " " << b;

    return 0;
}