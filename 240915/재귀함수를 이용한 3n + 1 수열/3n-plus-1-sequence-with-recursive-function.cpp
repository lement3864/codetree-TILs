#include <iostream>
using namespace std;

int Func(int n) {
    if (n == 1)
        return 0;
        
    if (n % 2 == 0)
        return Func(n / 2) + 1;
    else
        return Func(n * 3 + 1) + 1;
}

int main() {

    int n;

    cin >> n;

    cout << Func(n);

    return 0;
}