#include <iostream>
using namespace std;

int Func(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    return Func(n / 3) + Func(n - 1);
}

int main() {
    
    int N;

    cin >> N;

    cout << Func(N);

    return 0;
}