#include <iostream>
using namespace std;

int Func(int N) {
    if (N == 1)
        return 2;
    if (N == 2)
        return 4;

    return (Func(N - 1) * Func(N - 2)) % 100;
}

int main() {
    
    int N;

    cin >> N;

    cout << Func(N);

    return 0;
}