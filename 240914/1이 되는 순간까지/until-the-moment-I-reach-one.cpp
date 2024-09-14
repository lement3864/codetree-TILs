#include <iostream>
using namespace std;

int Func (int N) {
    if (N == 1)
        return 0;

    if (N % 2 == 0)
        return Func(N / 2) + 1;
    else
        return Func(N / 3) + 1;
}

int main() {
    
    int N;

    cin >> N;

    cout << Func(N);

    return 0;
}