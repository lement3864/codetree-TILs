#include <iostream>
using namespace std;

void CoutHello(int N) {
    if (N == 0) return;

    CoutHello(N - 1);

    cout << "HelloWorld" << endl;
}

int main() {
    
    int N;

    cin >> N;

    CoutHello(N);

    return 0;
}