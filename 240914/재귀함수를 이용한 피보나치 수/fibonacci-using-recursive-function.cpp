#include <iostream>
using namespace std;

int Fibo(int N) {
    if(N == 1)
        return 1;
    if(N == 2)
        return 1;

    return Fibo(N - 1) + Fibo(N - 2);
}

int main() {
    
    int N;

    cin >> N;

    cout << Fibo(N);

    return 0;
}