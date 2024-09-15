#include <iostream>
using namespace std;

int Func(int N) {
    if (N == 1)
        return 1;
    if (N == 2)
        return 2;
        
    if (N % 2 == 0)
        return Func(N - 2) + N;
    else
        return Func(N - 2) + N;
}

int main() {
    
    int N;

    cin >> N;

    cout << Func(N);

    return 0;
}