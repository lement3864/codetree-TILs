#include <iostream>
using namespace std;

int PrintFunc (int N) {
    if (N < 10)
        return N * N;
    
    return PrintFunc(N / 10) + ((N % 10) * (N % 10));
}

int main() {
    
    int N;

    cin >> N;

    cout << PrintFunc(N);

    return 0;
}