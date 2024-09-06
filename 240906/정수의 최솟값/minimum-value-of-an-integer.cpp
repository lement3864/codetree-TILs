#include <iostream>
using namespace std;

int MinNum(int a, int b, int c) {

    int result = a;

    if (result >= b)
    {
        result = b;
    }

    if (result >= c)
    {
        result = c;
    }

    return result;
}

int main() {
    
    int a, b, c;

    cin >> a >> b >> c;

    cout << MinNum(a, b, c);

    return 0;
}